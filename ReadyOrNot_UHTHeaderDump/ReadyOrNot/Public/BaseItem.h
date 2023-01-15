#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BecomesWet.h"
#include "CanIssueCommandOn.h"
#include "GetFriendlyName.h"
#include "GatherDebugInterface.h"
#include "PingInterface.h"
#include "ScoringInterface.h"
#include "UseabilityInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ItemVisualData.h"
#include "WeightStunMultiplier.h"
#include "WeaponAnim.h"
#include "EStunType.h"
#include "EDLC.h"
#include "EItemClass.h"
#include "EWeaponType.h"
#include "EMotionBlockType.h"
#include "EItemAttachment.h"
#include "EBlockingAnimationExclusion.h"
#include "EItemCategory.h"
#include "EActorOutlineType.h"
#include "BaseItem.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class UFMODEvent;
class UFMODAudioComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class AController;
class UMatineeCameraShake;
class UDamageType;
class AReadyOrNotCharacter;
class UBoxComponent;
class UInteractableComponent;
class UReadyOrNotWeaponAnimData;
class UScoringComponent;
class UWeaponSound;
class AThrownEvidenceActor;
class AThrownItem;
class UAnimMontage;
class UTexture2D;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ABaseItem : public AActor, public IBecomesWet, public IGetFriendlyName, public ICanIssueCommandOn, public IUseabilityInterface, public IPingInterface, public IGatherDebugInterface, public IScoringInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemAttachmentsChanged, EItemAttachment, AttachmentChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEvidenceCollected);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* FMODAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoringComponent* ScoringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTickWhenNotEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* PhysicsImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThrownItem> ThrownItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisallowKicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookupTableIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Rep_CustomItemMeshFromAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTickAnimBPWhenNotEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector Server_ReplicatedPhysicsLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OwnerName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDLC> LockedToDLC;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemClass ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSelectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* ItemSelectionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemVisualData Visuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HUDOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpToTargetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowMasterPoseTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetWorldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetWorldScaleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStartAsEvidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsEvidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsClearable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasBeenCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> BlockAnyDamageFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> BlockDirectHitsFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTaserDamageBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UDamageType>, float> MultiplyStunDamageFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UDamageType>, FWeightStunMultiplier> MultiplyStunDamageByWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Dynamic1PMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicWeaponFovMats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> FP_SkinMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> TP_SkinMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_MasterPoseComponent, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MasterPoseRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowStaticMeshOnBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponWheelCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bForceInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcedInvisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanReloadSameMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastReloadAnim_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickLeanMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeLeanMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEvidenceCollected OnEvidenceCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableMeshspaceMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshspaceTransform_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshspaceTransform_Aiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshspaceTransform_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaDragAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaDragAimLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaDragStrafeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaDragStrafeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovementSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MovementSpeedRotationScalePitchYawRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshSpaceAimInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshspaceTransform_OnDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnDrawMeshspaceInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MeshspaceTransform_OnHolster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnHolsterMeshspaceInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName BodySocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName HandsSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 AnimationIndex1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 AnimationIndex3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeployable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEquipToHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemCategory> ItemCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Holster_PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Draw_PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> Reload_CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> ReloadEmpty_CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> DrawCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> HolsterCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LastFPAnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LastTPAnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AThrownEvidenceActor* ThrownEvidenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBeingCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentCollectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxCollectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* CollectingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDropping, meta=(AllowPrivateAccess=true))
    bool bDropping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAnimInstanceWhenNotEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UReadyOrNotWeaponAnimData* AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotWeaponAnimData* DefaultAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotWeaponAnimData* GripAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotWeaponAnimData* ShieldRaisedAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotWeaponAnimData* ShieldLoweredAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimLimitADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LazySpringStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LazySpringStrengthADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimInterpADSModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimInterpHipModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimSlowMoveModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreeAimSlowMoveTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> MeleeUserCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bADSCountsAsAbuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HesitationBoostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAimingDownSights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLowReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushbackRange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowReadyRange;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowReadyRangeSightsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowReadyPitchThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponSound* SoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideBreathingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BreathingAudioOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEasyPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bNoPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScriptedFPHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMotionBlockType ActiveMotionBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOneHandedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FP_ADS_Motion_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyLookupData: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobScaleH;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobScaleV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobSpeedScaleH;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobSpeedScaleV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobAmplitudeBaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobIntensitySprintScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobAmplitudeWalkScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBobAmplitudeSprintScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobScaleH;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobScaleV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobScaleInjured;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobSpeedScaleH;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobSpeedScaleV;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobSpeedScaleInjured;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobCrouchModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobADSModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobRotPitchScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobRotRollScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobRotPitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobRotRollSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobRotCrouchModifier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBobRotADSModifier;
    
    ABaseItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StunTick(EStunType StunType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StunnedWhileEquipped();
    
    UFUNCTION(BlueprintCallable)
    void StopTPMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void StopFPMontage(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHideInPictureInPictureScopes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBaseEvents();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetMasterPoseComponent(USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayTPMontage(UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ApplyPointDamage(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    void PlayWeaponCleaning();
    
    UFUNCTION(BlueprintCallable)
    void PlayTPMontage(UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayFPMontage(UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayFMODAudio(UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable)
    bool PlayDraw(bool bDrawFirst);
    
    UFUNCTION(BlueprintCallable)
    void PlayDoorPushAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayButtonPushAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MasterPoseComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDropping();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachmentRep();
    
    UFUNCTION(BlueprintCallable)
    void OnPhysicsImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOwnerPossessed();
    
    UFUNCTION(BlueprintCallable)
    void OnMeshComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemUsed();
    
    UFUNCTION(BlueprintCallable)
    void OnItemUseComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnItemPrimaryUseEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnItemPrimaryUse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemEndUse();
    
    UFUNCTION(BlueprintCallable)
    void NextFireMode();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayTPMontage(UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_MarkAsEvidence(bool bMarkAsEvidence);
    
    UFUNCTION(BlueprintCallable)
    void MarkAsEvidence(bool bMarkAsEvidence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LastStunTick(EStunType StunType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingStunnedEndAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingStunnedAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsMontagePlaying(UAnimMontage* Montage, bool bIncludeFP, bool bIncludeTP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorPushAnimationPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDepleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyReloading() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCollidesWhileNotEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsButtonPushAnimationPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlockingAnimationPlaying(TArray<EBlockingAnimationExclusion> Exclusions) const;
    
    UFUNCTION(BlueprintCallable)
    void InterpToTargetScale(FVector NewScale, float InterpSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDoorPushAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasButtonPushAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLowReadyRange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetItemMesh() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetEquipSocket();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCurrentTPMontage();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetCurrentFPMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndStunWhileEquipped();
    
    UFUNCTION(BlueprintCallable)
    void EnableOutline(EActorOutlineType OutlineType);
    
    UFUNCTION(BlueprintCallable)
    void DisableOutline();
    
    UFUNCTION(BlueprintCallable)
    void DisableOrEnableAnimation();
    
    UFUNCTION(BlueprintCallable)
    void DetachStatic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsItemCategory(EItemCategory TestCategory) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayDraw(bool bDrawFirst);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopItemAnimation(const FWeaponAnim& InWeaponAnim, bool bOnlyTP);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetFPModelVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayItemAnimation(const FWeaponAnim& InWeaponAnim, bool bRestartIfAlreadyPlaying, bool bOnlyLocal, bool bOnlyTP);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayFPMontage(UAnimMontage* NewMontage, float PlayRate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnItemPickedUp(AActor* NewOwner, bool bEquipped);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanShowActionSlot1(AReadyOrNotCharacter* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquip(AReadyOrNotCharacter* ToCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelCurrentReloadAction(bool bCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AttachmentRep();
    
    UFUNCTION(BlueprintCallable)
    void AttachStatic();
    
    UFUNCTION(BlueprintCallable)
    void ApplyLookupData(bool bUpdateDefaultObject);
    
    
    // Fix for true pure virtual functions not being implemented
};

