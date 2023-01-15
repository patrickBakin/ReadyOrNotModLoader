#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "TrackingCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTrackingCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    UTrackingCombatMove();
};

