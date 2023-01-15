#pragma once
#include "CoreMinimal.h"
#include "ZeuzLogsearchLogsStatus.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzLogsearchLogsStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    FZeuzLogsearchLogsStatus();
};

