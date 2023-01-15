#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminLogsIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminLogsIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Project;
    
    FZeuzAdminLogsIn();
};

