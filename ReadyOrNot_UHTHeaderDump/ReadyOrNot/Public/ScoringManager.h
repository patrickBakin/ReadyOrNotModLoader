#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "ScorePenaltyData.h"
#include "ScoreData.h"
#include "ScoreGroup.h"
#include "ScoreBonus.h"
#include "GatherDebugInterface.h"
#include "ListenForGameEnd.h"
#include "ListenForDeath.h"
#include "ScoringManager.generated.h"

class AScoringManager;
class UScoringComponent;

UCLASS(Blueprintable)
class READYORNOT_API AScoringManager : public AInfo, public IListenForDeath, public IListenForGameEnd, public IGatherDebugInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalScorePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FScoreGroup> ObjectiveScoreGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FScorePenaltyData> PenaltyScoreGroups;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsOfficialScoring;
    
    AScoringManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TakeScores(UScoringComponent* InScoringComponent, const TArray<FString>& ScoreNames, const FString& TakeReason, bool bDisplayScoreOnHUD, bool bDisableScores);
    
    UFUNCTION(BlueprintCallable)
    void TakeScore(UScoringComponent* InScoringComponent, const FString& ScoreName, const FString& TakeReason, bool bDisplayScoreOnHUD, bool bDisableScore);
    
    UFUNCTION(BlueprintCallable)
    void TakeAllScoresExcept(UScoringComponent* InScoringComponent, const TArray<FString>& ScoreNames, const FString& TakeReason, bool bDisplayScoreOnHUD, bool bDisableScores);
    
    UFUNCTION(BlueprintCallable)
    void TakeAllScores(UScoringComponent* InScoringComponent, const FString& TakeReason, bool bDisplayScoreOnHUD, bool bDisableScores);
    
    UFUNCTION(BlueprintCallable)
    void RevokePenalty(UScoringComponent* InScoringComponent, const FString& PenaltyGroupName);
    
    UFUNCTION(BlueprintCallable)
    void RevokeAllPenalties(UScoringComponent* InScoringComponent);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DisplayScore(const FText& ScoreText, int32 Score, bool bGive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOfficialScoring();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void HasClearedMission(bool& bHasClearedMission, bool& bSoftClearedMission, bool& bMissionFailed);
    
    UFUNCTION(BlueprintCallable)
    void GiveScores(UScoringComponent* InScoringComponent, const TArray<FString>& ScoreNames, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD);
    
    UFUNCTION(BlueprintCallable)
    void GiveScore(UScoringComponent* InScoringComponent, const FString& ScoreName, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD);
    
    UFUNCTION(BlueprintCallable)
    void GivePenalty(UScoringComponent* InScoringComponent, const FString& PenaltyGroupName, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD);
    
    UFUNCTION(BlueprintCallable)
    void GiveFakeScore(UScoringComponent* InScoringComponent, const FString& ScoreName, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD);
    
    UFUNCTION(BlueprintCallable)
    void GiveCustomPenalty(const FString& PenaltyGroupName, int32 PenaltyScore, bool bDisplayScoreOnHUD, float DisplayOnHUDDelay);
    
    UFUNCTION(BlueprintCallable)
    void GiveAllScores(UScoringComponent* InScoringComponent, bool bOnlyEnabledScore, bool bDisplayScoreOnHUD, const FString& ScoreText, float DisplayOnHUDDelay, int32 CustomScoreOnHUD);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTotalScorePool(int32& MaxScore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalScoreFromArray(const TArray<FScoreData>& InScoreDataArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalScoreCountFromArray(const TArray<FScoreData>& InScoreDataArray, bool bIncludeHiddenScores) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTotalScore(int32& TotalScore, bool bIncludePrimaryScores);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalNonGivenScoresFromArray(const TArray<FScoreData>& InScoreDataArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalGivenScoresFromArray(const TArray<FScoreData>& InScoreDataArray, bool bIncludeHiddenScores) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalActorsTrackingScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSuspectCount(int32& OutReported, int32& OutArrested, int32& OutKilled, int32& OutTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FScoreGroup> GetScoreGroups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetScoreCountFromGroup(const FString& InGroupName, int32& OutScoresGiven, int32& OutTotalScores, bool bRequiredOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetReportCount(int32& ReportedCount, int32& TotalReports);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FScorePenaltyData> GetPenaltyScoreGroups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetObjectiveCompletionStatus(int32& ObjectivesComplete, int32& ObjectivesFailed, int32& TotalObjectives);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNonGivenScoreCountFromGroup(const TArray<FScoreGroup>& InScoreGroupArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNonGivenScoreCountFromArray(const TArray<FScoreData>& InScoreDataArray, bool bOnlyEnabled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGivenScoreCountFromGroup(const TArray<FScoreGroup>& InScoreGroupArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGivenScoreCountFromArray(const TArray<FScoreData>& InScoreDataArray, bool bIncludeHiddenScores) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEvidenceCount(int32& EvidenceCollected, int32& TotalEvidence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentScoreAsPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCivilianCount(int32& OutReported, int32& OutInjured, int32& OutKilled, int32& OutArrested, int32& OutTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AScoringManager* Get();
    
    UFUNCTION(BlueprintCallable)
    void DisplayPenalties(UScoringComponent* InScoringComponent, bool bCondensed, const FString& ScoreTextOverride);
    
    UFUNCTION(BlueprintCallable)
    void DisplayBonusesAndPenalties(UScoringComponent* InScoringComponent, bool bCondensed, const FString& ScoreTextOverride);
    
    UFUNCTION(BlueprintCallable)
    void DisplayBonuses(UScoringComponent* InScoringComponent, bool bCondensed, const FString& ScoreTextOverride);
    
    UFUNCTION(BlueprintCallable)
    void ChangeScoreGroup(UScoringComponent* InScoringComponent, const FString& NewGroupName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CalculateGradeLetterFromScore(int32 Score) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CalculateGradeLetterFromPlayerScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CalculateGradeLetterFromPercentage(float ScorePercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyScoresGiven(const TArray<FScoreBonus>& InScoreBonusArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllScoresGiven(const TArray<FScoreBonus>& InScoreBonusArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllRequiredScoresGiven(const TArray<FScoreBonus>& InScoreBonusArray) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

