#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECOOPMode.h"
#include "ReadyOrNotGameMode.h"
#include "SavedLoadout.h"
#include "ETeamType.h"
#include "CoopGM.generated.h"

class AActor;
class ACharacter;
class AAIController;
class UUserWidget;
class AAISpawn;
class AReadyOrNotCharacter;
class ACyberneticCharacter;
class UBulletDamageType;
class ACommandDecal;
class ADoor;
class AEvidenceActor;
class AGameplayManager;
class AHighgroundVolume;
class APlayerCharacter;
class APlayerStart;
class AReadyOrNotAvoidanceManager;
class ASWATManager;
class ASWATCharacter;
class ASuspectsAndCivilianManager;
class USoundCue;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ACoopGM : public AReadyOrNotGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionEnded, bool, bMissionSucceded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAllAISpawnedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllAISpawnedDelegate OnAllAISpawned;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASWATManager* SWATManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASuspectsAndCivilianManager* SuspectsAndCivilianManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayManager* GameplayManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECOOPMode Mode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotAvoidanceManager* AvoidanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> KilledSuspectAvoidanceShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNegotiatorActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAIEquipSameLoadoutAsPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHostagesKilledBeforeMissionFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTeamKillsBeforeAIRetaliates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACommandDecal> CommandDecalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACyberneticCharacter> SwatAlphaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACyberneticCharacter> SwatBetaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACyberneticCharacter> SwatCharlieClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACyberneticCharacter> SwatDeltaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIController> FriendlyAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLoadout FriendlyAILoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEvidenceActor> EvidenceClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionEnded OnMissionEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> GameStartedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> KeycardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AI_SpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APlayerCharacter*, int32> FriendlySwatKilledCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> RemainingAICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEvidenceActor*> EvidenceInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextHighgroundDesignation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHighgroundVolume*> Highground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUniqueOfficerSoundsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPickedOfficerSoundsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PickedOfficerSoundsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASWATCharacter*> SpawnedSWATAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACommandDecal*> SpawnedCommandDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawn*> SpawnLaterSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* NegFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PosFeedBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADoor*> KickedDoorsTriggeredMoraleChange;
    
    ACoopGM();
    UFUNCTION(BlueprintCallable)
    void StartMissionEndTimer(bool bWon);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSuspectsAndHostages();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPolice();
    
    UFUNCTION(BlueprintCallable)
    void SpawnDeployables();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SoftClearVoteCheck();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllSpawnedAI();
    
    UFUNCTION(BlueprintCallable)
    void Personnel_SpawnVentilation(int32 PersonnelNum, int32 MapPointNum);
    
    UFUNCTION(BlueprintCallable)
    void Personnel_SpawnTruckDriver(int32 PersonnelNum, int32 MapPointNum);
    
    UFUNCTION(BlueprintCallable)
    void Personnel_SpawnPowerCrew();
    
    UFUNCTION(BlueprintCallable)
    void Personnel_SpawnOperator(int32 PersonnelNum, int32 MapPointNum, bool bNoisemaker);
    
    UFUNCTION(BlueprintCallable)
    void Personnel_SpawnNegotiator();
    
    UFUNCTION(BlueprintCallable)
    void Personnel_SpawnHighground(int32 PersonnelNum, int32 MapPointNum, bool bSpotter, bool bMarksman, bool bSniper);
    
    UFUNCTION(BlueprintCallable)
    void MissionEnd(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASWATManager* GetSWATManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECOOPMode GetCOOPMode() const;
    
    UFUNCTION(BlueprintCallable)
    void FriendlyAIKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void FindSpotUpgradeSWAT();
    
    UFUNCTION(BlueprintCallable)
    APlayerStart* FindPlayerStartForTeam(ETeamType Team);
    
    UFUNCTION(BlueprintCallable)
    void EnemyAIKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void EnemyAIBulletHit(float Damage, AActor* Causer, ACharacter* InstigatorCharacter, ACharacter* HitCharacter, const UBulletDamageType* DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void EnemyAIArrested(AReadyOrNotCharacter* ArrestedCharacter, AReadyOrNotCharacter* InstigatorCharacter);
    
    UFUNCTION(BlueprintCallable)
    void CheckSpawners();
    
};

