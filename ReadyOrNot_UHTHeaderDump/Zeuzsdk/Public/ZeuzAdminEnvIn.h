#pragma once
#include "CoreMinimal.h"
#include "ZeuzAdminEnvIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAdminEnvIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjectID;
    
    FZeuzAdminEnvIn();
};

