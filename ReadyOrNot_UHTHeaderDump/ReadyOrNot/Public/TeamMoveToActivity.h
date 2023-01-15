#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "TeamMoveToActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTeamMoveToActivity : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UTeamMoveToActivity();
};

