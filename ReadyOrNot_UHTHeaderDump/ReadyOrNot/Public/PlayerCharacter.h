#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReadyOrNotCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "Loadout.h"
#include "MovementSound.h"
#include "CameraFreelookSetting.h"
#include "EStunType.h"
#include "EFireMode.h"
#include "EItemCategory.h"
#include "EFootConstEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ETeamType.h"
#include "ELightRadialSelection.h"
#include "EMultitoolFunctions.h"
#include "EHolsterAnimationType.h"
#include "ELedgeWidth.h"
#include "ELedgeHeight.h"
#include "EItemSelectionInterfaceType.h"
#include "ESwatCommand.h"
#include "PlayerCharacter.generated.h"

class AActor;
class UFMODEvent;
class UFMODAudioComponent;
class USkeletalMesh;
class UFMODSnapshot;
class APawn;
class UAnimInstance;
class USkeletalMeshComponent;
class AController;
class UUserWidget;
class UMatineeCameraShake;
class ABaseArmour;
class ABaseItem;
class ABloodPool;
class UBleedComponent;
class UReadyOrNotGameplayEffect;
class UBasePlayerEffect;
class ABaseWeapon;
class ABaseMagazineWeapon;
class ABaseGrenade;
class ABuildingTrigger;
class ADoor;
class APickupActor;
class AEvidenceActor;
class UInteractableComponent;
class AImpactEffect;
class UHumanCharacterHUD_V2;
class ALadderSnapZone;
class UPlayerPostProcessing;
class APlayerCharacter;
class APlacedC2Explosive;
class APickupMagazineActor;
class APlayerViewActor;
class APlayerState;
class AReadyOrNotPlayerState;
class AReadyOrNotPlayerController;
class UScoringComponent;
class USwatCommandWidget;
class ATelescopicLadder;
class UTeamViewWidget;
class UMaterialInterface;
class UCameraComponent;
class UAnimMontage;
class UTexture2D;
class UMaterialInstanceDynamic;
class UParticleSystem;
class USoundCue;
class USpringArmComponent;

UCLASS(Blueprintable)
class READYORNOT_API APlayerCharacter : public AReadyOrNotCharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponMagCheckSignature, ABaseMagazineWeapon*, MagazineWeapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponFireModeChanged, EFireMode, newFireMode, EFireMode, LastFireMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponFired, ABaseWeapon*, Weapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamViewSet, AReadyOrNotCharacter*, NewViewCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSupression, float, Strength);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSecondarySightToggled, bool, bUsingSecondarySight, ABaseMagazineWeapon*, Weapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnPlayerTakeDamageDetails, bool, bWasHeadshot, float, DamageTaken, float, HealthRemaining, bool, bBlockedByArmour, bool, bBlockedByHelmet);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNightVisionGogglesToggled, bool, bNVGOn);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMelee);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemGroupSelection, int32, GroupIndex, int32, CategoryIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDefaultCommandIssued, APlayerCharacter*, Issuer, ESwatCommand, CommandIssued);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientPossessed, AController*, NewController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBulletImpact, float, DirectionForward, float, DirectionRight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachmentLightToggled);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ThirdPersonCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* ThirdPersonCameraArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshBody1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FirstPersonCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerPostProcessing* PlayerPostProcessingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FMODBreathingAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBleedComponent* BleedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoringComponent* ScoringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshReplicated, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Rep_FPBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LastSetMesh1PDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicWeaponFovMats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> MeshComps;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* LastKnownPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator ReplicatedFPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurInputVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PushOverlappingAI_Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInAISafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Body1PMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* CurrentViewCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDefaultCommandIssued OnDefaultCommandIssued;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamViewSet OnTeamViewSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTeamViewIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerViewActor* PlayerViewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerViewActor> PlayerViewActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TH_TeamViewInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamViewInputHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float surfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float roomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PVPSpeakerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwatCommandOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwatCommandWidget* SwatCommandWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInCommandMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInDevicesMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInTabMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeToGray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> HUD_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHumanCharacterHUD_V2* HumanCharacterWidget_V2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTeamViewWidget* TeamViewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UInteractableComponent* LastInteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingTrigger* LastBuildingEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingTrigger* InsideCurrentBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* lastHighlightedDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* lastHighlightedEvidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APickupMagazineActor* lastHighlightedPickupMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitWithFireSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PreviousPosessedCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientPossessed OnClientPossessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTakeDamageDetails OnPlayerTakenDamageDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* CriticalInjuredEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FlatlineEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FlatlineEventPvP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* HeadshotEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SAPIPlateHitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMirroring: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnInventoryItemsOnPossess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNightVisionGogglesToggled OnNightVisionGogglesToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator FreeLookCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YellOutEffectLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YelloutEffectRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowReadyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* LastPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Camera_Hit_Arm_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Camera_Hit_Arm_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Camera_Hit_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Camera_Hit_Leg_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Camera_Hit_Leg_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Camera_Hit_Head_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Camera_Hit_Head_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BodyImpactGroundSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Camera_RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* CurrentlyPiloting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* RevivingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    APlayerCharacter* BeingRevivedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RevivingOperatingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunMovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStunAimLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* LastEquippedItemBeforeStun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstPersonShakeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewBlendMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StartBoneBlend, meta=(AllowPrivateAccess=true))
    FName BlendedBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateAnimInstance, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> Replicated_3PAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateAnimInstance, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> Replicated_1PAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageQueue_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageQueue_1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldingUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookingAtEvidenceItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookingAtDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookingAtHuman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookingAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUserLowReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bForceLowReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowReadyTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AEvidenceActor* LastCollectedEvidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseArmour>, USkeletalMesh*> ArmorOverrideMapFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ChemlightClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsInTightSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBasePlayerEffect*> PlayerEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBasePlayerEffect* RecoilNerfEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideHeadwearPaperdollTexture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HeadwearPaperdollTexture_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HeadwearPaperdollTexture_Crouch_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadout DefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquipIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadout> RandomLoadoutSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> ForwardShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> RightShake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponFireModeChanged OnWeaponFireModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponFired OnWeaponFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* DroppedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABloodPool* BloodPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraRotationRateMeshSpaceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshspaceRecoilMovementMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshSpaceMovementMultiplier1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshspaceRecoilMovementMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWeaponDown3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsWearingHeavyArmour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnToWeaponDownDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bFireLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle FullAutoLoop_Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bServerIsBlockingAnimationPlaying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemGroupSelection OnItemGroupSelection_Pressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemGroupSelection OnItemGroupSelection_Held;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemGroupSelection OnItemGroupSelection_Released;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemGroupSelection OnItemGroupSelection_ItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttachmentLightToggled OnAttachmentLightToggled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMelee OnMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintFovFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintFovInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFovInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlacedC2Explosive* PendingC2Removal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* LastEquippedItemBeforeUsingChem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseGrenade* QuickThrowItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABaseItem* ItemBeforeQuickThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuickThrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearingScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadLoop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponMagCheckSignature OnWeaponMagCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardStrafeSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardStrafeSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideStrafeSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedPercentLossPerLegInjury;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedPercentLossWhenCarrying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeanLeftToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeanRightToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* LeanAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LeanAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstPersonCameraPos_CurrentFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstPersonCameraPos_LastFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanMovementValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFreelookSetting FreelookSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult VaultTraceForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult VaultTraceDownClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult VaultTraceDownMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult VaultTraceDownFar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLedgeFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVaulting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastPlayedVaultMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaningLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaningRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaningUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaningDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bFreeLeaning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsLeaning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RunSpeedUpdate, meta=(AllowPrivateAccess=true))
    float RunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier_AimFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier_Aim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier_Crouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier_Sprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier_SprintMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedModifier_SprintTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HitSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SlowDownSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WalkSpeedRampMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SprintSpeedRampUpMultiplier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentRunSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxRunSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxCrouchRunSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MinWalkSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LastSetRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeployableWalkSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHoldingFastWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bDisableSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float QuickLeanAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FreeLeanX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FreeLeanZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshspaceInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityCameraRollMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator PendingRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Last1PMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAnimMontage*> PlayedTableMontageMap1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateMontageSection, meta=(AllowPrivateAccess=true))
    FName Rep_MontageSection3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* JumpStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* JumpLandSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODSnapshot* InMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODSnapshot* OutMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutMixPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* InjuredScreamPVP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DeathScreamPVP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* InjuredScreamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementRequiredPerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRequiredPerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegativeVelocityRequiredForLandingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementSound> WalkSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AImpactEffect> WalkSounds_Environmental;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementSound> RunSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AImpactEffect> RunSounds_Environmental;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementSound> TurningSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementSound> LandingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitDirectionForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitDirectionRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BreathingBaseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExhaustionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExhaustionDissipationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExhaustionIncreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExhaustionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FearLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FearDissipationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FearSuppressionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FearThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSightTweakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SightTweakerWidgetTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* SightTweakerOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SightTweakerPosOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SightTweakerRotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnProtectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BaseAimRotation, meta=(AllowPrivateAccess=true))
    FRotator Server_BaseAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FreeAimCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsStopping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bNVGOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALadderSnapZone* LadderPlacementZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveForwardInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveRightInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftFootSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RighttFootSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootConstEnum LeftFootEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootConstEnum RightFootEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootAdjustOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedBubbleAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator CurrentMeshRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRotationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraBobTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WeaponBobTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WeaponBobRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CameraBobRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSecondarySightActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecondarySightToggled OnSecondarySightToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPelvisFPMovementBobActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PelvisFPMovementDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyTPMeshTransformsToFP;
    
    APlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateRotator(UPARAM(Ref) FRotator& Value, FRotator Target, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePictureInPictureVisibility();
    
    UFUNCTION(BlueprintCallable)
    void UpdateFloat(UPARAM(Ref) float& Value, float Target, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName UnavailableHolsterNameForType(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void TryPlayAISuspectResponseToReload();
    
    UFUNCTION(BlueprintCallable)
    void TryNextPlayerView_Released();
    
    UFUNCTION(BlueprintCallable)
    void ToggleUnderbarrelAttachment();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleThirdPerson();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSprint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSightTweaker();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSecondarySight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleNoTarget();
    
    UFUNCTION(BlueprintCallable)
    void ToggleNightvisionGoggles();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLowReady();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLeanRight();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLeanLeft();
    
    UFUNCTION(BlueprintCallable)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGodMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFreeThirdPerson();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFreeLook();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFreeLean();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugDamage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugBallistics();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCrouch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCrosshairOverlay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StunMe(float Duration, const FString& WithType);
    
    UFUNCTION(BlueprintCallable)
    void StopUsingMultitool(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void StopLockPicking(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void StopFreeLook();
    
    UFUNCTION(BlueprintCallable)
    void StopFPMontageFromTable(const FString& Animation, float BlendoutTime);
    
    UFUNCTION(BlueprintCallable)
    void StartUsingMultitool(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void StartQuickThrow();
    
    UFUNCTION(BlueprintCallable)
    void StartLockPicking(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void StartFreeLook();
    
    UFUNCTION(BlueprintCallable)
    void StartCinematicSequence();
    
    UFUNCTION(BlueprintCallable)
    void StartChemThrow();
    
    UFUNCTION(BlueprintCallable)
    void StartBleeding();
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponUp();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponDown();
    
    UFUNCTION(BlueprintCallable)
    void SetRunSpeed(float newRunSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRunSpeed(float newMaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetHumanCharacterWidget_V2(UHumanCharacterHUD_V2* NewHumanCharacterWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetFreelookYawMin(float NewYawMinValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFreelookYawMax(float NewYawMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFreelookPitchMin(float NewPitchMinValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFreelookPitchMax(float NewPitchMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForceLowReady(bool bShouldForceLowReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Walk();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_UpdateLean(float QuickLean, float newFreeLeanY, float NewFreeLeanZ);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_UpdateLastSetRunSpeed(float newRunSpeed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateIsBlockingAnimationPlaying(bool bIsBlockingAnimationPlaying);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_UpdateFreeLookCache(FRotator NewFreeLookCache);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_UpdateCameraRotationRate(FRotator NewCameraRotRate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateADS(bool bADS);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnlockMovementAndAim();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnlockMovementAndActions();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnlockMovement();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnlockAllActions();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnlockAim();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ToggleWalk();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ToggleNoTarget();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ToggleLightByClass(ELightRadialSelection LightType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ToggleGodMode();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Sprint();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnEjectedMagazine(FTransform SpawnTransform, ABaseMagazineWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetWalkSpeed(float newWalkSpeed, float newCrouchWalkSpeed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetUserLowReady(bool bShouldUserLowReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLowReady(bool bUp, bool bLowReady, bool bIsUserLowReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SecondaryUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetPlayerEffect(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RepNVGOn(bool bIsOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemovePendingC2();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RemoveLadder(ATelescopicLadder* Ladder);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PrimaryUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PrepareForHeal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayVaultAnimation(FVector ledge, FVector legeWallNormal, FVector ledgeTraceDown, float ledgeZ, ELedgeWidth ledgeWidth, ELedgeHeight ledgeHeight);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlaySound(USoundCue* Cue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayPVPSpeech(const FString& SpeechRowName, ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_Ping();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnReviveComplete(APlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnReloadComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_MarkWeaponCleaned(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LockMovementAndAim();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LockMovementAndActions();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LockMovement();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LockAllActions();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_LockAim();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_KillfeedMessage(APlayerCharacter* Killer, APlayerCharacter* Victim, ABaseItem* Weapon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_InstaStartFree(APlayerCharacter* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_InstaStartArrest(APlayerCharacter* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_InstantSurrenderTarget();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FreefeedMessage(APlayerCharacter* Freer, APlayerCharacter* Victim);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_FinishHealing();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_FastWalk();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipZipcuffs();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipTablet();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipStinger();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipSecondaryItem();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipPrimaryItem(bool bForce);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipPepperSpray();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipNinebang();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipMultitool(EMultitoolFunctions MultitoolFunction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipMirrorgun();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipLastItem(EHolsterAnimationType AnimationType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipGrenade_4();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipGrenade_3();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipGrenade_2();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipGrenade_1();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipFlashbang();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipDoorjam();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipDevice_4();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipDevice_3();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipDevice_2();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipDevice_1();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipCSGas();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipC2();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EquipBreachingShotgun();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EndSecondaryUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EndPrimaryUse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EndFastWalk();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeMesh(USkeletalMesh* FPMesh, USkeletalMesh* TPMesh, USkeletalMesh* TPHeadMesh);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeFPMesh(USkeletalMesh* NewFPMesh);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ArrestfeedMessage(APlayerCharacter* Arrester, APlayerCharacter* Victim);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ApplyPlayerEffectFor(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, float Seconds, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ApplyPlayerEffect(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bResettable, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ActorPickedUp(APickupActor* PickupActor);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryUse();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetLODS_Player();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetLODs_Items();
    
    UFUNCTION(BlueprintCallable)
    void ReplenishAllMagazineAmmo();
    
    UFUNCTION(BlueprintCallable)
    void ReplenishAllGrenadeAmmo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveItemFromWeaponWheel(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void ReloadOrMagCheck_Released();
    
    UFUNCTION(BlueprintCallable)
    void ReloadOrMagCheck();
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintItemAttachmentListToLog();
    
    UFUNCTION(BlueprintCallable)
    void PrimaryUseComplete();
    
    UFUNCTION(BlueprintCallable)
    void PrimaryUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVaultAnimation(FVector ledge, FVector ledgeWallNormal, FVector ledgeTraceDown, float ledgeZ, ELedgeWidth ledgeWidth, ELedgeHeight ledgeHeight);
    
    UFUNCTION(BlueprintCallable)
    void PlayerStopJumping();
    
    UFUNCTION(BlueprintCallable)
    void PlayerJump();
    
    UFUNCTION(BlueprintCallable)
    void Ping();
    
    UFUNCTION(BlueprintCallable)
    void OpenTablet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTeamChatPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSupression(float Strength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectDeviceReleased(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectDevicePressed(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateMontageSection();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateAnimInstance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StartBoneBlend();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RunSpeedUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BaseAimRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerEffectExpired(TSubclassOf<UReadyOrNotGameplayEffect> InPlayerEffectClass);
    
    UFUNCTION(BlueprintCallable)
    void OnLowReadyButtonUp();
    
    UFUNCTION(BlueprintCallable)
    void OnLowReadyButtonDown();
    
    UFUNCTION(BlueprintCallable)
    void OnLowHealth(float CurrentHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeanStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeanEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKilledOrGoneUnconciousBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpLand();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemSelectionStyleChanged(EItemSelectionInterfaceType NewItemSelectionInterface);
    
    UFUNCTION(BlueprintCallable)
    void OnFullHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChatPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBulletImpact(float DirectionForward, float DirectionRight);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ToggleLaserLight();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ShowThirdPerson();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlaySound(USoundCue* Cue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayPVPSpeech(const FString& SpeechRowName, ETeamType TeamType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayInjuredScream();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PlayArmourRelatedEffects(ABaseArmour* Armour, UParticleSystem* Particle, const FTransform& AtTransform);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_HideThirdPerson();
    
    UFUNCTION(BlueprintCallable)
    void Melee();
    
    UFUNCTION(BlueprintCallable)
    void MagCheck();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void LocalKillFeed(APlayerCharacter* Killer, APlayerCharacter* Victim, ABaseItem* Weapon);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void LocalFreeFeed(APlayerCharacter* Freer, APlayerCharacter* Victim);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void LocalDeathFeed(AReadyOrNotPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void LocalArrestFeed(APlayerCharacter* Arrester, APlayerCharacter* Victim);
    
    UFUNCTION(BlueprintCallable)
    void LeanUp(float Val);
    
    UFUNCTION(BlueprintCallable)
    void LeanRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void Lean(float Val);
    
    UFUNCTION(BlueprintCallable)
    void JamDoor(ADoor* Door);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPointPartiallyReachable(FVector Position);
    
    UFUNCTION(BlueprintCallable)
    bool IsPointFullyReachable(FVector Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMagCheckPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTightSpaces();
    
    UFUNCTION(BlueprintCallable)
    bool IsInLightSource(int32& VisibleLightSources, float MinimumLightLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCinematicAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldingSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreelooking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFireModeSelectPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Is1PMontagePlaying(UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable)
    void IncrementalUse(float Val);
    
    UFUNCTION(BlueprintCallable)
    void HidePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWedge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOptiwand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNVG();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLockpick();
    
    UFUNCTION(BlueprintCallable)
    bool HasLineOfSightToAnyPlayerControlledCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGrenadesInInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasChemlightsInInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasC2();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBSG();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetViewPitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuickthrowGrenadeAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    float GetLeanAmount(FVector Component, float& InOutPendingVal, float MaxValue);
    
    UFUNCTION(BlueprintCallable)
    FHitResult GetHitFromCamera(float MaxDistance, TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels, FRotator OffsetRotation, FVector OffsetVector, bool bDrawTrace);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFootConstant(EFootConstEnum FootConst);
    
    UFUNCTION(BlueprintCallable)
    EFireMode GetFiringMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCameraFreelookSetting GetCurrentFreelookSettings() const;
    
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetClosestPlayerCharacter(ETeamType Team, float& OutClosestDistance, bool bExcludeArrested);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChemlightAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AReadyOrNotCharacter*> GetAvaliablePlayersForTeamView(const bool bIncludeDeadViews) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<APlayerCharacter*> GetAllOtherPlayerCharacters(ETeamType Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimOffsets() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceMaxLODs_Player();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceMaxLODs_Items();
    
    UFUNCTION(BlueprintCallable)
    void ForceFirstDraw();
    
    UFUNCTION(BlueprintCallable)
    void FireLaserEyes();
    
    UFUNCTION(BlueprintCallable)
    void FadeToBlackEnable();
    
    UFUNCTION(BlueprintCallable)
    void FadeToBlackDisable();
    
    UFUNCTION(BlueprintCallable)
    void EquipZipcuffs();
    
    UFUNCTION(BlueprintCallable)
    void EquipTacticalDevice();
    
    UFUNCTION(BlueprintCallable)
    void EquipTablet();
    
    UFUNCTION(BlueprintCallable)
    void EquipStinger();
    
    UFUNCTION(BlueprintCallable)
    void EquipSecondaryItem();
    
    UFUNCTION(BlueprintCallable)
    void EquipPrimaryItem();
    
    UFUNCTION(BlueprintCallable)
    void EquipPepperspray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EquippedWeaponHasSecondarySight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EquippedWeaponHasLightAttachment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EquippedWeaponHasLaserAttachment() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipNinebang();
    
    UFUNCTION(BlueprintCallable)
    void EquipMultitool();
    
    UFUNCTION(BlueprintCallable)
    void EquipMirrorgun();
    
    UFUNCTION(BlueprintCallable)
    void EquipLongTactical();
    
    UFUNCTION(BlueprintCallable)
    ABaseItem* EquipItemOfType(EItemCategory ItemCategory);
    
    UFUNCTION(BlueprintCallable)
    ABaseItem* EquipItemFromGroup_Name(FName GroupName, int32 ItemCategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    ABaseItem* EquipItemFromGroup_Index(int32 GroupIndex, int32 ItemCategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    void EquipGrenade_4();
    
    UFUNCTION(BlueprintCallable)
    void EquipGrenade_3();
    
    UFUNCTION(BlueprintCallable)
    void EquipGrenade_2();
    
    UFUNCTION(BlueprintCallable)
    void EquipGrenade_1();
    
    UFUNCTION(BlueprintCallable)
    void EquipGrenade();
    
    UFUNCTION(BlueprintCallable)
    void EquipFlashbang();
    
    UFUNCTION(BlueprintCallable)
    void EquipDoorJam();
    
    UFUNCTION(BlueprintCallable)
    void EquipDevice_4();
    
    UFUNCTION(BlueprintCallable)
    void EquipDevice_3();
    
    UFUNCTION(BlueprintCallable)
    void EquipDevice_2();
    
    UFUNCTION(BlueprintCallable)
    void EquipDevice_1();
    
    UFUNCTION(BlueprintCallable)
    void EquipCSGas();
    
    UFUNCTION(BlueprintCallable)
    void EquipC2();
    
    UFUNCTION(BlueprintCallable)
    void EquipBreachingShotgun();
    
    UFUNCTION(BlueprintCallable)
    void EquipBatteringRam();
    
    UFUNCTION(BlueprintCallable)
    void EndSecondaryUse();
    
    UFUNCTION(BlueprintCallable)
    void EndQuickThrow();
    
    UFUNCTION(BlueprintCallable)
    void EndCinematicSequence();
    
    UFUNCTION(BlueprintCallable)
    void EndChemThrow();
    
    UFUNCTION(BlueprintCallable)
    void EnableNightVisionGoggles();
    
    UFUNCTION(BlueprintCallable)
    void Drone_Yaw(float Val);
    
    UFUNCTION(BlueprintCallable)
    void Drone_Throttle(float Val);
    
    UFUNCTION(BlueprintCallable)
    void Drone_Steady();
    
    UFUNCTION(BlueprintCallable)
    void Drone_Right(float Val);
    
    UFUNCTION(BlueprintCallable)
    void Drone_MoveForward(float Val);
    
    UFUNCTION(BlueprintCallable)
    void DrawPermanentMarker();
    
    UFUNCTION(BlueprintCallable)
    void DisableNightVisionGoggles();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyNonDevelopmentComponents();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDetachAllComponentsAndSubComponents();
    
    UFUNCTION(BlueprintCallable)
    void CreateTeamViewWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateHUDWidget();
    
    UFUNCTION(BlueprintCallable)
    void CloseTablet();
    
    UFUNCTION(BlueprintCallable)
    void ClosePlayerView();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateMagBeforeReload();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartStun(EStunType StunType, AActor* StunCauser, FVector DamageCauserLocation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowMagDiscarded();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowMagCheck();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowMagAfterReload();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowFireModeChanged(EFireMode newFireMode);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_SetWalkSpeed(float newWalkSpeed, float newCrouchWalkSpeed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResetPlayerEffect(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PossessedBy(AController* NewController);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_PlayPostProcessEffect(const FName& InPostProcessEffect, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnTakenDamageDetail(bool bWasHeadshot, bool bTorsoShot, bool bLeftArm, bool bLeftLeg, bool bRightArm, bool bRightLeg, float DamageTaken, float RemainingHealth, bool bBlockedByArmour, bool bBlockedByHelmet);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnPlayerDamage(bool bTakenDamage, float InDamage, AReadyOrNotCharacter* InstigatorCharacter, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnLimbBroken();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_HideMagCheck();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CreateWidget(TSubclassOf<UUserWidget> Widget);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_BulletHit(FHitResult BulletImpact);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AutoSelectNewQuickthrowItem(ABaseGrenade* CallingGrenade);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ApplyPlayerEffect(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bResettable, bool bMulticast);
    
    UFUNCTION(BlueprintCallable)
    void CheckSprintingGroup();
    
    UFUNCTION(BlueprintCallable)
    void CaptureFPCamera(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanUseIncrementalSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanQuickThrow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPingActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    bool CalculateStopLocation(FVector& OutStopLocation, const FVector& CurrentLocation, const FVector& Velocity, const FVector& Acceleration, float Friction, float BrakingDeceleration, float TimeStep, int32 MaxSimulationIterations);
    
    UFUNCTION(BlueprintCallable)
    void CalculateLeanMovement(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void C2Door(ADoor* Door);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPlayerEffectFor_Class(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPlayerEffectFor(UBasePlayerEffect* InPlayerEffect, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPlayerEffect_Class(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bResettable);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPlayerEffect(UBasePlayerEffect* InPlayerEffect, bool bResettable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdjustScopeOffsetVertical(float NewOffset);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdjustScopeOffsetHorizontal(float NewOffset);
    
};

