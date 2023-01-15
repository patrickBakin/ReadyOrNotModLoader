#pragma once
#include "CoreMinimal.h"
#include "DoorInteractionActivity.h"
#include "ToggleDoorActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UToggleDoorActivity : public UDoorInteractionActivity {
    GENERATED_BODY()
public:
    UToggleDoorActivity();
};

