#pragma once
#include "CoreMinimal.h"
#include "ZeuzTags.generated.h"

USTRUCT(BlueprintType)
struct FZeuzTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    ZEUZSDK_API FZeuzTags();
};

