#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "ReadyOrNotAnimInstanceProxyTP.generated.h"

USTRUCT(BlueprintType)
struct FReadyOrNotAnimInstanceProxyTP : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    READYORNOT_API FReadyOrNotAnimInstanceProxyTP();
};

