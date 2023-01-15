#include "MovieSceneScriptingEventKey.h"

void UMovieSceneScriptingEventKey::SetValue(const FMovieSceneEvent& InNewValue) {
}

void UMovieSceneScriptingEventKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
}

FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue() const {
    return FMovieSceneEvent{};
}

FFrameTime UMovieSceneScriptingEventKey::GetTime(ESequenceTimeUnit TimeUnit) const {
    return FFrameTime{};
}

UMovieSceneScriptingEventKey::UMovieSceneScriptingEventKey() {
}

