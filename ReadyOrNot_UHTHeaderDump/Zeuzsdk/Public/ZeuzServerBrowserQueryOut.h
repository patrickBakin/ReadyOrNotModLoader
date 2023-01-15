#pragma once
#include "CoreMinimal.h"
#include "ZeuzServerBrowserStateOut.h"
#include "ZeuzServerBrowserQueryOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzServerBrowserQueryOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzServerBrowserStateOut> Results;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultOfs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Errors;
    
    FZeuzServerBrowserQueryOut();
};

