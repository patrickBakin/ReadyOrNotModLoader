#pragma once
#include "CoreMinimal.h"
#include "ZeuzEchoOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzEchoOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FZeuzEchoOut();
};

