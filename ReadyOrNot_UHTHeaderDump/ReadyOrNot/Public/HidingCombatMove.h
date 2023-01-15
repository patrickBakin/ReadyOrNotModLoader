#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "HidingCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UHidingCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    UHidingCombatMove();
};

