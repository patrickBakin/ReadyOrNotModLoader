#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "SwatDuelingCombatMove.generated.h"

class USwatDuelingCombatMove;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API USwatDuelingCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwatDuelingCombatMove* LeaderCombatMove;
    
public:
    USwatDuelingCombatMove();
};

