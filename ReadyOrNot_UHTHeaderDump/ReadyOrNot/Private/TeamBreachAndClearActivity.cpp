#include "TeamBreachAndClearActivity.h"

class UBaseActivity;
class ACyberneticController;

void UTeamBreachAndClearActivity::PerformClearStage(float DeltaTime, float Uptime) {
}

void UTeamBreachAndClearActivity::PerformBreachStage(float DeltaTime, float Uptime) {
}

void UTeamBreachAndClearActivity::OnDoorBreachFinished(UBaseActivity* InActivity, ACyberneticController* InController) {
}

void UTeamBreachAndClearActivity::OnDoorBreacherReady() {
}

void UTeamBreachAndClearActivity::OnDoorBreacherBreaching() {
}

bool UTeamBreachAndClearActivity::IsFinishedClearing() const {
    return false;
}

void UTeamBreachAndClearActivity::EnterClearStage() {
}

void UTeamBreachAndClearActivity::EnterClearedStage() {
}

void UTeamBreachAndClearActivity::EnterBreachStage() {
}

void UTeamBreachAndClearActivity::DeployChemlight() {
}

bool UTeamBreachAndClearActivity::CanPerformClear() const {
    return false;
}

bool UTeamBreachAndClearActivity::CanPerformBreach() const {
    return false;
}

bool UTeamBreachAndClearActivity::CanOpenDoor() const {
    return false;
}

UTeamBreachAndClearActivity::UTeamBreachAndClearActivity() {
    this->UsedClearPoint = NULL;
    this->LeaderLastEquippedGrenade = NULL;
    this->ThrownGrenade = NULL;
    this->BreachStartDelay = 0.00f;
    this->ClearStartDelay = 0.00f;
    this->DoorUser = NULL;
    this->DoorBreacher = NULL;
    this->DoorBreachItemClass = NULL;
    this->DoorUseItemClass = NULL;
    this->DoorUseActivity = NULL;
    this->DoorBreachActivity = NULL;
    this->ClearWaitTime = 0.45f;
    this->CustomDoorUseActivityClass = NULL;
}

