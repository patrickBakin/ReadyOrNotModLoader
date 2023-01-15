#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileUserLookupIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileUserLookupIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Login;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FZeuzProfileUserLookupIn();
};

