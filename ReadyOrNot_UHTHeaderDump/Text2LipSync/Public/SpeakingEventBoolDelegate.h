#pragma once
#include "CoreMinimal.h"
#include "SpeakingEventBoolDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpeakingEventBool, bool, State);

