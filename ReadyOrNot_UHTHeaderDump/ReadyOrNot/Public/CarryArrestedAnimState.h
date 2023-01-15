#pragma once
#include "CoreMinimal.h"
#include "CarryArrestedAnimState.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FCarryArrestedAnimState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LoopAnim;
    
    READYORNOT_API FCarryArrestedAnimState();
};

