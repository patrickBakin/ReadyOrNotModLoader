#pragma once
#include "CoreMinimal.h"
#include "LipSync_TimedData.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_TimedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Data;
    
    TEXT2LIPSYNC_API FLipSync_TimedData();
};

