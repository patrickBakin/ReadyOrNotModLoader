#pragma once
#include "CoreMinimal.h"
#include "BaseCombatActivity.h"
#include "CivilianCombatActivity.generated.h"

class UCivilianFleeCombatMove;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UCivilianCombatActivity : public UBaseCombatActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCivilianFleeCombatMove* CivilianFleeCombatMove;
    
public:
    UCivilianCombatActivity();
};

