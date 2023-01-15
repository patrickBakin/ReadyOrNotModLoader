#pragma once
#include "CoreMinimal.h"
#include "ModioOptionalModTagOptions.h"
#include "ModioErrorCode.h"
#include "OnGetModTagOptionsDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetModTagOptionsDelegate, FModioErrorCode, ErrorCode, FModioOptionalModTagOptions, ModTagOptions);

