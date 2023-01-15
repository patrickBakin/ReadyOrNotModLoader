#include "MovieSceneSequenceExtensions.h"
#include "Templates/SubclassOf.h"

class UObject;
class UMovieSceneTrack;
class UMovieSceneSequence;
class UMovieScene;
class UMovieSceneFolder;

void UMovieSceneSequenceExtensions::SortMarkedFrames(UMovieSceneSequence* Sequence) {
}

void UMovieSceneSequenceExtensions::SetWorkRangeStart(UMovieSceneSequence* InSequence, float StartTimeInSeconds) {
}

void UMovieSceneSequenceExtensions::SetWorkRangeEnd(UMovieSceneSequence* InSequence, float EndTimeInSeconds) {
}

void UMovieSceneSequenceExtensions::SetViewRangeStart(UMovieSceneSequence* InSequence, float StartTimeInSeconds) {
}

void UMovieSceneSequenceExtensions::SetViewRangeEnd(UMovieSceneSequence* InSequence, float EndTimeInSeconds) {
}

void UMovieSceneSequenceExtensions::SetTickResolutionDirectly(UMovieSceneSequence* Sequence, FFrameRate TickResolution) {
}

void UMovieSceneSequenceExtensions::SetTickResolution(UMovieSceneSequence* Sequence, FFrameRate TickResolution) {
}

void UMovieSceneSequenceExtensions::SetReadOnly(UMovieSceneSequence* Sequence, bool bInReadOnly) {
}

void UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(UMovieSceneSequence* Sequence, float StartTime) {
}

void UMovieSceneSequenceExtensions::SetPlaybackStart(UMovieSceneSequence* Sequence, int32 StartFrame) {
}

void UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(UMovieSceneSequence* Sequence, float EndTime) {
}

void UMovieSceneSequenceExtensions::SetPlaybackEnd(UMovieSceneSequence* Sequence, int32 EndFrame) {
}

void UMovieSceneSequenceExtensions::SetMarkedFrame(UMovieSceneSequence* Sequence, int32 InMarkIndex, FFrameNumber InFrameNumber) {
}

void UMovieSceneSequenceExtensions::SetEvaluationType(UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType) {
}

void UMovieSceneSequenceExtensions::SetDisplayRate(UMovieSceneSequence* Sequence, FFrameRate DisplayRate) {
}

void UMovieSceneSequenceExtensions::SetClockSource(UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource) {
}

FSequencerBindingProxy UMovieSceneSequenceExtensions::ResolveBindingID(UMovieSceneSequence* MasterSequence, FMovieSceneObjectBindingID InObjectBindingID) {
    return FSequencerBindingProxy{};
}

bool UMovieSceneSequenceExtensions::RemoveMasterTrack(UMovieSceneSequence* Sequence, UMovieSceneTrack* MasterTrack) {
    return false;
}

FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRangeSeconds(UMovieSceneSequence* Sequence, float StartTime, float Duration) {
    return FSequencerScriptingRange{};
}

FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRange(UMovieSceneSequence* Sequence, int32 StartFrame, int32 Duration) {
    return FSequencerScriptingRange{};
}

FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::MakeBindingID(UMovieSceneSequence* MasterSequence, const FSequencerBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space) {
    return FMovieSceneObjectBindingID{};
}

TArray<UObject*> UMovieSceneSequenceExtensions::LocateBoundObjects(UMovieSceneSequence* Sequence, const FSequencerBindingProxy& InBinding, UObject* Context) {
    return TArray<UObject*>();
}

bool UMovieSceneSequenceExtensions::IsReadOnly(UMovieSceneSequence* Sequence) {
    return false;
}

float UMovieSceneSequenceExtensions::GetWorkRangeStart(UMovieSceneSequence* InSequence) {
    return 0.0f;
}

float UMovieSceneSequenceExtensions::GetWorkRangeEnd(UMovieSceneSequence* InSequence) {
    return 0.0f;
}

float UMovieSceneSequenceExtensions::GetViewRangeStart(UMovieSceneSequence* InSequence) {
    return 0.0f;
}

float UMovieSceneSequenceExtensions::GetViewRangeEnd(UMovieSceneSequence* InSequence) {
    return 0.0f;
}

FTimecode UMovieSceneSequenceExtensions::GetTimecodeSource(UMovieSceneSequence* Sequence) {
    return FTimecode{};
}

FFrameRate UMovieSceneSequenceExtensions::GetTickResolution(UMovieSceneSequence* Sequence) {
    return FFrameRate{};
}

TArray<FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetSpawnables(UMovieSceneSequence* Sequence) {
    return TArray<FSequencerBindingProxy>();
}

TArray<UMovieSceneFolder*> UMovieSceneSequenceExtensions::GetRootFoldersInSequence(UMovieSceneSequence* Sequence) {
    return TArray<UMovieSceneFolder*>();
}

TArray<FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetPossessables(UMovieSceneSequence* Sequence) {
    return TArray<FSequencerBindingProxy>();
}

FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetPortableBindingID(UMovieSceneSequence* MasterSequence, UMovieSceneSequence* DestinationSequence, const FSequencerBindingProxy& InBinding) {
    return FMovieSceneObjectBindingID{};
}

float UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(UMovieSceneSequence* Sequence) {
    return 0.0f;
}

int32 UMovieSceneSequenceExtensions::GetPlaybackStart(UMovieSceneSequence* Sequence) {
    return 0;
}

FSequencerScriptingRange UMovieSceneSequenceExtensions::GetPlaybackRange(UMovieSceneSequence* Sequence) {
    return FSequencerScriptingRange{};
}

float UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(UMovieSceneSequence* Sequence) {
    return 0.0f;
}

int32 UMovieSceneSequenceExtensions::GetPlaybackEnd(UMovieSceneSequence* Sequence) {
    return 0;
}

UMovieScene* UMovieSceneSequenceExtensions::GetMovieScene(UMovieSceneSequence* Sequence) {
    return NULL;
}

TArray<UMovieSceneTrack*> UMovieSceneSequenceExtensions::GetMasterTracks(UMovieSceneSequence* Sequence) {
    return TArray<UMovieSceneTrack*>();
}

TArray<FMovieSceneMarkedFrame> UMovieSceneSequenceExtensions::GetMarkedFrames(UMovieSceneSequence* Sequence) {
    return TArray<FMovieSceneMarkedFrame>();
}

EMovieSceneEvaluationType UMovieSceneSequenceExtensions::GetEvaluationType(UMovieSceneSequence* InSequence) {
    return EMovieSceneEvaluationType::FrameLocked;
}

FFrameRate UMovieSceneSequenceExtensions::GetDisplayRate(UMovieSceneSequence* Sequence) {
    return FFrameRate{};
}

EUpdateClockSource UMovieSceneSequenceExtensions::GetClockSource(UMovieSceneSequence* InSequence) {
    return EUpdateClockSource::Tick;
}

TArray<FSequencerBindingProxy> UMovieSceneSequenceExtensions::GetBindings(UMovieSceneSequence* Sequence) {
    return TArray<FSequencerBindingProxy>();
}

FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetBindingID(const FSequencerBindingProxy& InBinding) {
    return FMovieSceneObjectBindingID{};
}

int32 UMovieSceneSequenceExtensions::FindNextMarkedFrame(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward) {
    return 0;
}

TArray<UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByType(UMovieSceneSequence* Sequence, TSubclassOf<UMovieSceneTrack> TrackType) {
    return TArray<UMovieSceneTrack*>();
}

TArray<UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByExactType(UMovieSceneSequence* Sequence, TSubclassOf<UMovieSceneTrack> TrackType) {
    return TArray<UMovieSceneTrack*>();
}

int32 UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(UMovieSceneSequence* Sequence, const FString& InLabel) {
    return 0;
}

int32 UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber) {
    return 0;
}

FSequencerBindingProxy UMovieSceneSequenceExtensions::FindBindingByName(UMovieSceneSequence* Sequence, const FString& Name) {
    return FSequencerBindingProxy{};
}

FSequencerBindingProxy UMovieSceneSequenceExtensions::FindBindingById(UMovieSceneSequence* Sequence, FGuid BindingID) {
    return FSequencerBindingProxy{};
}

void UMovieSceneSequenceExtensions::DeleteMarkedFrames(UMovieSceneSequence* Sequence) {
}

void UMovieSceneSequenceExtensions::DeleteMarkedFrame(UMovieSceneSequence* Sequence, int32 DeleteIndex) {
}

FSequencerBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromInstance(UMovieSceneSequence* Sequence, UObject* ObjectToSpawn) {
    return FSequencerBindingProxy{};
}

FSequencerBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromClass(UMovieSceneSequence* Sequence, UClass* ClassToSpawn) {
    return FSequencerBindingProxy{};
}

UMovieSceneFolder* UMovieSceneSequenceExtensions::AddRootFolderToSequence(UMovieSceneSequence* Sequence, const FString& NewFolderName) {
    return NULL;
}

FSequencerBindingProxy UMovieSceneSequenceExtensions::AddPossessable(UMovieSceneSequence* Sequence, UObject* ObjectToPossess) {
    return FSequencerBindingProxy{};
}

UMovieSceneTrack* UMovieSceneSequenceExtensions::AddMasterTrack(UMovieSceneSequence* Sequence, TSubclassOf<UMovieSceneTrack> TrackType) {
    return NULL;
}

int32 UMovieSceneSequenceExtensions::AddMarkedFrame(UMovieSceneSequence* Sequence, const FMovieSceneMarkedFrame& InMarkedFrame) {
    return 0;
}

UMovieSceneSequenceExtensions::UMovieSceneSequenceExtensions() {
}

