#pragma once
#include "CoreMinimal.h"
#include "HidingAnimStateMachineData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FHidingAnimStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsHiding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LoopAnim;
    
    READYORNOT_API FHidingAnimStateMachineData();
};

