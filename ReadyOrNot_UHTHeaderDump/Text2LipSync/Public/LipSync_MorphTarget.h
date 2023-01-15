#pragma once
#include "CoreMinimal.h"
#include "LipSync_MorphTarget.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_MorphTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    TEXT2LIPSYNC_API FLipSync_MorphTarget();
};

