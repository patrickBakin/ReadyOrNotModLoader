#include "ReplayController.h"

void AReplayController::SetViewOverride() {
}

void AReplayController::SetCurrentReplayTimeToSeconds(int32 Seconds) {
}

void AReplayController::SetCurrentReplayPlayRate(float PlayRate) {
}

bool AReplayController::SetCurrentReplayPausedState(bool bDoPause) {
    return false;
}

float AReplayController::GetCurrentReplayTotalTimeInSeconds() const {
    return 0.0f;
}

float AReplayController::GetCurrentReplayCurrentTimeInSeconds() const {
    return 0.0f;
}

AReplayController::AReplayController() {
    this->ReplayCameraPawn = NULL;
    this->ReplayControls = NULL;
    this->EscapeWidgetInstance = NULL;
}

