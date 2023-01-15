#pragma once
#include "CoreMinimal.h"
#include "ModioOptionalModInfo.h"
#include "ModioErrorCode.h"
#include "OnGetModInfoDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetModInfoDelegate, FModioErrorCode, ErrorCode, FModioOptionalModInfo, ModInfo);

