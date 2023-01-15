#include "TeamStackUpActivity.h"

class ACyberneticCharacter;
class ADoor;

void UTeamStackUpActivity::PerformStackUpStage(float DeltaTime, float Uptime) {
}

void UTeamStackUpActivity::PerformCheckStage(float DeltaTime, float Uptime) {
}

void UTeamStackUpActivity::OnDoorOpened() {
}

void UTeamStackUpActivity::OnDoorChecked() {
}

ADoor* UTeamStackUpActivity::GetStackUpDoor() const {
    return NULL;
}

EDoorCheckResult UTeamStackUpActivity::GetDoorCheckResult() const {
    return EDoorCheckResult::None;
}

ACyberneticCharacter* UTeamStackUpActivity::GetCharacterAtSquadPositionInStackUpArea(ESquadPosition SquadPosition, EStackupGenArea StackupArea) const {
    return NULL;
}

void UTeamStackUpActivity::ExitStackupStage() {
}

void UTeamStackUpActivity::ExitCheckStage() {
}

void UTeamStackUpActivity::EnterStackupStage() {
}

void UTeamStackUpActivity::EnterCheckStage() {
}

bool UTeamStackUpActivity::CanPerformCheck() const {
    return false;
}

UTeamStackUpActivity::UTeamStackUpActivity() {
    this->DoorChecker = NULL;
    this->StackUpDoor = NULL;
}

