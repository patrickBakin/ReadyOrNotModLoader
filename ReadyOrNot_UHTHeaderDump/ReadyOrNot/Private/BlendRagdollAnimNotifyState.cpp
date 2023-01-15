#include "BlendRagdollAnimNotifyState.h"

UBlendRagdollAnimNotifyState::UBlendRagdollAnimNotifyState() {
    this->TotalBlendDuration = 0.00f;
    this->CurrentBlendAmount = 0.00f;
    this->PelvisWakeUpTime = 0.35f;
    this->bUsePhysicalAnimComp = true;
}

