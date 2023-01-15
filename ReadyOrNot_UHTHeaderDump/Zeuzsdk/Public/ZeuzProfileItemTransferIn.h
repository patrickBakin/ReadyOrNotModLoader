#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemMove.h"
#include "ZeuzProfileItemTransferIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemTransferIn : public FZeuzProfileItemMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserIDTo;
    
    FZeuzProfileItemTransferIn();
};

