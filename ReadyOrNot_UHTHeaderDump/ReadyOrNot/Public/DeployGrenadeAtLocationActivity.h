#pragma once
#include "CoreMinimal.h"
#include "DeployItemAtLocationActivity.h"
#include "DeployGrenadeAtLocationActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDeployGrenadeAtLocationActivity : public UDeployItemAtLocationActivity {
    GENERATED_BODY()
public:
    UDeployGrenadeAtLocationActivity();
};

