#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "PushCombatMove.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UPushCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    UPushCombatMove();
};

