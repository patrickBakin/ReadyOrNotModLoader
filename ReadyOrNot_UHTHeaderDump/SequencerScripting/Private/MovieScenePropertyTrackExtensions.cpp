#include "MovieScenePropertyTrackExtensions.h"

class UMovieScenePropertyTrack;
class UMovieSceneObjectPropertyTrack;

void UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(UMovieScenePropertyTrack* Track, const FName& InPropertyName, const FString& InPropertyPath) {
}

void UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track, UClass* PropertyClass) {
}

FName UMovieScenePropertyTrackExtensions::GetUniqueTrackName(UMovieScenePropertyTrack* Track) {
    return NAME_None;
}

FString UMovieScenePropertyTrackExtensions::GetPropertyPath(UMovieScenePropertyTrack* Track) {
    return TEXT("");
}

FName UMovieScenePropertyTrackExtensions::GetPropertyName(UMovieScenePropertyTrack* Track) {
    return NAME_None;
}

UClass* UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track) {
    return NULL;
}

UMovieScenePropertyTrackExtensions::UMovieScenePropertyTrackExtensions() {
}

