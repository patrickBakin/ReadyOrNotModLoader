#pragma once
#include "CoreMinimal.h"
#include "EPVPEvent.generated.h"

UENUM(BlueprintType)
enum class EPVPEvent : uint8 {
    None,
    PlayerKilled,
    PlayerArrested,
    PlayerFreed,
    KillConfirmed,
    ReportedEvidence,
    VIPSecured,
    VIPArrested,
    VIPFreed,
    VIPKilled,
    FlagCaptured,
    FlagDropped,
    IntelCollected,
    IntelDropped,
    IntelExtracting,
    IntelExtracted,
    IncrimClueFound,
};

