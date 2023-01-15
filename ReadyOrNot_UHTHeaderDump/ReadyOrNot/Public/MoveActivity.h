#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "MoveActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UMoveActivity : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UMoveActivity();
};

