#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountChange.h"
#include "ZeuzProperties.h"
#include "ZeuzAccountProjectCreateIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountProjectCreateIn : public FZeuzAccountChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzProperties Props;
    
    FZeuzAccountProjectCreateIn();
};

