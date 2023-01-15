#pragma once
#include "CoreMinimal.h"
#include "ZeuzImageManagerPublishInput.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzImageManagerPublishInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    FZeuzImageManagerPublishInput();
};

