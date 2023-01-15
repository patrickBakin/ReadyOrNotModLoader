#pragma once
#include "CoreMinimal.h"
#include "ThrownItem.h"
#include "ThrownGrenade.generated.h"

UCLASS(Abstract, Blueprintable)
class READYORNOT_API AThrownGrenade : public AThrownItem {
    GENERATED_BODY()
public:
    AThrownGrenade();
};

