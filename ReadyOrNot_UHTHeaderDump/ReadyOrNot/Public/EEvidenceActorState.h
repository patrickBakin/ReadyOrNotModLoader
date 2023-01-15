#pragma once
#include "CoreMinimal.h"
#include "EEvidenceActorState.generated.h"

UENUM(BlueprintType)
enum class EEvidenceActorState : uint8 {
    Unclaimed,
    Collected,
    Extraction,
    Dropped,
};

