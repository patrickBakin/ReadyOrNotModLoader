#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "C2Explosive.generated.h"

class AActor;
class APlacedC2Explosive;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API AC2Explosive : public ABaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult LastGoodPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastPlacedC2Explosive, meta=(AllowPrivateAccess=true))
    APlacedC2Explosive* LastPlacedC2Explosive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlacementDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* CurrentActorPlacement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlacedC2Explosive> PlacedC2Class;
    
public:
    AC2Explosive();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartC2Placement(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FinishC2Placement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastPlacedC2Explosive();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartPlaceC2Explosive();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EquipDetonator(bool bFromExplosives) const;
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_C2PlacementFinished();
    
};

