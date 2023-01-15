#include "ReadyOrNotPathFollowingComp.h"

class UBaseActivity;
class ACyberneticController;

void UReadyOrNotPathFollowingComp::OnHoleTraversalFinished(UBaseActivity* Activity, ACyberneticController* Controller) {
}

UReadyOrNotPathFollowingComp::UReadyOrNotPathFollowingComp() {
    this->HoleTraversalCooldown = 0.00f;
    this->LastUsedDoorLink = NULL;
    this->LastUsedWallHole = NULL;
    this->LastUsedDoorLinkComp = NULL;
    this->TraverseHoleActivity = NULL;
    this->Acceleration = 0.00f;
}

