#include "FMODAudioPropagationComponent.h"

class USceneComponent;
class UFMODEvent;

bool UFMODAudioPropagationComponent::UpdateAudioPropagation() {
    return false;
}

void UFMODAudioPropagationComponent::PlayEventAttached(UFMODEvent* EventToPlay, USceneComponent* CompToAttach, FName AttachPoint, TArray<FMODParam> Params) {
}

void UFMODAudioPropagationComponent::PlayEvent(UFMODEvent* EventToPlay, FVector Origin, TArray<FMODParam> Params) {
}

void UFMODAudioPropagationComponent::CheckOcclusion() {
}

UFMODAudioPropagationComponent::UFMODAudioPropagationComponent() {
    this->volumeToSet = 0.00f;
    this->silentDistance = 400.00f;
    this->OcclusionAmount = 0.00f;
    this->tickRate = 0.40f;
    this->MinDistance = 120.00f;
    this->bPlayPropagation = true;
}

