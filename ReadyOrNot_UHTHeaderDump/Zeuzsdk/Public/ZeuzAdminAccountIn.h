#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminAccountIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminAccountIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    FZeuzAdminAccountIn();
};

