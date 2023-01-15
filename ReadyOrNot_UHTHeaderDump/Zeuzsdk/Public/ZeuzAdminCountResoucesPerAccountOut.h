#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminCountResoucesPerAccountOut.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminCountResoucesPerAccountOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FZeuzAdminCountResoucesPerAccountOut();
};

