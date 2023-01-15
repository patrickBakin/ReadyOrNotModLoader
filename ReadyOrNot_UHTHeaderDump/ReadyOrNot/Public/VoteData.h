#pragma once
#include "CoreMinimal.h"
#include "EVoteState.h"
#include "VoteData.generated.h"

USTRUCT(BlueprintType)
struct FVoteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoteState CurrentVoteState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoteReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoteQuestion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVoteEnabled: 1;
    
    READYORNOT_API FVoteData();
};

