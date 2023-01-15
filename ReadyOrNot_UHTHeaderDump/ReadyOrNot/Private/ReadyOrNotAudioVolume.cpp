#include "ReadyOrNotAudioVolume.h"

class UFMODEvent;

bool AReadyOrNotAudioVolume::IsAnotherVolumeActivatedAndPlayingEventInst(FFMODEventInstance EventInst) const {
    return false;
}

bool AReadyOrNotAudioVolume::IsAnotherVolumeActivatedAndPlayingEvent(UFMODEvent* Event, FFMODEventInstance& EventInstance) const {
    return false;
}

bool AReadyOrNotAudioVolume::HasRanOnce() const {
    return false;
}

AReadyOrNotAudioVolume::AReadyOrNotAudioVolume() {
    this->bLocalEffectsPlayed = false;
}

