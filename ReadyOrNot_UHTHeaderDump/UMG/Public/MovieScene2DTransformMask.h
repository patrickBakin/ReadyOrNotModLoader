#pragma once
#include "CoreMinimal.h"
#include "MovieScene2DTransformMask.generated.h"

USTRUCT(BlueprintType)
struct FMovieScene2DTransformMask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 MASK;
    
public:
    UMG_API FMovieScene2DTransformMask();
};

