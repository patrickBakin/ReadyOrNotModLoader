#pragma once
#include "CoreMinimal.h"
#include "ZeuzAccountChange.h"
#include "ZeuzAccountProjectDeleteIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzAccountProjectDeleteIn : public FZeuzAccountChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Proj;
    
    FZeuzAccountProjectDeleteIn();
};

