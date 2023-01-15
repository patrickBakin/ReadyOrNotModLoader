#pragma once
#include "CoreMinimal.h"
#include "PickupActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Magazine.h"
#include "PickupMagazineActor.generated.h"

class AActor;
class UPrimitiveComponent;
class UFMODEvent;
class ABaseMagazineWeapon;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API APickupMagazineActor : public APickupActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName MagazineLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumHitThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DroppedMagazineHitEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMagazine MagazineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABaseMagazineWeapon* CameFromWeapon;
    
public:
    APickupMagazineActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Pickup(AActor* InPickupInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetWeapon(ABaseMagazineWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    ABaseMagazineWeapon* GetValidWeaponForPickerUpper(APlayerCharacter* PlayerCharacter);
    
};

