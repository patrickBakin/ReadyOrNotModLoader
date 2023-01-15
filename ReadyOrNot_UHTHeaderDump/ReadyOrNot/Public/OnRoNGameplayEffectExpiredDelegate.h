#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnRoNGameplayEffectExpiredDelegate.generated.h"

class UReadyOrNotGameplayEffect;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoNGameplayEffectExpired, TSubclassOf<UReadyOrNotGameplayEffect>, InGameplayEffectClass);

