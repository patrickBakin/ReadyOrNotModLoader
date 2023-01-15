#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "QueuedSwatCommand.h"
#include "SWATRequestOrder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESquadPosition.h"
#include "ETeamType.h"
#include "ESwatCommand.h"
#include "ESwatCommandPriority.h"
#include "EDoorBreachType.h"
#include "SWATManager.generated.h"

class AActor;
class ABaseItem;
class ABaseGrenade;
class AReadyOrNotCharacter;
class ACyberneticCharacter;
class AClearPoint;
class ADoor;
class APlayerCharacter;
class UWorld;
class ASWATManager;
class ASWATCharacter;
class UTeamBreachAndClearActivity;

UCLASS(Blueprintable)
class READYORNOT_API ASWATManager : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> SpeechCooldownMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TrackedSquadLeaderLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASWATCharacter*> SwatAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnoreForCommandMarking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASWATCharacter*> AllSpawnedSWAT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LeadCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PotentialFocusActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> KnownEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AClearPoint*> PotentialClearPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> HasEverSeenList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* SquadLeader;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSWATRequestOrder> RequestOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETeamType, FQueuedSwatCommand> QueuedSwatCommandMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommand CurrentDefaultCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwatCommandPriority SwatCommandPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType ActiveCommandTeam;
    
    ASWATManager();
    UFUNCTION(BlueprintCallable)
    void RemoveHoldCommand(ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable)
    void PlaySwatCommandVoiceLine(const FString& VoiceLine, const FString& OverrideSpearkerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSWATTeamDead(ETeamType Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerAKnownEnemy(APlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    void GiveWedgeDoorCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal);
    
    UFUNCTION(BlueprintCallable)
    void GiveWaitingForCommand();
    
    UFUNCTION(BlueprintCallable)
    void GiveStackUpCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal, bool bCheckDoor);
    
    UFUNCTION(BlueprintCallable)
    void GiveRestrainCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation);
    
    UFUNCTION(BlueprintCallable)
    void GiveReportTargetCommand(AActor* Target, ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable)
    void GiveRemoveWedgeCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal);
    
    UFUNCTION(BlueprintCallable)
    void GivePickLockCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation);
    
    UFUNCTION(BlueprintCallable)
    void GiveOpenDoorCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation);
    
    UFUNCTION(BlueprintCallable)
    void GiveMoveCommand(ETeamType TeamType, FVector CommandLocation, FVector CommandNormal, float Delay, bool bMoveToCover);
    
    UFUNCTION(BlueprintCallable)
    void GiveHoldCommand(ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable)
    void GiveFallInCommand(ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable)
    void GiveDropChemlightAtLocation(ETeamType TeamType, FVector CommandLocation);
    
    UFUNCTION(BlueprintCallable)
    void GiveDisarmTrapOnDoorCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal, bool bWaitForNextCommand);
    
    UFUNCTION(BlueprintCallable)
    void GiveDisarmStandaloneTrapCommand(AActor* Target, ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable)
    void GiveDeployShield(ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable)
    void GiveDeployGrenadeAtLocation(ETeamType TeamType, FVector CommandLocation, TSubclassOf<ABaseGrenade> Grenade);
    
    UFUNCTION(BlueprintCallable)
    void GiveCollectEvidenceCommand(AActor* Target, ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable)
    void GiveCloseDoorCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation);
    
    UFUNCTION(BlueprintCallable)
    void GiveCheckForTrapsCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal);
    
    UFUNCTION(BlueprintCallable)
    void GiveCheckForContactsCommand(AActor* Target, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal);
    
    UFUNCTION(BlueprintCallable)
    void GiveBreachAndClearCommand(ADoor* Door, EDoorBreachType DoorBreachType, ETeamType TeamType, FVector CommandLocation, FVector CommandNormal, TSubclassOf<ABaseItem> DoorBreachItemClass, TSubclassOf<ABaseItem> DoorUseItemClass, TSubclassOf<UTeamBreachAndClearActivity> InCustomBreachAndClearActivityClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASWATCharacter*> GetSwatTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASWATCharacter*> GetSWATSortedByDistanceToLocation(FVector Location, ETeamType FilterTeam, ADoor* StackUpDoor, bool bAscendingOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASWATManager* GetSWATManager(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASWATCharacter* GetSwatCharacterAtSquadPosition(ESquadPosition InSquadPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESwatCommand GetQueuedSwatCommandForSquadPosition(ESquadPosition SquadPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetLeadCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGiveActivityToSWAT(ASWATCharacter* SWAT, ETeamType Team) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanDropItemContext(TSubclassOf<ABaseItem> Item);
    
};

