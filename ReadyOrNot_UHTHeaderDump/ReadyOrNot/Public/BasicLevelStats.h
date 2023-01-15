#pragma once
#include "CoreMinimal.h"
#include "BasicLevelStats.generated.h"

USTRUCT(BlueprintType)
struct FBasicLevelStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BestRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimesCompleted;
    
    READYORNOT_API FBasicLevelStats();
};

