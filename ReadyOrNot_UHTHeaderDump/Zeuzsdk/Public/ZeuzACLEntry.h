#pragma once
#include "CoreMinimal.h"
#include "ZeuzACLEntry.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzACLEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GenID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Grant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Deny;
    
    FZeuzACLEntry();
};

