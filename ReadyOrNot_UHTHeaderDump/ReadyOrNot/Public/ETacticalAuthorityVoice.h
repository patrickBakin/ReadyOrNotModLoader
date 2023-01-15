#pragma once
#include "CoreMinimal.h"
#include "ETacticalAuthorityVoice.generated.h"

UENUM(BlueprintType)
enum class ETacticalAuthorityVoice : uint8 {
    TAV_None,
    TAV_Surrender,
    TAV_PickUpItem,
    TAV_DropTheGun,
    TAV_GetOnTheFloor,
    TAV_ComeHere,
    TAV_Wait,
    TAV_PutHandsUp,
    TAV_MoveOverThere,
    TAV_ReportDead,
    TAV_ReportArrested,
    TAV_ReportIncapacitated,
    TAV_ReportEvidence,
    TAV_MAX UMETA(Hidden),
};

