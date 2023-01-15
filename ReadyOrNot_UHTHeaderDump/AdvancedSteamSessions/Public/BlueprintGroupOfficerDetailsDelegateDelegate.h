#pragma once
#include "CoreMinimal.h"
#include "BPSteamGroupOfficer.h"
#include "BlueprintGroupOfficerDetailsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlueprintGroupOfficerDetailsDelegate, const TArray<FBPSteamGroupOfficer>&, OfficerList);

