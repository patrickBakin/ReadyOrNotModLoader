#include "TeamBaseActivity.h"

class AReadyOrNotCharacter;
class ACyberneticCharacter;

bool UTeamBaseActivity::HasTeamReachedPosition(float Tolerance) const {
    return false;
}

bool UTeamBaseActivity::HasSquadmateReachedLocation(ESquadPosition SquadPosition, float Tolerance) {
    return false;
}

bool UTeamBaseActivity::HasAnySquadmateGotLocation(FVector TestLocation, float Tolerance) {
    return false;
}

bool UTeamBaseActivity::GetSquadPositionHasReachedDestination(ESquadPosition SquadPosition) const {
    return false;
}

ESquadPosition UTeamBaseActivity::GetSquadPosition(bool bOnlyOverride) const {
    return ESquadPosition::SP_Alpha;
}

AReadyOrNotCharacter* UTeamBaseActivity::GetSquadLeader() {
    return NULL;
}

FVector UTeamBaseActivity::GetLocationOfCharacterAtSquadPosition(ESquadPosition A) const {
    return FVector{};
}

float UTeamBaseActivity::GetDistanceToDestinationForSquadPosition(ESquadPosition SquadPosition) const {
    return 0.0f;
}

float UTeamBaseActivity::GetDistanceToCommandLocationForSquadPosition(ESquadPosition A) {
    return 0.0f;
}

float UTeamBaseActivity::GetDistanceToCommandLocation() const {
    return 0.0f;
}

float UTeamBaseActivity::GetDistanceBetweenSquadmates(ESquadPosition A, ESquadPosition B) {
    return 0.0f;
}

FVector UTeamBaseActivity::GetDestinationLocationAtSquadPosition(ESquadPosition A) {
    return FVector{};
}

ETeamType UTeamBaseActivity::GetCommandTeam() const {
    return ETeamType::TT_NONE;
}

FVector UTeamBaseActivity::GetCommandNormal() const {
    return FVector{};
}

FVector UTeamBaseActivity::GetCommandLocation() const {
    return FVector{};
}

ACyberneticCharacter* UTeamBaseActivity::GetCharacterClosestToLocation(const FVector& TestLocation) const {
    return NULL;
}

ACyberneticCharacter* UTeamBaseActivity::GetCharacterClosestToCharacter(ACyberneticCharacter* InCharacter) const {
    return NULL;
}

ACyberneticCharacter* UTeamBaseActivity::GetCharacterAtSquadPosition(ESquadPosition SquadPosition) const {
    return NULL;
}

UTeamBaseActivity::UTeamBaseActivity() {
}

