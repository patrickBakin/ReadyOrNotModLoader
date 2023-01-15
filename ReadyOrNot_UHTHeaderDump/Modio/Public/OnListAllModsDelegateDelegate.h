#pragma once
#include "CoreMinimal.h"
#include "ModioOptionalModInfoList.h"
#include "ModioErrorCode.h"
#include "OnListAllModsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnListAllModsDelegate, FModioErrorCode, ErrorCode, FModioOptionalModInfoList, Result);

