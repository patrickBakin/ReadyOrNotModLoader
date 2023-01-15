#pragma once
#include "CoreMinimal.h"
#include "Shotgun.h"
#include "BreachingShotgun.generated.h"

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ABreachingShotgun : public AShotgun {
    GENERATED_BODY()
public:
    ABreachingShotgun();
};

