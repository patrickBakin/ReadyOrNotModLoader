#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "SuppressionCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API USuppressionCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    USuppressionCombatMove();
};

