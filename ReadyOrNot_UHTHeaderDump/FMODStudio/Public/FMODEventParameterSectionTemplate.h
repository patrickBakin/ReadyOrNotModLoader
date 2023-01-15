#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSectionTemplate -FallbackName=MovieSceneParameterSectionTemplate
#include "FMODEventParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    FMODSTUDIO_API FFMODEventParameterSectionTemplate();
};

