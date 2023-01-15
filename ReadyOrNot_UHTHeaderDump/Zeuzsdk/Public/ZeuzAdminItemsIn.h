#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminItemsIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminItemsIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Query;
    
    FZeuzAdminItemsIn();
};

