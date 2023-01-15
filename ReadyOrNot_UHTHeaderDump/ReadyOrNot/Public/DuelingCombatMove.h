#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "DuelingCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDuelingCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    UDuelingCombatMove();
};

