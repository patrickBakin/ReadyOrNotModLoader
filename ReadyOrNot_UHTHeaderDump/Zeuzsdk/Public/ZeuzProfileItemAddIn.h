#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemNameCount.h"
#include "ZeuzProfileItemAddIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemAddIn : public FZeuzProfileItemNameCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    FZeuzProfileItemAddIn();
};

