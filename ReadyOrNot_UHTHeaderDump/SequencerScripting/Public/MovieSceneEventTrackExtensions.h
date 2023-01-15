#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MovieSceneEventTrackExtensions.generated.h"

class UMovieSceneEventTriggerSection;
class UMovieSceneEventTrack;
class UMovieSceneEventRepeaterSection;

UCLASS(Blueprintable)
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneEventTrackExtensions();
    UFUNCTION(BlueprintCallable)
    static UMovieSceneEventTriggerSection* AddEventTriggerSection(UMovieSceneEventTrack* InTrack);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneEventRepeaterSection* AddEventRepeaterSection(UMovieSceneEventTrack* InTrack);
    
};

