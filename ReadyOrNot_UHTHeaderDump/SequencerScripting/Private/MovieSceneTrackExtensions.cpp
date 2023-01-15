#include "MovieSceneTrackExtensions.h"

class UMovieSceneTrack;
class UMovieSceneSection;

void UMovieSceneTrackExtensions::SetSortingOrder(UMovieSceneTrack* Track, int32 SortingOrder) {
}

void UMovieSceneTrackExtensions::SetSectionToKey(UMovieSceneTrack* Track, UMovieSceneSection* Section) {
}

void UMovieSceneTrackExtensions::SetDisplayName(UMovieSceneTrack* Track, const FText& InName) {
}

void UMovieSceneTrackExtensions::SetColorTint(UMovieSceneTrack* Track, const FColor& ColorTint) {
}

void UMovieSceneTrackExtensions::RemoveSection(UMovieSceneTrack* Track, UMovieSceneSection* Section) {
}

int32 UMovieSceneTrackExtensions::GetSortingOrder(UMovieSceneTrack* Track) {
    return 0;
}

UMovieSceneSection* UMovieSceneTrackExtensions::GetSectionToKey(UMovieSceneTrack* Track) {
    return NULL;
}

TArray<UMovieSceneSection*> UMovieSceneTrackExtensions::GetSections(UMovieSceneTrack* Track) {
    return TArray<UMovieSceneSection*>();
}

FText UMovieSceneTrackExtensions::GetDisplayName(UMovieSceneTrack* Track) {
    return FText::GetEmpty();
}

FColor UMovieSceneTrackExtensions::GetColorTint(UMovieSceneTrack* Track) {
    return FColor{};
}

UMovieSceneSection* UMovieSceneTrackExtensions::AddSection(UMovieSceneTrack* Track) {
    return NULL;
}

UMovieSceneTrackExtensions::UMovieSceneTrackExtensions() {
}

