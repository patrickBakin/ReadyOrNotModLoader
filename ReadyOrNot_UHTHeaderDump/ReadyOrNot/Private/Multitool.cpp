#include "Multitool.h"
#include "Net/UnrealNetwork.h"

class UFMODEvent;

float AMultitool::GetMultitoolOperatingTimeFromToolkit(EMultitoolFunctions MultitoolFunction) const {
    return 0.0f;
}

float AMultitool::GetMultitoolOperatingTimeFromAudioLength(UFMODEvent* Event) const {
    return 0.0f;
}

float AMultitool::GetMultitoolOperatingTimeFromActiveToolkit() const {
    return 0.0f;
}

void AMultitool::Client_StopMultitoolAudio_Implementation() {
}

void AMultitool::Client_PlayMultitoolAudio_Implementation() {
}

void AMultitool::Client_ChangeToolkit_Implementation(EMultitoolFunctions MultitoolFunction, bool bPlayAnimation) {
}

void AMultitool::ChangeToolkit(EMultitoolFunctions MultitoolFunction, bool bPlayAnimation) {
}

void AMultitool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMultitool, CurrentToolKit);
}

AMultitool::AMultitool() {
    this->PvPFreeInteraction = NULL;
    this->CurrentToolKit = EMultitoolFunctions::MF_None;
    this->bAudioBasedProgress = false;
    this->FMODLockpickingSound = NULL;
    this->FMODKnifeSound = NULL;
    this->FMODWirecutterSound = NULL;
    this->FMODFreeingSound = NULL;
    this->PendingFreeCharacter = NULL;
}

