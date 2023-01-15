#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseDeployableGear.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DoorRam.generated.h"

class AActor;
class UDamageType;
class ADoor;
class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ADoorRam : public ABaseDeployableGear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> AcceptableHitWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> RamDamageTypeDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> RamDamageTypeCrumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> RamDamageTypePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrikePlayerDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult LastGoodHit;
    
public:
    ADoorRam();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult TryGetHitPosition() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StrikePlayer(APlayerCharacter* TargetPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StrikeDoor(ADoor* TargetDoor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBatteringRamHit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHitActor(const FHitResult& TestHit) const;
    
};

