#pragma once
#include "CoreMinimal.h"
#include "ActivityStateTransitionDelegateDelegate.h"
#include "ActivityStateTransition.generated.h"

class UActivityState;

USTRUCT(BlueprintType)
struct FActivityStateTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransitionToStateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransitionToStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivityStateTransitionDelegate TransitionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityState* ToState;
    
    READYORNOT_API FActivityStateTransition();
};

