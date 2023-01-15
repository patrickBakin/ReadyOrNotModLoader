#pragma once
#include "CoreMinimal.h"
#include "SavedThreatAwarenessActors.h"
#include "DoorSavedActors.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "WorldGenSave.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UWorldGenSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedThreatAwarenessActors> SavedThreatAwarenessActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDoorSavedActors> SavedDoorActors;
    
    UWorldGenSave();
};

