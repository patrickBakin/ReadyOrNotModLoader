#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminStat.h"
#include "ZeuzAdminStatsOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminStatsOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZeuzAdminStat> Stats;
    
    FZeuzAdminStatsOut();
};

