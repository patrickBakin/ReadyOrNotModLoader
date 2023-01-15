#include "ReadyOrNotLevelScript.h"
#include "Net/UnrealNetwork.h"

class AConversationManager;

void AReadyOrNotLevelScript::StopOutOfBoundsCountdown() {
}

void AReadyOrNotLevelScript::Stop3DAudioVisualizer() {
}

void AReadyOrNotLevelScript::StartOutOfBoundsCountdown() {
}

void AReadyOrNotLevelScript::Start3DAudioVisualizer() {
}

void AReadyOrNotLevelScript::SetFlashlightIntensityBoost(float Boost) {
}

void AReadyOrNotLevelScript::SetFlashlightBouncedIntensityBoost(float Boost) {
}

void AReadyOrNotLevelScript::PlayMVPSequence() {
}

void AReadyOrNotLevelScript::OnTeamSequenceFinished() {
}

void AReadyOrNotLevelScript::OnPiracyCheckUpdate_Private(bool bIsPirated, const FString& ProgramDetected) {
}

void AReadyOrNotLevelScript::OnPiracyCheckUpdate_Implementation(bool bIsPirated, const FString& ProgramDetected) {
}

void AReadyOrNotLevelScript::OnOutOfBoundsTimeLimitEnded_Implementation() {
}

void AReadyOrNotLevelScript::OnMVPSequenceFinished() {
}

bool AReadyOrNotLevelScript::IsVisualizingAudioSources() const {
    return false;
}

bool AReadyOrNotLevelScript::IsOutOfBoundsEnabled() const {
    return false;
}

bool AReadyOrNotLevelScript::IsCountingDownForOutOfBounds() const {
    return false;
}

AConversationManager* AReadyOrNotLevelScript::GetConversationManager() {
    return NULL;
}

void AReadyOrNotLevelScript::EnableOutOfBounds() {
}

void AReadyOrNotLevelScript::DisableOutOfBounds() {
}

bool AReadyOrNotLevelScript::AllAudioVolumesTicked() const {
    return false;
}

void AReadyOrNotLevelScript::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReadyOrNotLevelScript, LightingType);
}

AReadyOrNotLevelScript::AReadyOrNotLevelScript() {
    this->WorldGenerationType = EGenerationType::GT_Scenarios;
    this->FlashlightIntensity = 6500.00f;
    this->FlashlightIntensityBoost = 0.00f;
    this->FlashlightBouncedIntensityBoost = 0.00f;
    this->ConversationManager = NULL;
    this->LightingType = ELightType::LT_None;
    this->bDrawCoverDebug = false;
    this->MusicData = NULL;
    this->ItemData = NULL;
    this->SoundData = NULL;
    this->OutOfBounds_MaxTimeLimit = 10.00f;
    this->OutOfBoundsTimeRemaining = 10.00f;
    this->bUseDarkness = false;
    this->MinimumLightIntensityForSource = 1000.00f;
    this->DarknessSightRangeMultiplier = 0.20f;
    this->bIncludeWorldLightsAsSources = false;
    this->bRaining = false;
    this->bSpawnOfficerAI = true;
    this->LastPlayedSequence = NULL;
}

