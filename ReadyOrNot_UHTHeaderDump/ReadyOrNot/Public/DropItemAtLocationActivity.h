#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "DropItemAtLocationActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDropItemAtLocationActivity : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UDropItemAtLocationActivity();
};

