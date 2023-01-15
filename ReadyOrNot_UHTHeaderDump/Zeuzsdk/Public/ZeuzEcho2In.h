#pragma once
#include "CoreMinimal.h"
#include "ZeuzEcho2In.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzEcho2In {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FZeuzEcho2In();
};

