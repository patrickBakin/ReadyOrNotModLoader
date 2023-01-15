#pragma once
#include "CoreMinimal.h"
#include "EPhoneme.h"
#include "LipSync_PhoneticRule.generated.h"

USTRUCT(BlueprintType)
struct FLipSync_PhoneticRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCondition_IsFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCondition_IsLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Condition_NextSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPhoneme> Result_Replace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResult_RemoveNext;
    
    TEXT2LIPSYNC_API FLipSync_PhoneticRule();
};

