#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "CivilianFleeCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UCivilianFleeCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    UCivilianFleeCombatMove();
};

