#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenAnimated.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLoadingScreenAnimated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Foreground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Background;
    
    READYORNOT_API FLoadingScreenAnimated();
};

