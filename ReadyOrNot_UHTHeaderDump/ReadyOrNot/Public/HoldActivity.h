#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "HoldActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UHoldActivity : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UHoldActivity();
};

