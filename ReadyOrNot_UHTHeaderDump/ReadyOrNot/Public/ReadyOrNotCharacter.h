#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
#include "BecomesWet.h"
#include "CanUseMultitoolOn.h"
#include "CanIssueCommandOn.h"
#include "GetFriendlyName.h"
#include "GatherDebugInterface.h"
#include "ListenForGameEnd.h"
#include "Meleeable.h"
#include "ListenForYell.h"
#include "PingInterface.h"
#include "Reportable.h"
#include "ReceiveAISenseUpdates.h"
#include "ScoringInterface.h"
#include "UseabilityInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISightTargetInterface -FallbackName=AISightTargetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdAgentInterface -FallbackName=CrowdAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
#include "LimbHealthData.h"
#include "CharacterDamageEvent.h"
#include "CarryArrestedAnimState.h"
#include "CharacterLookOverride.h"
#include "SuppressionData.h"
#include "RonReplicatedAcceleration.h"
#include "EStunType.h"
#include "ETOCPriority.h"
#include "EActorOutlineType.h"
#include "ECharacterDeathReason.h"
#include "ESquadPosition.h"
#include "EGibAreas.h"
#include "ECharacterEmotion.h"
#include "EAnimWeaponType.h"
#include "ELimbType.h"
#include "EPlayerHealthStatus.h"
#include "ETeamType.h"
#include "ReadyOrNotCharacter.generated.h"

class UObject;
class AActor;
class UPrimitiveComponent;
class UFMODEvent;
class UFMODAudioComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class AController;
class USkinnedDecalSampler;
class UMatineeCameraShake;
class ABaseArmour;
class ABaseItem;
class UBloodData;
class UDamageType;
class UStunDamage;
class ABaseWeapon;
class ABaseMagazineWeapon;
class AReadyOrNotCharacter;
class UCharacterHealthComponent;
class UBulletDamageType;
class ACollectedEvidenceActor;
class UPhysicalMaterial;
class ADoor;
class UFMODAudioPropagationComponent;
class AEvidenceActor;
class UGibComponent;
class UInventoryComponent;
class UInteractionsData;
class UInteractableComponent;
class AImpactEffect;
class UItemVisualizationComponent;
class UMapActorComponent;
class APepperspray;
class APairedInteractionDriver;
class UObjectiveMarkerComponent;
class ANeutralizeSuspectByTag;
class APlacedZipcuffs;
class ASkeletalMeshActor;
class ATaser;
class ATOCManager;
class AZipcuffs;
class UAnimSequence;
class UAnimMontage;
class UCapsuleComponent;
class UParticleSystem;
class UPhysicsAsset;
class UPhysicalAnimationComponent;
class UPawnNoiseEmitterComponent;
class UPoseAsset;
class UAIPerceptionStimuliSourceComponent;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotCharacter : public ACharacter, public ICrowdAgentInterface, public IGenericTeamAgentInterface, public IAISightTargetInterface, public IBecomesWet, public IReportable, public ICanUseMultitoolOn, public IGetFriendlyName, public IUseabilityInterface, public IGatherDebugInterface, public IPingInterface, public IMeleeable, public IListenForYell, public IScoringInterface, public IListenForGameEnd, public ICanIssueCommandOn, public IReceiveAISenseUpdates {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWeaponFire, AReadyOrNotCharacter*, Character, ABaseMagazineWeapon*, Weapon, FVector, fireDirection);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStunnedPlaySound, EStunType, StunType, bool, bIsImmune);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStunnedEnded, EStunType, StunType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnStunned, AReadyOrNotCharacter*, StunnedCharacter, float, Duration, EStunType, StunType, AActor*, DamageCauser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnStunDamage, float, Damage, AActor*, Causer, ACharacter*, InstigatorCharacter, ACharacter*, HitCharacter, const UStunDamage*, DamageEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuickthrowStart, ABaseItem*, LastItemBeforeQuickThrow, ABaseItem*, QuickThrowGrenade);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuickthrowEnd, ABaseItem*, QuickThrowGrenade);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnPointDamage, float, Damage, AActor*, Causer, ACharacter*, InstigatorCharacter, ACharacter*, HitCharacter, UBulletDamageType*, DamageEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerHitEvent, float, Damage, FName, HitBone);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPickupItemNotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMirrorDoorNotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeleeHitTaken, AReadyOrNotCharacter*, InstigatorCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemThrownNotifyEvent, ABaseItem*, InThrownItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGetupComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFreed, ACharacter*, Freed, ACharacter*, Freer);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFootstep);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDowned, AReadyOrNotCharacter*, DownedCharacter, AReadyOrNotCharacter*, InstigatorCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorWedgePlacedNotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorLockPickNotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorCheckedNotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisarmTrapNotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnCharacterTakeDamage, AReadyOrNotCharacter*, InstigatorCharacter, AReadyOrNotCharacter*, DamagedCharacter, AActor*, DamageCauser, float, Damage, float, HealthRemaining);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterKilled, AReadyOrNotCharacter*, InstigatorCharacter, AReadyOrNotCharacter*, KilledCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterIncapacitated, AReadyOrNotCharacter*, IncapacitatedCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnC2NotifyEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoneDamaged, FName, BoneHit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FOnBodyPartDamaged, bool, bHeadDamaged, bool, bBodyDamaged, bool, bLeftArmDamaged, bool, bRightArmDamaged, bool, bLeftLegDamaged, bool, bRightLegDamaged, bool, bLeftFootDamaged, bool, bRightFootDamaged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnArrest, AReadyOrNotCharacter*, ArrestedCharacter, AReadyOrNotCharacter*, InstigatorCharacter);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshGearSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* PlayerMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemVisualizationComponent* PrimaryItemVisualizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemVisualizationComponent* SecondaryItemVisualizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemVisualizationComponent* LongTacticalVisualizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemVisualizationComponent* HelmetVisualizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemVisualizationComponent* EquippedItemVisualizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapActorComponent* MapActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioPropagationComponent* FMODAudioPropagationComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FMODVoiceAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UCharacterHealthComponent* CharacterHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnNoiseEmitterComponent* NoiseEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* PerceptionStimuliComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGibComponent* GibComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UPhysicalAnimationComponent* PhysicalAnimationComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedDecalSampler* SkinnedDecalSampler;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ControlRotation, meta=(AllowPrivateAccess=true))
    FRotator ReplicatedControlRotation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterKilled OnCharacterKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterIncapacitated OnCharacterIncapacitated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponFire OnWeaponFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponFire OnWeaponDryFire;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDowned OnPlayerDowned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPointDamage OnPointDamageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStunDamage OnStunDamageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFreed OnPlayerFreed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerHitEvent OnPlayerHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerHitEvent OnPlayerArmorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* ThrownItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetupComplete OnGetupComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemThrownNotifyEvent OnItemThrown_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorLockPickNotifyEvent OnDoorLockPickBegin_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorLockPickNotifyEvent OnDoorLockPickEnd_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorCheckedNotifyEvent OnDoorChecked_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnC2NotifyEvent OnC2Placed_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnC2NotifyEvent OnC2Detonate_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisarmTrapNotifyEvent OnTrapDisarmBegin_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisarmTrapNotifyEvent OnTrapDisarmEnd_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisarmTrapNotifyEvent OnMirrorDoorStarted_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisarmTrapNotifyEvent OnMirrorDoorFinished_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorWedgePlacedNotifyEvent OnStartDoorWedgePlacement_FromAnimNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorWedgePlacedNotifyEvent OnEndDoorWedgePlacement_FromAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDamageEvent LastDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBulletForceTransferred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumBodyFallImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRagdollSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RagdollSoundsPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BodyFallEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInRagdoll;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bBlendInPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStartBlendInIncapacitation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bBlendInIncapacitation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float IncapacitationBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float IncapacitationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAnimSequence* IncapacitationLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BlendInterpAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInAfterStartOfAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPreviewCharacter: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* ArrestedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* KilledBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* IncapacitatedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECharacterDeathReason DeathReason;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterTakeDamage OnCharacterTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStunnedPlaySound OnAIStunnedPlaySound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStunned OnStunnedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStunnedEnded OnStunnedEndedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeleeHitTaken OnMeleeHitTaken;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HeadBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UpperBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LowerBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> R_Leg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> L_Leg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> L_Foot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> R_Foot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> L_Arm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> R_Arm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> L_Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> R_Hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bLowReadyPointUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bLowReadyPointDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowReadyDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCapsuleComponent*> LowReadyIgnoredCapsules;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsCrouching: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESquadPosition SquadPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETeamType DefaultTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FPMeleeImpactFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* TPMeleeImpactFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MeleeImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> MeleeCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDamageType> MeleeDamageType;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArrest OnPlayerArrested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArrest OnPlayerArrestStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArrest OnPlayerArrestedCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FCarryArrestedAnimState Rep_CarryArrestedAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSurrendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSurrenderComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bOrderedToRotateForArrest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlacedZipcuffs* PlacedZipcuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlacedZipcuffs> SpawnedZipcuffsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlacedZipcuffs> SpawnedFPZipcuffsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZipcuffBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBeingCarried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* CarriedByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* ThrownByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* PendingCarryCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCarryCharacterChanged, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* CurrentCarryCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkeletalMeshActor* FakeCarryCharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentCarryConfirmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CarryMasterIdleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CarrySlaveIdleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCarryConfirmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastCharacterMakingArrest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* CurrentlyArresting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRagdollArrestConfirmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentRagdollArrestConfirmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* PendingRagdollArrestCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentRagdollArrestCharacterChanged, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* CurrentRagdollArrestCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBeingArrested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bArrestComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bArrestedAsRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bArrestedAsRagdoll_Flipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPairedInteractionPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoTeamDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bPrimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOverarmThrow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuickthrowStart OnQuickThrowStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuickthrowEnd OnQuickThrowEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAnimMontage*> PlayedTableMontageMap3P;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastTableMontagePlayed;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterLookOverride CharacterLookOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterLookOverride, meta=(AllowPrivateAccess=true))
    FString Rep_CharacterLookOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseArmour>, USkeletalMesh*> ArmorOverrideMapTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshReplicated, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Rep_BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshReplicated, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Rep_FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshReplicated, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Rep_FPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, float> AnimMontageCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPoseAsset* CurrentFaceROM;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationBlockingTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATOCManager* TOCManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> ReportToTOC_PVP_CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TOCLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString SpeechCharacterName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasBeenReported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeakCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ReportPlayerDeadFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ReportPlayerArrestedFMODEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ReportPlayerGeneralFMODEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> SpeechCooldownMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODVoiceLine2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODVoiceLineSpatalized;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSuppressionData> BoneSuppressionAmount;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoneDamaged OnBoneDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBodyPartDamaged OnBodyPartDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bBodyHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bRightFootHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bLeftFootHit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bBlockedByBodyArmor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bBlockedByHeadArmor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGibAreas, float> DismembermentDamageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DamageExcludedBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GasDamageAccumulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GasDamageDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGodMode: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ArmorImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBloodData* Blood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ABaseWeapon*> DamagedByWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRepStunned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EStunType RepStunnedWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bHasEverBeenStunned: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> DamagedByCharacters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PendingEvidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCollectingEvidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectionAnimHasTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CollectingLoopAnim1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CollectingLoopAnim3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACollectedEvidenceActor> CollectedEvidenceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterEmotion CurrentEmotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialAnimationOverrideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialAnimationBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialAnimationBlendTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FacialAnimationBlendDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FacialAnimationPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bMovementLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAimLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bActionsLocked;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* QueuedDoorToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* QueuedDoorToClose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ADoor* LastKickedDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* DoorKickInteractionFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* DoorKickInteractionBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* DoorKickFailureInteractionFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* DoorKickFailureInteractionBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* DoorKickBreakInteractionFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* DoorKickBreakInteractionBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* CarryArrestedInteractionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* DropArrestedInteractionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* ThrowArrestedInteractionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPlayFootstepFoley;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayEveryStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> FootstepImpactEffectFast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> FootstepImpactEffectSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* CurrentFootstepFoleyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* CurrentFootstepFoleyEventRemote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FootstepsLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FootstepsRemote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefaultRagdollPhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefaultAlivePhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* CuffedRagdollPhysAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveRagdollPhysAsset, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* Rep_ActiveRagdollPhysAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANeutralizeSuspectByTag* NeutralizeSuspectTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> TorsoDeathAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> HeadDeathAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LeftArmDeathAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> RightArmDeathAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LeftLegDeathAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> RightLegDeathAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentDeathMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayingDeathMontage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartedPlayingDeath: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedAcceleration, meta=(AllowPrivateAccess=true))
    FRonReplicatedAcceleration ReplicatedAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlendRagdollNotifyActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootstepOcclusionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootstepFullOcclusionDepth;
    
    AReadyOrNotCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsingReviveSystem() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpdateOverridesFromCharacterLookOverrideDataTable(const FString& LookOverride);
    
    UFUNCTION(BlueprintCallable)
    void UnlockMovementAndActions();
    
    UFUNCTION(BlueprintCallable)
    void UnlockMovement();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAllActions();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAim();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestPhysicalAnimationComponent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopTPMontageFromTable(const FString& Animation, float BlendoutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopTPMontage(UAnimMontage* AnimMontage, float BlendoutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopTPAnimMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void StopFPAnimMontage(UAnimMontage* AnimMontage, float BlendoutTime);
    
    UFUNCTION(BlueprintCallable)
    void StartStun(EStunType StunType, AActor* StunCauser);
    
    UFUNCTION(BlueprintCallable)
    void StartPepperSprayed(const FHitResult& Hit, APepperspray* PeppersprayUsed);
    
    UFUNCTION(BlueprintCallable)
    void StartBeingTasered(float PingStunDuration, ATaser* WeaponUsed);
    
    UFUNCTION(BlueprintCallable)
    void SpawnFootstepEffect();
    
    UFUNCTION(BlueprintCallable)
    ACollectedEvidenceActor* SpawnEvidenceCollectionBag(FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBloodPool();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Yell();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ThrowArrestedTarget(AReadyOrNotCharacter* ArrestedCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartStun(EStunType StunType, AActor* StunCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReportToTOC(AActor* Actor, bool bPlayAnimation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReportTarget(AActor* Character);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayTOCConversation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayNonLocal3PMontage(UAnimMontage* NewMontage);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Play3PMontage(UAnimMontage* NewMontage, float StartTime, float PlayRate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MeleeInteract(UObject* Interactable, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Kill();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_KickQueuedDoor();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_KickFailQueuedDoor();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_KickBreakQueuedDoor();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interact_PrimaryUse(UObject* Interactable, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Interact(UObject* Interactable, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EndInteract_PrimaryUse(UObject* Interactable, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EndInteract(UObject* Interactable, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DropArrestedTarget(AReadyOrNotCharacter* ArrestedCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DoubleTapInteract(UObject* Interactable, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DoMelee();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CollectEvidenceActor(AEvidenceActor* InEvidenceActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CollectEvidence(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeTPMesh(USkeletalMesh* Body, USkeletalMesh* Face);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CarryArrestedTarget(AReadyOrNotCharacter* ArrestedCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ApplyPointDamage(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    void ResetPhysicsAsset();
    
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
    UFUNCTION(BlueprintCallable)
    void RagdollArrestTarget(AReadyOrNotCharacter* RagdollCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PlayTOCResponse(const FString& Line, bool bIsNetworked, ETOCPriority Priority, bool bCanPrefix, float Delay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlaySpecificDebugVoiceLine(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void PlayROEViolateTOCResponse();
    
    UFUNCTION(BlueprintCallable)
    void PlayRawVOWithCooldown(const FString& VoiceLine, float Cooldown, const FString& OverrideSpeakerName);
    
    UFUNCTION(BlueprintCallable)
    void PlayRawVO(const FString& VoiceLine, const FString& OverrideSpeakerName, bool bIgnoreIfAlreadyPlaying);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayRandomDebugVoiceLine(const FString& Line);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayRandomDebugConversation();
    
    UFUNCTION(BlueprintCallable)
    APairedInteractionDriver* PlayPairedInteraction(UInteractionsData* InteractionData, AActor* Driver, AActor* Slave, ABaseItem* OptionalItem);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayMontageFromTableWithIndex(const FString& Animation, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayMontageFromTable(const FString& Animation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Play3PMontageDeferred(UAnimMontage* Montage, const FString& AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void Play3PMontage(UAnimMontage* NewMontage, float StartTime, float PlayRate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Play1PMontageDeferred(UAnimMontage* Montage, const FString& AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void Play1PMontage(UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PickupEvidence(AActor* InEvidence);
    
    UFUNCTION(BlueprintCallable)
    bool OpenDoor(ADoor* Door, bool bOpenDoor);
    
    UFUNCTION(BlueprintCallable)
    void OnYellExecute();
    
    UFUNCTION(BlueprintCallable)
    void OnVoiceAudioStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Surrendered();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedAcceleration();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeshReplicated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRagdollArrestCharacterChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCarryCharacterChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlRotation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterLookOverride();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveRagdollPhysAsset();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnKilled(AReadyOrNotCharacter* InstigatorCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnItemHolstered(ABaseItem* HolsteredItem);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(ABaseItem* NewEquippedItem);
    
    UFUNCTION(BlueprintCallable)
    void OnIncapacitated(AReadyOrNotCharacter* InstigatorCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthDepleted();
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedWeaponMagCheck(ABaseMagazineWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedWeaponFire(ABaseMagazineWeapon* Weapon, bool bServer);
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedWeaponDryFire(ABaseMagazineWeapon* Weapon, bool bServer);
    
    UFUNCTION(BlueprintCallable)
    void OnDismembermentParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryThrowComplete_Slave(AActor* Slave);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryThrowComplete_Driver(AActor* Driver);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryThrowComplete(AActor* Driver, AActor* Slave);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryPickupComplete_Slave(AActor* Slave);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryPickupComplete_Driver(AActor* Driver);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryPickupComplete(AActor* Driver, AActor* Slave);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryDropComplete_Slave(AActor* Slave);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryDropComplete_Driver(AActor* Driver);
    
    UFUNCTION(BlueprintCallable)
    void OnCarryDropComplete(AActor* Driver, AActor* Slave);
    
    UFUNCTION(BlueprintCallable)
    void OnArteryBleedParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TakeDamage(float Damage, const FDamageEvent& DamageEvent, AReadyOrNotCharacter* InstigatorCharacter, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Stop3PMontage(UAnimMontage* Montage, float BlendoutTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Stop1PMontage(UAnimMontage* Montage, float BlendoutTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnDismembermentEffects(EGibAreas GibArea, FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnBloodEffects(FHitResult Hit, float WoundSize);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SpawnArterialBloodEffects(FHitResult HitResult, FName Artery);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SavePoseSnapshot(const FName& SnapshotName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayRawVO(const FString& SpecificFileName, const FString& OverrideSpeakerName, bool bIgnoreIfAlreadyPlaying);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayNonLocal3PMontage(UAnimMontage* NewMontage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayMeleeImpactEffects(UFMODEvent* ImpactSound, UParticleSystem* ImpactParticle);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayDeathAnimation(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Play3PMontage(UAnimMontage* NewMontage, float StartTime, float PlayRate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PauseAllAnims(bool bPaused);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnTargetReported();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnKilled(FName LastBoneHit, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnIncapacitated(FName LastBone);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnExplosiveVestDetonation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_InflictSuppression(float Strength, TSubclassOf<UMatineeCameraShake> CameraShake, bool bLessLethal);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EnableRagdollBlendIn();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_EnableRagdoll(float Duration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DisableRagdoll();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ChangeFaceEmotion(ECharacterEmotion NewEmotion, float OverrideTime, float Blend, float BlendDecay, int32 Priority);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AddMoveIgnoreActor(AReadyOrNotCharacter* MoveIgnoreCharacter, bool bAdd);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MeshMerge();
    
    UFUNCTION(BlueprintCallable)
    void LockMovementAndActions();
    
    UFUNCTION(BlueprintCallable)
    void LockMovement();
    
    UFUNCTION(BlueprintCallable)
    void LockAllActions();
    
    UFUNCTION(BlueprintCallable)
    void LockAim();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Kill();
    
    UFUNCTION(BlueprintCallable)
    void KickDoor(ADoor* Door);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpperBodyMontagePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnconsciousNotDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTableMontagePlayingWithTimeRemaining(const FString& Animation, float& TimeRemaining) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTableMontagePlaying(const FString& Animation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTableMontage(UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuspect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSurrenderedFor(const float Seconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSurrendered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSurrenderComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunnedWith(EStunType StunType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpeechTimerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReviveHealthDepleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelevant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdollBlending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingRootMotionFromMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingNonInterruptibleMontage(const FString& MontageNameTryingToBePlayed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingCarryAnims() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsOutside();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutlineEnabled(EActorOutlineType OutlineType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnSWATTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnSameTeam(AReadyOrNotCharacter* A, AReadyOrNotCharacter* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMontageSlotPlaying(FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLowHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingTableMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbHit(ELimbType Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLimbBroken(ELimbType Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInjured() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIncapacitated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHealthDepleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHalfHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGettingUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullBodyMontagePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDropping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDowned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadOrUnconscious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadNotUnconscious() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyTased() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyStung();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlySprayed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyGassed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyFlashed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCivilian() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarrying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCarried() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingThrown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingCarried() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingArrested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrestedOrSurrendered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrestedAndDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTableMontagePlaying(FString& OutMontage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyLimbHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimationBlocking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAffectedByDamageTypeClass(TSubclassOf<UDamageType> DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAffectedByDamageType(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveForMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Is3PMontagePlaying(const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable)
    void IncreaseHealth(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlyTakenStunDamage(const float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlyTakenDamage(const float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLineOfSightTo(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEverBeenStunned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenSpottedBySwat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenReported() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastStun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastBulletDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetTableMontageQueue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSpeechCharacterName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeakCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABaseItem*> GetRemovedItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetMontageFromTableWithIndex(const FString& Animation, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetMontageFromTable(const FString& Animation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMontageAnimCountFromTable(const FString& Animation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLimbHealthData GetLimbHealth(ELimbType Limb) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastTableMontagePlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerHealthStatus GetHealthStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterHealthComponent* GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void GetFMODFootstepParameters(int32& Stance, int32& Speed, int32& Surface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeltaRotationToCharacter(AReadyOrNotCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAnimWeaponType GetCurrentWeaponAnimType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStunTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStunDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReviveTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReviveHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPrimitiveComponent*> GetCollisionIgnoredComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetCollisionIgnoredActors() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ForceMeshUsingOverride(USkeletalMesh* InFPMesh, USkeletalMesh* InTPMesh, USkeletalMesh* InFaceMesh);
    
    UFUNCTION(BlueprintCallable)
    void EndStun(EStunType StunType);
    
    UFUNCTION(BlueprintCallable)
    void EndEvidenceCollection_COOP(UInteractableComponent* CollectionInteractableComp);
    
    UFUNCTION(BlueprintCallable)
    void EnableRagdoll(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void EnableOutline(EActorOutlineType OutlineType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesMontageFromTableExist(const FString& Animation) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void DisableOutline();
    
    UFUNCTION(BlueprintCallable)
    void DepleteHealth();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseHealth(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DamageHitHead(const FPointDamageEvent& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void CompleteEvidenceCollection_COOP(AActor* InEvidenceActor);
    
    UFUNCTION(BlueprintCallable)
    void CollectPendingEvidence();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetControlRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayScreenShake(TSubclassOf<UMatineeCameraShake> CameraShake);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_PlayMeleeImpactEffects();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayFMODEvent2D(UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Play1PMontage(UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnBoneDamaged(const FName& BoneHit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnBodyPartDamaged(bool bInHeadHit, bool bInBodyHit, bool bInLeftArmHit, bool bInRightArmHit, bool bInLeftLegHit, bool bInRightLegHit, bool bInLeftFootHit, bool bInRightFootHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanYell() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMelee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDropCharacter(AReadyOrNotCharacter* CharacterToDrop) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelArrest(AReadyOrNotCharacter* PlayerMakingArrest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCarryCharacter(AReadyOrNotCharacter* CharacterToPickup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBePickedUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanArrestRagdoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanArrest() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CacheIsOutside();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginEvidenceCollection_COOP(AActor* InEvidenceActor, UInteractableComponent* CollectionInteractableComp, float CollectionTime);
    
    UFUNCTION(BlueprintCallable)
    void ArrestComplete(AReadyOrNotCharacter* PlayerMakingArrest, AZipcuffs* Zipcuffs);
    
    UFUNCTION(BlueprintCallable)
    void Arrest(AReadyOrNotCharacter* PlayerMakingArrest);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamageToBone(float& Damage, const FName& HitBone, const FPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyBodyPartHit() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

