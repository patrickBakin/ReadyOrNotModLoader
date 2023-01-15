#pragma once
#include "CoreMinimal.h"
#include "ZeuzEcho2Out.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzEcho2Out {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FZeuzEcho2Out();
};

