#pragma once
#include "CoreMinimal.h"
#include "ZeuzVariant.h"
#include "ZeuzLogsearchOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLogsearchOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzVariant Stats;
    
    FZeuzLogsearchOut();
};

