#include "ScoringManager.h"
#include "Net/UnrealNetwork.h"

class AScoringManager;
class UScoringComponent;

void AScoringManager::TakeScores(UScoringComponent* InScoringComponent, const TArray<FString>& ScoreNames, const FString& TakeReason, bool bDisplayScoreOnHUD, bool bDisableScores) {
}

void AScoringManager::TakeScore(UScoringComponent* InScoringComponent, const FString& ScoreName, const FString& TakeReason, bool bDisplayScoreOnHUD, bool bDisableScore) {
}

void AScoringManager::TakeAllScoresExcept(UScoringComponent* InScoringComponent, const TArray<FString>& ScoreNames, const FString& TakeReason, bool bDisplayScoreOnHUD, bool bDisableScores) {
}

void AScoringManager::TakeAllScores(UScoringComponent* InScoringComponent, const FString& TakeReason, bool bDisplayScoreOnHUD, bool bDisableScores) {
}

void AScoringManager::RevokePenalty(UScoringComponent* InScoringComponent, const FString& PenaltyGroupName) {
}

void AScoringManager::RevokeAllPenalties(UScoringComponent* InScoringComponent) {
}

void AScoringManager::Multicast_DisplayScore_Implementation(const FText& ScoreText, int32 Score, bool bGive) {
}

bool AScoringManager::IsOfficialScoring() {
    return false;
}

void AScoringManager::HasClearedMission(bool& bHasClearedMission, bool& bSoftClearedMission, bool& bMissionFailed) {
}

void AScoringManager::GiveScores(UScoringComponent* InScoringComponent, const TArray<FString>& ScoreNames, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD) {
}

void AScoringManager::GiveScore(UScoringComponent* InScoringComponent, const FString& ScoreName, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD) {
}

void AScoringManager::GivePenalty(UScoringComponent* InScoringComponent, const FString& PenaltyGroupName, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD) {
}

void AScoringManager::GiveFakeScore(UScoringComponent* InScoringComponent, const FString& ScoreName, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD) {
}

void AScoringManager::GiveCustomPenalty(const FString& PenaltyGroupName, int32 PenaltyScore, bool bDisplayScoreOnHUD, float DisplayOnHUDDelay) {
}

void AScoringManager::GiveAllScores(UScoringComponent* InScoringComponent, bool bOnlyEnabledScore, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD) {
}

void AScoringManager::GetTotalScorePool(int32& MaxScore) {
}

int32 AScoringManager::GetTotalScoreFromArray(const TArray<FScoreData>& InScoreDataArray) const {
    return 0;
}

int32 AScoringManager::GetTotalScoreCountFromArray(const TArray<FScoreData>& InScoreDataArray, bool bIncludeHiddenScores) const {
    return 0;
}

void AScoringManager::GetTotalScore(int32& TotalScore, bool bIncludePrimaryScores) {
}

int32 AScoringManager::GetTotalNonGivenScoresFromArray(const TArray<FScoreData>& InScoreDataArray) const {
    return 0;
}

int32 AScoringManager::GetTotalGivenScoresFromArray(const TArray<FScoreData>& InScoreDataArray, bool bIncludeHiddenScores) const {
    return 0;
}

int32 AScoringManager::GetTotalActorsTrackingScore() const {
    return 0;
}

void AScoringManager::GetSuspectCount(int32& OutReported, int32& OutArrested, int32& OutKilled, int32& OutTotal) {
}

TArray<FScoreGroup> AScoringManager::GetScoreGroups() const {
    return TArray<FScoreGroup>();
}

void AScoringManager::GetScoreCountFromGroup(const FString& InGroupName, int32& OutScoresGiven, int32& OutTotalScores, bool bRequiredOnly) {
}

void AScoringManager::GetReportCount(int32& ReportedCount, int32& TotalReports) {
}

TArray<FScorePenaltyData> AScoringManager::GetPenaltyScoreGroups() const {
    return TArray<FScorePenaltyData>();
}

void AScoringManager::GetObjectiveCompletionStatus(int32& ObjectivesComplete, int32& ObjectivesFailed, int32& TotalObjectives) {
}

int32 AScoringManager::GetNonGivenScoreCountFromGroup(const TArray<FScoreGroup>& InScoreGroupArray) const {
    return 0;
}

int32 AScoringManager::GetNonGivenScoreCountFromArray(const TArray<FScoreData>& InScoreDataArray, bool bOnlyEnabled) const {
    return 0;
}

int32 AScoringManager::GetGivenScoreCountFromGroup(const TArray<FScoreGroup>& InScoreGroupArray) const {
    return 0;
}

int32 AScoringManager::GetGivenScoreCountFromArray(const TArray<FScoreData>& InScoreDataArray, bool bIncludeHiddenScores) const {
    return 0;
}

void AScoringManager::GetEvidenceCount(int32& EvidenceCollected, int32& TotalEvidence) {
}

float AScoringManager::GetCurrentScoreAsPercentage() const {
    return 0.0f;
}

void AScoringManager::GetCivilianCount(int32& OutReported, int32& OutInjured, int32& OutKilled, int32& OutArrested, int32& OutTotal) {
}

AScoringManager* AScoringManager::Get() {
    return NULL;
}

void AScoringManager::DisplayPenalties(UScoringComponent* InScoringComponent, bool bCondensed, const FString& ScoreTextOverride) {
}

void AScoringManager::DisplayBonusesAndPenalties(UScoringComponent* InScoringComponent, bool bCondensed, const FString& ScoreTextOverride) {
}

void AScoringManager::DisplayBonuses(UScoringComponent* InScoringComponent, bool bCondensed, const FString& ScoreTextOverride) {
}

void AScoringManager::ChangeScoreGroup(UScoringComponent* InScoringComponent, const FString& NewGroupName) {
}

FString AScoringManager::CalculateGradeLetterFromScore(int32 Score) const {
    return TEXT("");
}

FString AScoringManager::CalculateGradeLetterFromPlayerScore() {
    return TEXT("");
}

FString AScoringManager::CalculateGradeLetterFromPercentage(float ScorePercentage) {
    return TEXT("");
}

bool AScoringManager::AnyScoresGiven(const TArray<FScoreBonus>& InScoreBonusArray) const {
    return false;
}

bool AScoringManager::AllScoresGiven(const TArray<FScoreBonus>& InScoreBonusArray) const {
    return false;
}

bool AScoringManager::AllRequiredScoresGiven(const TArray<FScoreBonus>& InScoreBonusArray) const {
    return false;
}

void AScoringManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AScoringManager, TotalScorePool);
    DOREPLIFETIME(AScoringManager, ObjectiveScoreGroups);
    DOREPLIFETIME(AScoringManager, PenaltyScoreGroups);
    DOREPLIFETIME(AScoringManager, bIsOfficialScoring);
}

AScoringManager::AScoringManager() {
    this->TotalScorePool = 0;
    this->bIsOfficialScoring = true;
}

