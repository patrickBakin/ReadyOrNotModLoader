#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "FMODEventControlChannel.h"
#include "FMODEventControlSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFMODEventControlSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventControlChannel ControlKeys;
    
    UFMODEventControlSection();
};

