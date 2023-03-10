#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTransformMask.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTransformMask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 MASK;
    
public:
    MOVIESCENETRACKS_API FMovieSceneTransformMask();
};

