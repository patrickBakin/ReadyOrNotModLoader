#pragma once
#include "CoreMinimal.h"
#include "ZeuzProfileItemConfig.h"
#include "ZeuzProfileItemClassConfig.h"
#include "ZeuzProfileItemConfigGetOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProfileItemConfigGetOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzProfileItemClassConfig> Classes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzProfileItemConfig> Items;
    
    FZeuzProfileItemConfigGetOut();
};

