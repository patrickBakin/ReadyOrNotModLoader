#pragma once
#include "CoreMinimal.h"
#include "TrapActor.h"
#include "TrapSpawnPoint.generated.h"

class UTrapSpawnComponent;

UCLASS(Blueprintable)
class READYORNOT_API ATrapSpawnPoint : public ATrapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrapSpawnComponent* SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadySpawned;
    
    ATrapSpawnPoint();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrapSpawned(UTrapSpawnComponent* TrapSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void FinishTrapSpawningFromRoster(UTrapSpawnComponent* Spawner);
    
    UFUNCTION(BlueprintCallable)
    void CheckForTrapDespawning();
    
};

