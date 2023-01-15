#pragma once
#include "CoreMinimal.h"
#include "WorldBuildingActivity.h"
#include "InvestigateActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UInvestigateActivity : public UWorldBuildingActivity {
    GENERATED_BODY()
public:
    UInvestigateActivity();
};

