#include "MovieSceneFolderExtensions.h"

class UMovieSceneTrack;
class UMovieSceneFolder;

bool UMovieSceneFolderExtensions::SetFolderName(UMovieSceneFolder* folder, FName InFolderName) {
    return false;
}

bool UMovieSceneFolderExtensions::SetFolderColor(UMovieSceneFolder* folder, FColor InFolderColor) {
    return false;
}

bool UMovieSceneFolderExtensions::RemoveChildObjectBinding(UMovieSceneFolder* folder, const FSequencerBindingProxy InObjectBinding) {
    return false;
}

bool UMovieSceneFolderExtensions::RemoveChildMasterTrack(UMovieSceneFolder* folder, UMovieSceneTrack* InMasterTrack) {
    return false;
}

bool UMovieSceneFolderExtensions::RemoveChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToRemove) {
    return false;
}

FName UMovieSceneFolderExtensions::GetFolderName(UMovieSceneFolder* folder) {
    return NAME_None;
}

FColor UMovieSceneFolderExtensions::GetFolderColor(UMovieSceneFolder* folder) {
    return FColor{};
}

TArray<FSequencerBindingProxy> UMovieSceneFolderExtensions::GetChildObjectBindings(UMovieSceneFolder* folder) {
    return TArray<FSequencerBindingProxy>();
}

TArray<UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildMasterTracks(UMovieSceneFolder* folder) {
    return TArray<UMovieSceneTrack*>();
}

TArray<UMovieSceneFolder*> UMovieSceneFolderExtensions::GetChildFolders(UMovieSceneFolder* folder) {
    return TArray<UMovieSceneFolder*>();
}

bool UMovieSceneFolderExtensions::AddChildObjectBinding(UMovieSceneFolder* folder, FSequencerBindingProxy InObjectBinding) {
    return false;
}

bool UMovieSceneFolderExtensions::AddChildMasterTrack(UMovieSceneFolder* folder, UMovieSceneTrack* InMasterTrack) {
    return false;
}

bool UMovieSceneFolderExtensions::AddChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToAdd) {
    return false;
}

UMovieSceneFolderExtensions::UMovieSceneFolderExtensions() {
}

