#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "SoftCoverCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API USoftCoverCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    USoftCoverCombatMove();
};

