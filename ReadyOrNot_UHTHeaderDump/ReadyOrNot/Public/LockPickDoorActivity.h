#pragma once
#include "CoreMinimal.h"
#include "DoorInteractionActivity.h"
#include "LockPickDoorActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API ULockPickDoorActivity : public UDoorInteractionActivity {
    GENERATED_BODY()
public:
    ULockPickDoorActivity();
};

