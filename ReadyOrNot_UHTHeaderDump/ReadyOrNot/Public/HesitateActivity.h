#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "HesitateActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UHesitateActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UHesitateActivity();
};

