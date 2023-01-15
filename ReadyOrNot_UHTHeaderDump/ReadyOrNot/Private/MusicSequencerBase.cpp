#include "MusicSequencerBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent




void AMusicSequencerBase::Multicast_StopAudio_Implementation() {
}

void AMusicSequencerBase::Multicast_StartTransitioningToState_Implementation(EMusicState NewState) {
}

void AMusicSequencerBase::Multicast_ResetAudio_Implementation() {
}

AMusicSequencerBase::AMusicSequencerBase() {
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
}

