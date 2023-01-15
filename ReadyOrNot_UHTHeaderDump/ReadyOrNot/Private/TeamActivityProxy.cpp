#include "TeamActivityProxy.h"

class UTeamBaseActivity;
class ACyberneticCharacter;

bool UTeamActivityProxy::HasTeamReachedLocation(float Tolerance) const {
    return false;
}

bool UTeamActivityProxy::HasSquadPositionReachedLocation(ESquadPosition InSquadPosition, float Tolerance) const {
    return false;
}

bool UTeamActivityProxy::HasSquadPositionReachedDestination(ESquadPosition InSquadPosition) const {
    return false;
}

bool UTeamActivityProxy::HasAnySquadSquadPositionGotLocation(UTeamBaseActivity* RequestingActivity, const FVector& InTestLocation, float Tolerance) const {
    return false;
}

float UTeamActivityProxy::GetDistanceToDestinationForSquadPosition(ESquadPosition InSquadPosition) const {
    return 0.0f;
}

float UTeamActivityProxy::GetDistanceToCommandLocationForSquadPosition(ESquadPosition InSquadPosition) const {
    return 0.0f;
}

FVector UTeamActivityProxy::GetDestinationLocationAtSquadPosition(ESquadPosition InSquadPosition) const {
    return FVector{};
}

ACyberneticCharacter* UTeamActivityProxy::GetCharacterClosestToLocation(const FVector& InTestLocation) const {
    return NULL;
}

ACyberneticCharacter* UTeamActivityProxy::GetCharacterAtSquadPosition(ESquadPosition InSquadPosition) const {
    return NULL;
}

UTeamActivityProxy::UTeamActivityProxy() {
    this->CommandTeam = ETeamType::TT_NONE;
}

