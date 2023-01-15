#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReadyOrNotCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DebugData.h"
#include "CoverAnimStateMachineData.h"
#include "HidingAnimStateMachineData.h"
#include "HoleTraversalAnimStateMachineData.h"
#include "AIDataLookupTable.h"
#include "ActivityRouteCollection.h"
#include "AIMoveDataBlock.h"
#include "AIMovementStyleData.h"
#include "WorldBuildingAnimState.h"
#include "TakeHostageAnimState.h"
#include "AttachedMeshData.h"
#include "AttachedSkeletalMeshData.h"
#include "CharacterMesh.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DynamicCoverSystem -ObjectName=ECoverFireType -FallbackName=ECoverFireType
//CROSS-MODULE INCLUDE V2: -ModuleName=DynamicCoverSystem -ObjectName=ECoverAimType -FallbackName=ECoverAimType
//CROSS-MODULE INCLUDE V2: -ModuleName=DynamicCoverSystem -ObjectName=ECoverDirection -FallbackName=ECoverDirection
#include "ESurrenderExitType.h"
#include "ECombatState.h"
#include "ReadyOrNotCharacter.h"
#include "CyberneticCharacter.generated.h"

class AActor;
class UFMODEvent;
class APawn;
class AAIFactionManager;
class UAIArchetypeData;
class AAISpawn;
class ABaseArmour;
class ABaseItem;
class UDamageType;
class ABaseMagazineWeapon;
class ACyberneticController;
class ACyberneticCharacter;
class ACoverLandmark;
class UStaticMeshComponent;
class UWorldBuildingActivity;
class APlayerCharacter;
class UReadyOrNotCharacterAnimData;
class UScoringComponent;
class URoNMoveStyleComponent;
class AWallHoleTraversal;
class UAnimSequence;
class UAnimMontage;
class UTextRenderComponent;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ACyberneticCharacter : public AReadyOrNotCharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponForceFireNotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpottedCharacter, ACyberneticCharacter*, Spotter, AReadyOrNotCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSensedCharacter, AReadyOrNotCharacter*, Character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSensedActor, AActor*, Actor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHeardOfficerYellSignature, AReadyOrNotCharacter*, Shouter, bool, bLOS);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExitedSurrender, ESurrenderExitType, ExitType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorBreachNotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCollectPendingEvidenceNotify);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAimedAt, ACyberneticCharacter*, Character, AReadyOrNotCharacter*, Target);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAIFire, ACyberneticCharacter*, AICharacter, ABaseMagazineWeapon*, MagazineWeapon, FVector, fireDirection);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAIFinishedSpawningDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* ClosestPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoNMoveStyleComponent* MoveStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceComplianceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverDirection ActiveCoverDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverAimType ActiveCoverAimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverFireType ActiveCoverFireType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ActiveCoverFirePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ActiveCoverIdlePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACoverLandmark* CurrentCoverLandmarkInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACoverLandmark* LastCoverLandmarkUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AWallHoleTraversal* CurrentWallHoleTraversalInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AWallHoleTraversal* LastWallHoleTraversalUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* VoiceLineEventMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_SimulatingAttachedStaticMeshes, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> SimulatingAttachedStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedMeshData, meta=(AllowPrivateAccess=true))
    TArray<FAttachedMeshData> AttachedMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedSkeletalMeshData, meta=(AllowPrivateAccess=true))
    TArray<FAttachedSkeletalMeshData> AttachedSkeletalMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* LastEquippedBreachItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpottedCharacter OnSpottedEnemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpottedCharacter OnSpottedFriendly;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpottedCharacter OnSpottedNeutral;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensedActor OnSensedActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensedCharacter OnSensedCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIFinishedSpawningDelegate OnAIFinishSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* NoBuenoTextRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbuseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ReasonsToSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ReasonsToStandStill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ReasonsToWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootingYellCoolDownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FCoverAnimStateMachineData Rep_CoverAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FHidingAnimStateMachineData Rep_HidingAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FHoleTraversalAnimStateMachineData Rep_HoleTraversalAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AReadyOrNotCharacter*, int32> MeleeCountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWorldBuildingActivity>> CivilianCowerActivities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CivilianCowerActivityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIFactionManager* FactionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECombatState CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* RecentMeleeVictim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasEverShot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponForceFireNotifyEvent OnWeaponForceFire_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorBreachNotifyEvent OnDoorShotgunBreach_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorBreachNotifyEvent OnDoorKickBreach_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter::FOnItemThrownNotifyEvent OnPendingItemThrown_FromAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* PendingThrownItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIFire OnAIFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollectPendingEvidenceNotify OnCollectPendingEvidenceBegin_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollectPendingEvidenceNotify OnCollectPendingEvidenceEnd_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeardOfficerYellSignature OnHeardOfficerYell;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitedSurrender OnExitedSurrender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* BeingRestrainedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoringComponent* ScoringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataLookupTable AssignedAIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawn* SpawnedFromSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIArchetypeData* DefaultSuspectArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIArchetypeData* DefaultCivilianArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivityRouteCollection ActivityRouteCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Rep_AimOffsetFocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Rep_FocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Rep_HeadFocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* Rep_FocalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHeardYellFromOfficer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceHeardOfficerYell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrestedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastGetUpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bRecoveringFromRagdoll: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsKnockedOut: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayingDead: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotCharacterAnimData* Unarmed_Calm_AD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotCharacterAnimData* Unarmed_Sr_AD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotCharacterAnimData* Unarmed_Ar_AD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotCharacterAnimData* Unarmed_Ar_Crouch_AD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotCharacterAnimData* Unarmed_Alert_AD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotCharacterAnimData* Rifle_AD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotCharacterAnimData* Pistol_AD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotCharacterAnimData* Pistol_OneHanded_AD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMoveDataBlock MoveDataOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMoveDataBlock CurMoveDataBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMovementStyleData MovementStyleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveStyleOverrideName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingStress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceArrest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPlayedSurrenderAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsFakeSurrender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasEverFakeSurrendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedEquippingLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedEquippingArmour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFiringEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterMeshData, meta=(AllowPrivateAccess=true))
    FCharacterMesh CharacterMeshData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAimedAt OnAimedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAimingAtTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasEverAimedAtTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFleeing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsExitingLandmark: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawingWeapon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPickingUpWeapon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasDamagedSWATTeam: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHitScannedFriendly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDiedWhilstTraversingHole: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDiedWhilstHiding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsRaisingWeapon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsLoweringWeapon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawingWeaponTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickingUpWeaponTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RaisingWeaponTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoweringWeaponTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FHitResult CachedHitScanResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FWorldBuildingAnimState Rep_WorldBuildingAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTakeHostageAnimState Rep_TakeHostageAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HostageMasterIdleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HostageSlaveIdleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* TakenHostageBy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSurrendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsComplying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsWaiting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PepperSprayAbuseLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastTasered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimesTasered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector RagdollMeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator RagdollMeshRotation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocalPointInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorRotationInterpStandingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActorRotationInterpMovingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetInterpSpeed;
    
    ACyberneticCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyYelledAt(const float Seconds) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateDefaultMoveStyle();
    
    UFUNCTION(BlueprintCallable)
    bool SurrenderExit(ESurrenderExitType ExitType, FVector FocalPoint);
    
    UFUNCTION(BlueprintCallable)
    void Surrender();
    
    UFUNCTION(BlueprintCallable)
    void StopPlayingDead();
    
    UFUNCTION(BlueprintCallable)
    void PlayShootingWeaponConversation();
    
    UFUNCTION(BlueprintCallable)
    bool PlayMontageWithFocalPoint(UAnimMontage* Montage, const FVector& FocalPoint);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayMontageFromTableWithIndexWithFocalPoint(const FString& Animation, int32 Index, const FVector& FocalPoint);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayMontageFromTableWithFocalPoint(const FString& Animation, const FVector& FocalPoint);
    
    UFUNCTION(BlueprintCallable)
    void PlayDead(float Duration, const bool bPlayVO);
    
    UFUNCTION(BlueprintCallable)
    void PlayBarkOrStartConversation(const FString& SpeechRow, bool bHasSharedCooldown, float Cooldown);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatingAttachedStaticMeshes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterMeshData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedSkeletalMeshData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedMeshData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOfficerShouted(AReadyOrNotCharacter* Shouter, bool bLOS);
    
    UFUNCTION(BlueprintCallable)
    void OnGetupAfterRagdollComplete();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendCharacterMeshData(FCharacterMesh RPC_CharacterMeshData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayArmourHitEffects(ABaseArmour* Armour, FHitResult Hit);
    
    UFUNCTION(BlueprintCallable)
    void Knockout(float Duration, bool bPlayVO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWearingHeadArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWearingExplosiveVest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnjustifiedUseOfForce(AReadyOrNotCharacter* Aggressor, ABaseItem* ForceWeapon, const UDamageType* ForceUsed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTakingHostage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTakingCoverAtLandmark() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTakingCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRaisingWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingStunAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingToLandmarkCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingToCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoweringWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHesitatingFor(const float Seconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHesitating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiringFromCover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExitingSurrender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndingHostageTake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamagedByLethal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamagedByLessLethal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingTakenHostage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeginningHostageTake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrestCapable(APlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveForCombat() const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseStress(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDamagedSWAT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisibleSWATPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHesitationTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFocalPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseMagazineWeapon* GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDebugData> GetDebugInfoOnROE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticController* GetCyberneticsController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseArmour* GetArmour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIArchetypeData* GetAIArchetype() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceFireGun(float Chance);
    
    UFUNCTION(BlueprintCallable)
    void FakeSurrender();
    
    UFUNCTION(BlueprintCallable)
    void DrawWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESurrenderExitType DetermineSurrenderExitType() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseStress(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExitSurrender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateGetupPosition() const;
    
};

