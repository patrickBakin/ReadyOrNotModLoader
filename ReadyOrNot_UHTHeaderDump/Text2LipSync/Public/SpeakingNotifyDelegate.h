#pragma once
#include "CoreMinimal.h"
#include "SpeakingNotifyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpeakingNotify, const FName&, NotifyName, float, CurrentTime);

