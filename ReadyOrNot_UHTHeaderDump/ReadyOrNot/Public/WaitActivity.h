#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "WaitActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UWaitActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UWaitActivity();
};

