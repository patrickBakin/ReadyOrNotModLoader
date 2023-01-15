#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminStat.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminStat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountVal;
    
    FZeuzAdminStat();
};

