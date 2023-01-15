#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "WaitingCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UWaitingCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    UWaitingCombatMove();
};

