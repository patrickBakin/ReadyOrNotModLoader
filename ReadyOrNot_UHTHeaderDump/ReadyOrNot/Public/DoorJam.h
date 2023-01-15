#pragma once
#include "CoreMinimal.h"
#include "BaseItem.h"
#include "CanUseMultitoolOn.h"
#include "DoorJam.generated.h"

class USkeletalMesh;
class AReadyOrNotCharacter;
class ADoor;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ADoorJam : public ABaseItem, public ICanUseMultitoolOn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorjamSet, meta=(AllowPrivateAccess=true))
    uint8 bSet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* PlacedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ADoor* PendingPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ADoor* JammedDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DoorJamSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* PlacedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacementTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WedgeRemovalTime;
    
    ADoorJam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartDoorjamPlacement(ADoor* PendingDoor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FinishDoorjamPlacement(ADoor* PendingDoor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorjamSet();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartPlacement();
    
    UFUNCTION(BlueprintCallable)
    void JamDoor(ADoor* Door);
    
    
    // Fix for true pure virtual functions not being implemented
};

