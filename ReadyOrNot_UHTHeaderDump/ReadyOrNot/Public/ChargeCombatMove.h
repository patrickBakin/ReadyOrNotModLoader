#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "ChargeCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UChargeCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    UChargeCombatMove();
};

