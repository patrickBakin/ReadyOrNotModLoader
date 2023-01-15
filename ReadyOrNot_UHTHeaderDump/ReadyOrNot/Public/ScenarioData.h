#pragma once
#include "CoreMinimal.h"
#include "SpawnData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ScenarioData.generated.h"

USTRUCT(BlueprintType)
struct FScenarioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnData SpawnData;
    
    READYORNOT_API FScenarioData();
};

