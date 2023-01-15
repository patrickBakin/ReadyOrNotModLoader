#include "AIFactionManager.h"

class AReadyOrNotCharacter;
class ACyberneticCharacter;
class ACivilianCharacter;
class ASuspectCharacter;



void AAIFactionManager::OnAISpottedNeutral(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Neutral) {
}


void AAIFactionManager::OnAISpottedFriendly(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Friendly) {
}


void AAIFactionManager::OnAISpottedEnemy(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Enemy) {
}


bool AAIFactionManager::IsTeamFull(const FFactionSuspectTeam& InTeam) const {
    return false;
}

bool AAIFactionManager::IsSuspectInTeam(ASuspectCharacter* InSuspect, FFactionSuspectTeam& OutTeam) const {
    return false;
}

bool AAIFactionManager::GetTeamTacticFor(ASuspectCharacter* InSuspect, EAITeamTactic& OutTactic) const {
    return false;
}

int32 AAIFactionManager::GetTeamIndex(ASuspectCharacter* InSuspect) const {
    return 0;
}

bool AAIFactionManager::GetSuspectsInTeam(ASuspectCharacter* InSuspect, TArray<ASuspectCharacter*>& OutSuspects, bool bIncludeSelf) {
    return false;
}

TArray<ASuspectCharacter*> AAIFactionManager::GetAllSuspects() const {
    return TArray<ASuspectCharacter*>();
}

TArray<ACyberneticCharacter*> AAIFactionManager::GetAllLeaders() const {
    return TArray<ACyberneticCharacter*>();
}

TArray<ACivilianCharacter*> AAIFactionManager::GetAllCivilians() const {
    return TArray<ACivilianCharacter*>();
}

TArray<ACyberneticCharacter*> AAIFactionManager::GetAllCharacters() const {
    return TArray<ACyberneticCharacter*>();
}

ASuspectCharacter* AAIFactionManager::FindClosestSuspect(const TArray<ASuspectCharacter*>& OtherSuspects, ASuspectCharacter* Suspect, float MaxDistance) const {
    return NULL;
}

bool AAIFactionManager::AreTeamSpotsAvailable(int32& OutIndex) const {
    return false;
}


AAIFactionManager::AAIFactionManager() {
    this->bGroupIntoTeams = false;
    this->TeamsOf = 2;
    this->bAssignRandomTeamTactics = false;
    this->TeamBehaviourStrengthReductionSpeed = 1.00f;
    this->TeamBehaviourOverrideStrength = 0.00f;
}

