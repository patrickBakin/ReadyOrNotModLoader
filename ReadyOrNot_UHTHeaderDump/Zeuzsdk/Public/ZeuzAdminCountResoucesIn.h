#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminCountResoucesIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminCountResoucesIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionID;
    
    FZeuzAdminCountResoucesIn();
};

