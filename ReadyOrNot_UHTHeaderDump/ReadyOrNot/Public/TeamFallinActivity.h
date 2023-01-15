#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "TeamFallinActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTeamFallinActivity : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UTeamFallinActivity();
};

