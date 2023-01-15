#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PlanningDrawingArray.h"
#include "PlanningDrawing.h"
#include "SavedLoadout.h"
#include "EFireMode.h"
#include "EDLC.h"
#include "ETeamType.h"
#include "EVoiceType.h"
#include "ReadyOrNotPlayerState.generated.h"

class UDamageType;
class ABaseWeapon;
class ABaseMagazineWeapon;
class AEvidenceActor;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLoadoutChanged, FSavedLoadout, NewLoadout);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasFinishedLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Kills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 KillsThisLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TeamKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Arrests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TimesArrested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 ArrestsThisLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Reports;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Evidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AEvidenceActor*> EvidenceActorsInPossession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DeathDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABaseMagazineWeapon* DeathWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireMode LastFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDeadToPointDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FHitResult DeathTraceHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* DeathKiller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Deaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Incapacitations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString PlayerSpawnTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BulletsFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BulletsFiredThisLife;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETeamType Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateServerSavedLoadout, meta=(AllowPrivateAccess=true))
    FSavedLoadout ServerSavedLoadout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLoadoutChanged OnPlayerLoadoutChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSquadLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateServerSavedLoadout, meta=(AllowPrivateAccess=true))
    FSavedLoadout LastLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PointsFromKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PointsFromDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PointsFromArrests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PointsFromObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PointsFromReportingKills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PointsFromReportingArrests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJoinInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsVIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWasVIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 GrenadesThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalYells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumberOrdersGiven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BulletsHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BulletsHitThisLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Headshots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeAlive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EVoiceType VoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsTalking;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTorsoInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftArmInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightArmInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftLegInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightLegInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeadInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BulletsBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitsReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsReplaySpectator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPlanningDrawingArray DrawingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPlanningDrawing CurrentDrawing;
    
    AReadyOrNotPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateScore();
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(ETeamType NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetReady(bool bIsReady, FSavedLoadout NewLoadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetIsTalking(bool bNewTalking);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetJoinedOnSquadLeader();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdatePlayerSpawnTag(const FString& NewTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateDrawing(FPlanningDrawing Drawing);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetVoiceType(EVoiceType NewVoiceType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetTeam(ETeamType NewTeam);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetReady(bool bIsReady, FSavedLoadout NewLoadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetPlayerName(FName NewPlayerName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLoadout(FSavedLoadout NewLoadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIsInGame(bool bNewIsInGame);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SendUnlockedDLC(EDLC Dlc);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_FinishDrawing(FPlanningDrawing Drawing);
    
    UFUNCTION(BlueprintCallable)
    void ResetBulletsFired();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateServerSavedLoadout();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Notify_PendingChangeTeam(ETeamType NewTeamType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVipPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerOfPlayerState();
    
    UFUNCTION(BlueprintCallable)
    void IncrementBulletsFired(ABaseWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasEveryoneFinishedLoading(int32& OutTotal, int32& OutLoading, int32& OutLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoiceType GetVoiceType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetPendingTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNetworkStatus(float& AvgLag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeathCount();
    
};

