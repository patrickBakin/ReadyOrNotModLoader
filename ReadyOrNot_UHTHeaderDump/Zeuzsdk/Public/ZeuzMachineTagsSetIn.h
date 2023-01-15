#pragma once
#include "CoreMinimal.h"
#include "ZeuzTags.h"
#include "ZeuzMachineTagsSetIn.generated.h"

USTRUCT(BlueprintType)
struct ZEUZSDK_API FZeuzMachineTagsSetIn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZeuzTags Tags;
    
    FZeuzMachineTagsSetIn();
};

