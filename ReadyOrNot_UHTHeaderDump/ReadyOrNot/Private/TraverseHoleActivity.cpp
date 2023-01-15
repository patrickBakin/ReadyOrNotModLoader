#include "TraverseHoleActivity.h"

void UTraverseHoleActivity::Tick_MoveToHole_State(float DeltaTime, float Uptime) {
}

void UTraverseHoleActivity::Tick_Move_State(float DeltaTime, float Uptime) {
}

void UTraverseHoleActivity::Tick_ExitHole_State(float DeltaTime, float Uptime) {
}

void UTraverseHoleActivity::Tick_EnterHole_State(float DeltaTime, float Uptime) {
}

bool UTraverseHoleActivity::ShouldMove() const {
    return false;
}

void UTraverseHoleActivity::Enter_MoveToHole_State() {
}

void UTraverseHoleActivity::Enter_Move_State() {
}

void UTraverseHoleActivity::Enter_ExitHole_State() {
}

void UTraverseHoleActivity::Enter_EnterHole_State() {
}

bool UTraverseHoleActivity::CanExitHole() const {
    return false;
}

bool UTraverseHoleActivity::CanEnterHole() const {
    return false;
}

UTraverseHoleActivity::UTraverseHoleActivity() {
    this->WallHoleTraversalActor = NULL;
    this->bIgnoreCooldown = false;
    this->bFromNavLink = false;
    this->EntryAnim = NULL;
    this->ExitAnim = NULL;
    this->LoopAnim = NULL;
}

