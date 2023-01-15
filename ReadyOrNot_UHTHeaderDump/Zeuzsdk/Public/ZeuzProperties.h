#pragma once
#include "CoreMinimal.h"
#include "ZeuzTags.h"
#include "ZeuzVariant.h"
#include "ZeuzProperties.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzTags Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzVariant Val;
    
    FZeuzProperties();
};

