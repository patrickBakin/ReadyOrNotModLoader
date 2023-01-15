#pragma once
#include "CoreMinimal.h"
#include "ZeuzEchoIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzEchoIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FZeuzEchoIn();
};

