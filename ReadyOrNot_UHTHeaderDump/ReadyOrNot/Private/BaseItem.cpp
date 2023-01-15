#include "BaseItem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "InteractableComponent.h"
#include "ScoringComponent.h"

class AActor;
class UPrimitiveComponent;
class UFMODEvent;
class AController;
class UDamageType;
class AReadyOrNotCharacter;
class UAnimMontage;

void ABaseItem::StunTick_Implementation(EStunType StunType) {
}

void ABaseItem::StunnedWhileEquipped_Implementation() {
}

void ABaseItem::StopTPMontage(UAnimMontage* AnimMontage) {
}

void ABaseItem::StopFPMontage(UAnimMontage* AnimMontage) {
}

bool ABaseItem::ShouldHideInPictureInPictureScopes() {
    return false;
}


void ABaseItem::Server_SetMasterPoseComponent_Implementation(USkeletalMeshComponent* Mesh) {
}
bool ABaseItem::Server_SetMasterPoseComponent_Validate(USkeletalMeshComponent* Mesh) {
    return true;
}

void ABaseItem::Server_PlayTPMontage_Implementation(UAnimMontage* NewMontage, float PlayRate) {
}
bool ABaseItem::Server_PlayTPMontage_Validate(UAnimMontage* NewMontage, float PlayRate) {
    return true;
}

void ABaseItem::Server_ApplyPointDamage_Implementation(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
}
bool ABaseItem::Server_ApplyPointDamage_Validate(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
    return true;
}

void ABaseItem::PlayWeaponCleaning() {
}

void ABaseItem::PlayTPMontage(UAnimMontage* NewMontage, float PlayRate) {
}

void ABaseItem::PlayFPMontage(UAnimMontage* NewMontage, float PlayRate) {
}

void ABaseItem::PlayFMODAudio(UFMODEvent* Event) {
}

bool ABaseItem::PlayDraw(bool bDrawFirst) {
    return false;
}

void ABaseItem::PlayDoorPushAnimation() {
}

void ABaseItem::PlayButtonPushAnimation() {
}

void ABaseItem::OnRep_MasterPoseComponent() {
}

void ABaseItem::OnRep_IsDropping() {
}

void ABaseItem::OnRep_AttachmentRep() {
}

void ABaseItem::OnPhysicsImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ABaseItem::OnOwnerPossessed_Implementation() {
}

void ABaseItem::OnMeshComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void ABaseItem::OnItemUseComplete() {
}

void ABaseItem::OnItemPrimaryUseEnd() {
}

void ABaseItem::OnItemPrimaryUse() {
}


void ABaseItem::NextFireMode() {
}

void ABaseItem::Multicast_PlayTPMontage_Implementation(UAnimMontage* NewMontage, float PlayRate) {
}

void ABaseItem::Multicast_MarkAsEvidence_Implementation(bool bMarkAsEvidence) {
}

void ABaseItem::MarkAsEvidence(bool bMarkAsEvidence) {
}

void ABaseItem::LastStunTick_Implementation(EStunType StunType) {
}

bool ABaseItem::IsPlayingStunnedEndAnimation() {
    return false;
}

bool ABaseItem::IsPlayingStunnedAnimation() {
    return false;
}

bool ABaseItem::IsMontagePlaying(UAnimMontage* Montage, bool bIncludeFP, bool bIncludeTP) {
    return false;
}

bool ABaseItem::IsLocallyControlled() {
    return false;
}

bool ABaseItem::IsEquipped() const {
    return false;
}

bool ABaseItem::IsDoorPushAnimationPlaying() const {
    return false;
}

bool ABaseItem::IsDepleted() const {
    return false;
}

bool ABaseItem::IsCurrentlyReloading() const {
    return false;
}

bool ABaseItem::IsCollidesWhileNotEquipped() const {
    return false;
}

bool ABaseItem::IsButtonPushAnimationPlaying() const {
    return false;
}

bool ABaseItem::IsBlockingAnimationPlaying(TArray<EBlockingAnimationExclusion> Exclusions) const {
    return false;
}

void ABaseItem::InterpToTargetScale(FVector NewScale, float InterpSpeed) {
}

bool ABaseItem::HasDoorPushAnimation() const {
    return false;
}

bool ABaseItem::HasButtonPushAnimation() const {
    return false;
}

float ABaseItem::GetWeight() {
    return 0.0f;
}

float ABaseItem::GetLowReadyRange() {
    return 0.0f;
}

USkeletalMeshComponent* ABaseItem::GetItemMesh() const {
    return NULL;
}

FName ABaseItem::GetEquipSocket() {
    return NAME_None;
}

UAnimMontage* ABaseItem::GetCurrentTPMontage() {
    return NULL;
}

UAnimMontage* ABaseItem::GetCurrentFPMontage() {
    return NULL;
}

void ABaseItem::EndStunWhileEquipped_Implementation() {
}

void ABaseItem::EnableOutline(EActorOutlineType OutlineType) {
}

void ABaseItem::DisableOutline() {
}

void ABaseItem::DisableOrEnableAnimation() {
}

void ABaseItem::DetachStatic() {
}

bool ABaseItem::ContainsItemCategory(EItemCategory TestCategory) const {
    return false;
}

void ABaseItem::ClientPlayDraw_Implementation(bool bDrawFirst) {
}

void ABaseItem::Client_StopItemAnimation_Implementation(const FWeaponAnim& InWeaponAnim, bool bOnlyTP) {
}

void ABaseItem::Client_SetFPModelVisibility_Implementation(bool bVisibility) {
}

void ABaseItem::Client_PlayItemAnimation_Implementation(const FWeaponAnim& InWeaponAnim, bool bRestartIfAlreadyPlaying, bool bOnlyLocal, bool bOnlyTP) {
}

void ABaseItem::Client_PlayFPMontage_Implementation(UAnimMontage* NewMontage, float PlayRate) {
}

void ABaseItem::Client_OnItemPickedUp_Implementation(AActor* NewOwner, bool bEquipped) {
}

bool ABaseItem::CanShowActionSlot1_Implementation(AReadyOrNotCharacter* PC) {
    return false;
}

bool ABaseItem::CanEquip(AReadyOrNotCharacter* ToCharacter) const {
    return false;
}

void ABaseItem::CancelCurrentReloadAction_Implementation(bool bCancel) {
}


void ABaseItem::AttachStatic() {
}

void ABaseItem::ApplyLookupData(bool bUpdateDefaultObject) {
}

void ABaseItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseItem, Rep_CustomItemMeshFromAttachment);
    DOREPLIFETIME(ABaseItem, bInInventory);
    DOREPLIFETIME(ABaseItem, Server_ReplicatedPhysicsLocation);
    DOREPLIFETIME(ABaseItem, TargetWorldScale);
    DOREPLIFETIME(ABaseItem, TargetWorldScaleInterpSpeed);
    DOREPLIFETIME(ABaseItem, bStartAsEvidence);
    DOREPLIFETIME(ABaseItem, bIsEvidence);
    DOREPLIFETIME(ABaseItem, bIsClearable);
    DOREPLIFETIME(ABaseItem, bHasBeenCleared);
    DOREPLIFETIME(ABaseItem, MasterPoseRep);
    DOREPLIFETIME(ABaseItem, bForceInvisible);
    DOREPLIFETIME(ABaseItem, BodySocket);
    DOREPLIFETIME(ABaseItem, HandsSocket);
    DOREPLIFETIME(ABaseItem, AnimationIndex1P);
    DOREPLIFETIME(ABaseItem, AnimationIndex3P);
    DOREPLIFETIME(ABaseItem, ThrownEvidenceActor);
    DOREPLIFETIME(ABaseItem, bIsBeingCollected);
    DOREPLIFETIME(ABaseItem, CurrentCollectionTime);
    DOREPLIFETIME(ABaseItem, MaxCollectionTime);
    DOREPLIFETIME(ABaseItem, CollectingCharacter);
    DOREPLIFETIME(ABaseItem, bDropping);
    DOREPLIFETIME(ABaseItem, AnimationData);
    DOREPLIFETIME(ABaseItem, bEasyPickup);
    DOREPLIFETIME(ABaseItem, bNoPickup);
}

ABaseItem::ABaseItem() {
    this->FMODAudioComp = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODAudioPlayer"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->ScoringComponent = CreateDefaultSubobject<UScoringComponent>(TEXT("Scoring Component"));
    this->bDisableTickWhenNotEquipped = true;
    this->PhysicsImpact = NULL;
    this->ThrownItemClass = NULL;
    this->ItemWeight = 0.00f;
    this->bDisallowKicking = false;
    this->LookupTableIdx = TEXT("Default");
    this->Rep_CustomItemMeshFromAttachment = NULL;
    this->bInInventory = false;
    this->bShouldTickAnimBPWhenNotEquipped = false;
    this->ItemClass = EItemClass::IC_NoClass;
    this->ItemSelectionSound = NULL;
    this->Tooltip = NULL;
    this->HUDOutline = NULL;
    this->bInterpToTargetScale = false;
    this->bFollowMasterPoseTP = false;
    this->TargetWorldScaleInterpSpeed = 0.00f;
    this->bStartAsEvidence = false;
    this->bIsEvidence = false;
    this->bIsClearable = false;
    this->bHasBeenCleared = false;
    this->bTaserDamageBlocked = false;
    this->SceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
    this->InteractionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Interaction Box"));
    this->MasterPoseRep = NULL;
    this->bShowStaticMeshOnBody = true;
    this->bForceInvisible = false;
    this->bForcedInvisible = false;
    this->bCanReloadSameMagazine = false;
    this->LastReloadAnim_3P = NULL;
    this->MovementSpeedMultiplier = 1.00f;
    this->QuickLeanMultiplier = 300.00f;
    this->FreeLeanMultiplier = 150.00f;
    this->WeaponType = EWeaponType::WT_Special;
    this->bDisableMeshspaceMovement = false;
    this->InertiaDragAimRotation = 1.00f;
    this->InertiaDragAimLocation = 1.00f;
    this->InertiaDragStrafeRotation = 0.50f;
    this->InertiaDragStrafeLocation = 0.50f;
    this->MeshSpaceAimInterp = 6.00f;
    this->OnDrawMeshspaceInterp = 10.00f;
    this->OnHolsterMeshspaceInterp = 10.00f;
    this->AnimationIndex1P = 0;
    this->AnimationIndex3P = 0;
    this->bDeployable = false;
    this->bShouldEquipToHands = false;
    this->Holster_PlayRate = 1.00f;
    this->Draw_PlayRate = 1.00f;
    this->Reload_CameraShake = NULL;
    this->ReloadEmpty_CameraShake = NULL;
    this->DrawCameraShake = NULL;
    this->HolsterCameraShake = NULL;
    this->LastFPAnimInstanceClass = NULL;
    this->LastTPAnimInstanceClass = NULL;
    this->ThrownEvidenceActor = NULL;
    this->bIsBeingCollected = false;
    this->CurrentCollectionTime = 0.00f;
    this->MaxCollectionTime = 2.00f;
    this->CollectingCharacter = NULL;
    this->bDropping = false;
    this->bDisableAnimInstanceWhenNotEquipped = true;
    this->AnimationData = NULL;
    this->DefaultAnimationData = NULL;
    this->GripAnimationData = NULL;
    this->ShieldRaisedAnimationData = NULL;
    this->ShieldLoweredAnimationData = NULL;
    this->FreeAimLimit = 4.00f;
    this->FreeAimLimitADS = 4.00f;
    this->LazySpringStrength = 1.00f;
    this->LazySpringStrengthADS = 1.00f;
    this->FreeAimInterpSpeed = 0.00f;
    this->FreeAimInterpADSModifier = 0.00f;
    this->FreeAimInterpHipModifier = 0.00f;
    this->FreeAimSlowMoveModifier = 0.00f;
    this->FreeAimSlowMoveTolerance = 0.00f;
    this->MeleeUserCameraShake = NULL;
    this->bADSCountsAsAbuse = false;
    this->HesitationBoostMultiplier = 1.00f;
    this->bIsAimingDownSights = false;
    this->bUseLowReady = true;
    this->PushbackRange = 100.00f;
    this->LowReadyRange = 80.00f;
    this->LowReadyRangeSightsModifier = 1.15f;
    this->LowReadyPitchThreshold = 0.00f;
    this->SoundData = NULL;
    this->bOverrideBreathingEvent = false;
    this->BreathingAudioOverride = NULL;
    this->bEasyPickup = false;
    this->bNoPickup = false;
    this->bScriptedFPHidden = false;
    this->ActiveMotionBlock = EMotionBlockType::MB_Rifle;
    this->bIsOneHandedItem = false;
    this->FP_ADS_Motion_Weight = 0.15f;
    this->bApplyLookupData = false;
    this->CameraBobScaleH = 0.00f;
    this->CameraBobScaleV = 0.00f;
    this->CameraBobSpeedScaleH = 0.00f;
    this->CameraBobSpeedScaleV = 0.00f;
    this->CameraBobAmplitudeBaseSpeed = 0.00f;
    this->CameraBobIntensitySprintScale = 0.00f;
    this->CameraBobAmplitudeWalkScale = 0.00f;
    this->CameraBobAmplitudeSprintScale = 0.00f;
    this->WeaponBobScaleH = 0.00f;
    this->WeaponBobScaleV = 0.00f;
    this->WeaponBobScaleInjured = 0.00f;
    this->WeaponBobSpeedScaleH = 0.00f;
    this->WeaponBobSpeedScaleV = 0.00f;
    this->WeaponBobSpeedScaleInjured = 0.00f;
    this->WeaponBobCrouchModifier = 0.00f;
    this->WeaponBobADSModifier = 0.00f;
    this->WeaponBobRotPitchScale = 0.00f;
    this->WeaponBobRotRollScale = 0.00f;
    this->WeaponBobRotPitchSpeed = 0.00f;
    this->WeaponBobRotRollSpeed = 0.00f;
    this->WeaponBobRotCrouchModifier = 0.00f;
    this->WeaponBobRotADSModifier = 0.00f;
}

