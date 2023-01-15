#include "MovieSceneBindingExtensions.h"
#include "Templates/SubclassOf.h"

class UObject;
class UMovieSceneTrack;

void UMovieSceneBindingExtensions::SetParent(const FSequencerBindingProxy& InBinding, const FSequencerBindingProxy& InParentBinding) {
}

void UMovieSceneBindingExtensions::SetName(const FSequencerBindingProxy& InBinding, const FString& InName) {
}

void UMovieSceneBindingExtensions::SetDisplayName(const FSequencerBindingProxy& InBinding, const FText& InDisplayName) {
}

void UMovieSceneBindingExtensions::RemoveTrack(const FSequencerBindingProxy& InBinding, UMovieSceneTrack* TrackToRemove) {
}

void UMovieSceneBindingExtensions::Remove(const FSequencerBindingProxy& InBinding) {
}

void UMovieSceneBindingExtensions::MoveBindingContents(const FSequencerBindingProxy& SourceBindingId, const FSequencerBindingProxy& DestinationBindingId) {
}

bool UMovieSceneBindingExtensions::IsValid(const FSequencerBindingProxy& InBinding) {
    return false;
}

TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::GetTracks(const FSequencerBindingProxy& InBinding) {
    return TArray<UMovieSceneTrack*>();
}

UClass* UMovieSceneBindingExtensions::GetPossessedObjectClass(const FSequencerBindingProxy& InBinding) {
    return NULL;
}

FSequencerBindingProxy UMovieSceneBindingExtensions::GetParent(const FSequencerBindingProxy& InBinding) {
    return FSequencerBindingProxy{};
}

UObject* UMovieSceneBindingExtensions::GetObjectTemplate(const FSequencerBindingProxy& InBinding) {
    return NULL;
}

FString UMovieSceneBindingExtensions::GetName(const FSequencerBindingProxy& InBinding) {
    return TEXT("");
}

FGuid UMovieSceneBindingExtensions::GetId(const FSequencerBindingProxy& InBinding) {
    return FGuid{};
}

FText UMovieSceneBindingExtensions::GetDisplayName(const FSequencerBindingProxy& InBinding) {
    return FText::GetEmpty();
}

TArray<FSequencerBindingProxy> UMovieSceneBindingExtensions::GetChildPossessables(const FSequencerBindingProxy& InBinding) {
    return TArray<FSequencerBindingProxy>();
}

TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByType(const FSequencerBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType) {
    return TArray<UMovieSceneTrack*>();
}

TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByExactType(const FSequencerBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType) {
    return TArray<UMovieSceneTrack*>();
}

UMovieSceneTrack* UMovieSceneBindingExtensions::AddTrack(const FSequencerBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType) {
    return NULL;
}

UMovieSceneBindingExtensions::UMovieSceneBindingExtensions() {
}

