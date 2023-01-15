#pragma once
#include "CoreMinimal.h"
#include "HoleTraversalAnimStateMachineData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FHoleTraversalAnimStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsTraversing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LoopAnim;
    
    READYORNOT_API FHoleTraversalAnimStateMachineData();
};

