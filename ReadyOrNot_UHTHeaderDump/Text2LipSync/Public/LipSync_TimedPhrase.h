#pragma once
#include "CoreMinimal.h"
#include "LipSync_TimedPhrase.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_TimedPhrase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FlagEmotion;
    
    TEXT2LIPSYNC_API FLipSync_TimedPhrase();
};

