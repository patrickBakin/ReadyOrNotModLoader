#include "MusicManager.h"

class AMusicManager;

void AMusicManager::UpdateMusicParameters() {
}

void AMusicManager::StopTheMusic(bool bGoHome) {
}

void AMusicManager::StopMusicParametersUpdate() {
}

void AMusicManager::StartMusicParametersUpdate() {
}

void AMusicManager::SetMusicParameterValue(const FString& paramName, float ParamValue) {
}

void AMusicManager::ResumeMusicParametersUpdate() {
}

void AMusicManager::PauseMusicParametersUpdate() {
}

TArray<FString> AMusicManager::GetMusicParameters() const {
    return TArray<FString>();
}

AMusicManager* AMusicManager::Get() {
    return NULL;
}

AMusicManager::AMusicManager() {
    this->MusicEvent = NULL;
}

