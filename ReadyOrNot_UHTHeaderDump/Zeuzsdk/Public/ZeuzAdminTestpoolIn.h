#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminTestpoolIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminTestpoolIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionID;
    
    FZeuzAdminTestpoolIn();
};

