#pragma once
#include "CoreMinimal.h"
#include "ETargetingCompTracking.generated.h"

UENUM(BlueprintType)
enum class ETargetingCompTracking : uint8 {
    TCT_None,
    TCT_TrackingActivity,
    TCT_TrackingCombatMoveActivity,
    TCT_TrackingCoverAreaCommand,
    TCT_TrackingVisibleNeutrals,
    TCT_TrackingEnemyLastKnownPosition,
    TCT_TrackingNoiseStimulus,
    TCT_TrackingThreatAwarenessActor,
    TCT_TrackingLatestStimulus,
    TCT_TrackingVisibleTarget,
    TCT_TrackingMoveVector,
    TCT_TrackScriptedFireAtActor,
    TCT_TrackNearestDoor,
    TCT_TrackUncheckedThreatAwareness,
    TCT_TrackHesitateTarget,
    TCT_TrackMontagePosition,
    TCT_TrackCustomLocation,
    TCT_MAX UMETA(Hidden),
};

