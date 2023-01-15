#pragma once
#include "CoreMinimal.h"
#include "ThrowItemThroughDoorActivity.h"
#include "ThrowGrenadeThroughDoorActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UThrowGrenadeThroughDoorActivity : public UThrowItemThroughDoorActivity {
    GENERATED_BODY()
public:
    UThrowGrenadeThroughDoorActivity();
};

