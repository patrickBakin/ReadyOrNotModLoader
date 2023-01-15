#pragma once
#include "CoreMinimal.h"
#include "AnimTurnTransition.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimTurnTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeTrigger;
    
    READYORNOT_API FAnimTurnTransition();
};

