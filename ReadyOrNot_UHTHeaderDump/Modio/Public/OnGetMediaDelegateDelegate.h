#pragma once
#include "CoreMinimal.h"
#include "ModioOptionalImage.h"
#include "ModioErrorCode.h"
#include "OnGetMediaDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetMediaDelegate, FModioErrorCode, ErrorCode, FModioOptionalImage, Path);

