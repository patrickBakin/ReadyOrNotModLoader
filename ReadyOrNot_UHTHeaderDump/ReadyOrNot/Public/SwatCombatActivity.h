#pragma once
#include "CoreMinimal.h"
#include "BaseCombatActivity.h"
#include "SwatCombatActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API USwatCombatActivity : public UBaseCombatActivity {
    GENERATED_BODY()
public:
    USwatCombatActivity();
};

