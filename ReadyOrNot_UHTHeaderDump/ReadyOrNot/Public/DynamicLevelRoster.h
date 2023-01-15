#pragma once
#include "CoreMinimal.h"
#include "DynamicLevelDataPick.h"
#include "DynamicLevelRoster.generated.h"

USTRUCT(BlueprintType)
struct FDynamicLevelRoster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverallSpawnPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumPicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumPicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicLevelDataPick> SpawnLevel;
    
    READYORNOT_API FDynamicLevelRoster();
};

