#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DeployableDepot.generated.h"

class UDeployableSpawnComponent;

UCLASS(Blueprintable)
class READYORNOT_API ADeployableDepot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDeployableSpawnComponent*> SpawnedDeployableComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DepotLabel;
    
    ADeployableDepot();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccessfulSpawn();
    
    UFUNCTION(BlueprintCallable)
    void OnGameStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnSuccessfulSpawn();
    
};

