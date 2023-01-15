#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "ArrestSuspectActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UArrestSuspectActivity : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UArrestSuspectActivity();
};

