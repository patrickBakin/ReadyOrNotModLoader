#include "MovieSceneScriptingEventChannel.h"

class UMovieSceneScriptingEventKey;
class UMovieSceneScriptingKey;

void UMovieSceneScriptingEventChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(const FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    return NULL;
}

UMovieSceneScriptingEventChannel::UMovieSceneScriptingEventChannel() {
}

