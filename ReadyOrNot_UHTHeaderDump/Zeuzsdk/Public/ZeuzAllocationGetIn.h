#pragma once
#include "CoreMinimal.h"
#include "ZeuzAllocationPagination.h"
#include "ZeuzAllocationGetIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAllocationGetIn : public FZeuzAllocationPagination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AllocationIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GetDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GetEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OS;
    
    FZeuzAllocationGetIn();
};

