#pragma once
#include "CoreMinimal.h"
#include "ScenarioData.h"
#include "ScenarioDataArray.generated.h"

USTRUCT(BlueprintType)
struct FScenarioDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScenarioData> SaveData;
    
    READYORNOT_API FScenarioDataArray();
};

