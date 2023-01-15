#pragma once
#include "CoreMinimal.h"
#include "ZeuzServerBrowserStateBase.h"
#include "ZeuzServerBrowserStateOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzServerBrowserStateOut : public FZeuzServerBrowserStateBase {
    GENERATED_BODY()
public:
    FZeuzServerBrowserStateOut();
};

