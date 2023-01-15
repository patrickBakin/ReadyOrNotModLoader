#pragma once
#include "CoreMinimal.h"
#include "DoorInteractionActivity.h"
#include "DeployWedgeActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDeployWedgeActivity : public UDoorInteractionActivity {
    GENERATED_BODY()
public:
    UDeployWedgeActivity();
};

