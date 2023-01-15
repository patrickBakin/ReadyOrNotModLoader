#pragma once
#include "CoreMinimal.h"
#include "EPhoneme.h"
#include "LipSync_PhonemeInPhrase.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_PhonemeInPhrase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhoneme Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FlagEmotion;
    
    TEXT2LIPSYNC_API FLipSync_PhonemeInPhrase();
};

