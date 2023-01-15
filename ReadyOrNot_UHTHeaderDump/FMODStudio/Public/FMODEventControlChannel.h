#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneByteChannel -FallbackName=MovieSceneByteChannel
#include "FMODEventControlChannel.generated.h"

USTRUCT(BlueprintType)
struct FFMODEventControlChannel : public FMovieSceneByteChannel {
    GENERATED_BODY()
public:
    FMODSTUDIO_API FFMODEventControlChannel();
};

