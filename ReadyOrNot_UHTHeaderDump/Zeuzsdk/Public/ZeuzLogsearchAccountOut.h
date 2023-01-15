#pragma once
#include "CoreMinimal.h"
#include "ZeuzLogsearchAccountLog.h"
#include "ZeuzLogsearchAccountOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLogsearchAccountOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzLogsearchAccountLog> Logs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    FZeuzLogsearchAccountOut();
};

