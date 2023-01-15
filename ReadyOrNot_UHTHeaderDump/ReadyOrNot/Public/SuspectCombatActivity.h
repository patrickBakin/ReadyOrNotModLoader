#pragma once
#include "CoreMinimal.h"
#include "BaseCombatActivity.h"
#include "SuspectCombatActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API USuspectCombatActivity : public UBaseCombatActivity {
    GENERATED_BODY()
public:
    USuspectCombatActivity();
};

