#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MovieSceneVectorTrackExtensions.generated.h"

class UMovieSceneVectorTrack;

UCLASS(Blueprintable)
class UMovieSceneVectorTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneVectorTrackExtensions();
    UFUNCTION(BlueprintCallable)
    static void SetNumChannelsUsed(UMovieSceneVectorTrack* Track, int32 InNumChannelsUsed);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumChannelsUsed(UMovieSceneVectorTrack* Track);
    
};

