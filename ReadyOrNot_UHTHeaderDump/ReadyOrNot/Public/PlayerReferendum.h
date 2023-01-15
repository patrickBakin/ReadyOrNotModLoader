#pragma once
#include "CoreMinimal.h"
#include "Referendum.h"
#include "PlayerReferendum.generated.h"

class AReadyOrNotPlayerState;

UCLASS(Blueprintable)
class READYORNOT_API APlayerReferendum : public AReferendum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* TargetPlayerState;
    
    APlayerReferendum();
};

