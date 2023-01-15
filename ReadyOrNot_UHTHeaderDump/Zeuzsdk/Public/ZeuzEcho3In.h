#pragma once
#include "CoreMinimal.h"
#include "ZeuzEcho3In.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzEcho3In {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FZeuzEcho3In();
};

