#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminItem.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FZeuzAdminItem();
};

