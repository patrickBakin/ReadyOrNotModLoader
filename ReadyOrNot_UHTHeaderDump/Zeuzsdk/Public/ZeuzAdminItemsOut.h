#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminItem.h"
#include "ZeuzAdminItemsOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminItemsOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzAdminItem> Items;
    
    FZeuzAdminItemsOut();
};

