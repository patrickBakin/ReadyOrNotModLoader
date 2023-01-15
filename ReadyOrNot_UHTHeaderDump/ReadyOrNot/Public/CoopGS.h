#pragma once
#include "CoreMinimal.h"
#include "ECOOPMode.h"
#include "ReadyOrNotGameState.h"
#include "ListenForGameStart.h"
#include "ListenForGameEnd.h"
#include "ESelectedSpawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODEventInstance -FallbackName=FMODEventInstance
#include "CoopGS.generated.h"

class AActor;
class UFMODEvent;
class APlayerCharacter;
class AReadyOrNotPlayerController;

UCLASS(Blueprintable)
class READYORNOT_API ACoopGS : public AReadyOrNotGameState, public IListenForGameStart, public IListenForGameEnd {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bMissionSucceded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bMissionSoftCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_COOPMode, meta=(AllowPrivateAccess=true))
    ECOOPMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCrouchingTigerHiddenDragon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentDeployables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* DeployableDepot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName DepotLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapElement, meta=(AllowPrivateAccess=true))
    int32 DepotNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DepotCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentPersonnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentUsedPersonnelPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> PersonnelMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalAIOfficers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalOfficers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumCompleteExtraObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumTotalExtraObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TeamKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllPlayerCharactesDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 SquadPointsRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapElement, meta=(AllowPrivateAccess=true))
    ESelectedSpawn SelectedRedSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RedSpawnSquadPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapElement, meta=(AllowPrivateAccess=true))
    ESelectedSpawn SelectedBlueSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BlueSpawnSquadPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* missionMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODEventInstance musicInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PromotedLeaderFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 YesVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NoVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TOCDelay;
    
    ACoopGS();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateVotes(int32 Yes, int32 No);
    
    UFUNCTION(BlueprintCallable)
    void StartTOCBriefing(const FString& TOCLine);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetDeployableDepot(AReadyOrNotPlayerController* Controller, int32 NewDepotNum);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MapElement();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_COOPMode();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnMissionEnd(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BroadcastNewSquadLeader(APlayerCharacter* NewLeader);
    
    UFUNCTION(BlueprintCallable)
    bool IsPersonnelEnabled(int32 PersonnelNum);
    
    UFUNCTION(BlueprintCallable)
    bool IsDeployableEnabled(int32 DeployableNumber);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetUsedPersonnelPoints();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetUnenabledPersonnel();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetUnenabledDeployables();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPersonnelForMapNum(int32 MapPointNum);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetEnabledPersonnel();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetEnabledDeployablesShortNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetEnabledDeployables();
    
    UFUNCTION(BlueprintCallable)
    bool CanChangeSpawn(bool bBlueTeam, ESelectedSpawn NewSpawn);
    
    
    // Fix for true pure virtual functions not being implemented
};

