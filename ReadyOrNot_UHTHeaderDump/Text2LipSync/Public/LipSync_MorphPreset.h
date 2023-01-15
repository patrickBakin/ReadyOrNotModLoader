#pragma once
#include "CoreMinimal.h"
#include "LipSync_MorphTarget.h"
#include "LipSync_MorphPreset.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_MorphPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLipSync_MorphTarget> Data;
    
    TEXT2LIPSYNC_API FLipSync_MorphPreset();
};

