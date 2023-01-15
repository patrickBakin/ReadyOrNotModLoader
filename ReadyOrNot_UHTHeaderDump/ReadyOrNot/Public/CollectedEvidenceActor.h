#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CollectedEvidenceActor.generated.h"

class UFMODEvent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class READYORNOT_API ACollectedEvidenceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CollectionBagMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Bag_Spawn_Sound;
    
    ACollectedEvidenceActor();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlaySpawnSound();
    
    UFUNCTION(BlueprintCallable)
    void PlaySpawnSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlaySpawnSound();
    
};

