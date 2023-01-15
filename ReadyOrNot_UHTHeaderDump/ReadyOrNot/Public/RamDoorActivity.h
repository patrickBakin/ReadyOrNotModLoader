#pragma once
#include "CoreMinimal.h"
#include "DoorBreachActivity.h"
#include "RamDoorActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API URamDoorActivity : public UDoorBreachActivity {
    GENERATED_BODY()
public:
    URamDoorActivity();
};

