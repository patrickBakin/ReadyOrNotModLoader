#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForSpawn.generated.h"

class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForSpawn : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForSpawn : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterSpawned(AReadyOrNotCharacter* SpawnedCharacter);
    
};

