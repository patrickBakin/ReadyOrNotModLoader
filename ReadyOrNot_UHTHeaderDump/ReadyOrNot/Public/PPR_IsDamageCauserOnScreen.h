#pragma once
#include "CoreMinimal.h"
#include "PostProcessRequirement.h"
#include "PPR_IsDamageCauserOnScreen.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UPPR_IsDamageCauserOnScreen : public UPostProcessRequirement {
    GENERATED_BODY()
public:
    UPPR_IsDamageCauserOnScreen();
};

