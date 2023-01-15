#pragma once
#include "CoreMinimal.h"
#include "ZeuzAllocationPayloadPortMapping.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAllocationPayloadPortMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InternalPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExternalPort;
    
    FZeuzAllocationPayloadPortMapping();
};

