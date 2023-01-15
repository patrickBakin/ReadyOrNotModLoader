#pragma once
#include "CoreMinimal.h"
#include "ZeuzACLEntry.h"
#include "ZeuzACL.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzACL {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzACLEntry> List;
    
    FZeuzACL();
};

