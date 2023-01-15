#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "FMODEventControlChannel.h"
#include "FMODEventControlSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventControlChannel ControlKeys;
    
    FMODSTUDIO_API FFMODEventControlSectionTemplate();
};

