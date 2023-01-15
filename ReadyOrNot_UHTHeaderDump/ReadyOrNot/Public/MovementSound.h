#pragma once
#include "CoreMinimal.h"
#include "MovementSound.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FMovementSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    READYORNOT_API FMovementSound();
};

