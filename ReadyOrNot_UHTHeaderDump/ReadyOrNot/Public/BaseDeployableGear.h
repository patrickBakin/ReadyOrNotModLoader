#pragma once
#include "CoreMinimal.h"
#include "BaseItem.h"
#include "BaseDeployableGear.generated.h"

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ABaseDeployableGear : public ABaseItem {
    GENERATED_BODY()
public:
    ABaseDeployableGear();
};

