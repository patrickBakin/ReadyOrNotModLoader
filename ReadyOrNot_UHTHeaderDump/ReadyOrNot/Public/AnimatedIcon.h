#pragma once
#include "CoreMinimal.h"
#include "AnimatedIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAnimatedIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameRate;
    
    READYORNOT_API FAnimatedIcon();
};

