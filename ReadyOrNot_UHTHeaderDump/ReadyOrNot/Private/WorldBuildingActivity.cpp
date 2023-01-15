#include "WorldBuildingActivity.h"

class UWorldBuildingActivityData;

void UWorldBuildingActivity::TickMoveToState(float DeltaTime, float Uptime) {
}

void UWorldBuildingActivity::TickLoopState(float DeltaTime, float Uptime) {
}

bool UWorldBuildingActivity::ShouldStart() const {
    return false;
}

bool UWorldBuildingActivity::ShouldLoop() const {
    return false;
}

bool UWorldBuildingActivity::ShouldEndAbruptly() const {
    return false;
}

bool UWorldBuildingActivity::ShouldEnd() const {
    return false;
}

bool UWorldBuildingActivity::ShouldComplete() const {
    return false;
}

void UWorldBuildingActivity::SetRotation(FRotator NewRotator) {
}

void UWorldBuildingActivity::SetActivityData(UWorldBuildingActivityData* Data) {
}

bool UWorldBuildingActivity::IsSetupCorrectly() const {
    return false;
}

FRotator UWorldBuildingActivity::GetRotationOffset() const {
    return FRotator{};
}

void UWorldBuildingActivity::EnterStartState() {
}

void UWorldBuildingActivity::EnterMoveToState() {
}

void UWorldBuildingActivity::EnterLoopState() {
}

void UWorldBuildingActivity::EnterEndState() {
}

void UWorldBuildingActivity::EnterCompleteState() {
}

void UWorldBuildingActivity::EnterAbruptEndState() {
}

UWorldBuildingActivity::UWorldBuildingActivity() {
    this->bShouldHolsterWeapon = true;
    this->bShouldSurrenderFromActivity = true;
    this->bAbortDueToAggressiveNoise = true;
    this->bRequireRotationMatch = true;
    this->bOneShotAnimationDataTable = false;
    this->Loop = NULL;
    this->MontageStart = NULL;
    this->MontageEnd = NULL;
    this->MontageAbruptEnd = NULL;
    this->TableMontageAnim = NULL;
}

