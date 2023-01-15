#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemUserName.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemUserName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FZeuzProfileItemUserName();
};

