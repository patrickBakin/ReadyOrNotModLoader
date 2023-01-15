#pragma once
#include "CoreMinimal.h"
#include "ZeuzPayloadPortMapping.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzPayloadPortMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InternalPort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExternalPort;
    
    FZeuzPayloadPortMapping();
};

