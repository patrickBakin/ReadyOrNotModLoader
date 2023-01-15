#pragma once
#include "CoreMinimal.h"
#include "ZeuzServerBrowserStateBase.h"
#include "ZeuzServerBrowserStateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzServerBrowserStateIn : public FZeuzServerBrowserStateBase {
    GENERATED_BODY()
public:
    FZeuzServerBrowserStateIn();
};

