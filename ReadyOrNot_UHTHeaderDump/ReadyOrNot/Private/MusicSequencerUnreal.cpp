#include "MusicSequencerUnreal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent

class USoundWave;
class USoundCue;

void AMusicSequencerUnreal::PlayScriptedMusic(USoundCue* Music, EMusicState NewScriptedState, bool bImmediately) {
}

void AMusicSequencerUnreal::OnAudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent) {
}

void AMusicSequencerUnreal::OnAudioFinished() {
}

AMusicSequencerUnreal::AMusicSequencerUnreal() {
    this->AudioPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioPlayer"));
    this->CurrentState = EMusicState::MS_Preplanning;
    this->NextState = EMusicState::MS_Preplanning;
    this->NextScriptedState = EMusicState::MS_Preplanning;
}

