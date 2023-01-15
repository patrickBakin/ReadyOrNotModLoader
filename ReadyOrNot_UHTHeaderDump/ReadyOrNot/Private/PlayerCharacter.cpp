#include "PlayerCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "BleedComponent.h"
#include "PlayerPostProcessing.h"
#include "ScoringComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

class AActor;
class USkeletalMesh;
class AController;
class UUserWidget;
class ABaseArmour;
class ABaseItem;
class UReadyOrNotGameplayEffect;
class UBasePlayerEffect;
class ABaseMagazineWeapon;
class ABaseGrenade;
class AReadyOrNotCharacter;
class ADoor;
class APickupActor;
class UHumanCharacterHUD_V2;
class APlayerCharacter;
class AReadyOrNotPlayerController;
class ATelescopicLadder;
class UAnimMontage;
class UParticleSystem;
class USoundCue;

void APlayerCharacter::UpdateRotator(FRotator& Value, FRotator Target, float InterpSpeed) {
}

void APlayerCharacter::UpdatePictureInPictureVisibility() {
}

void APlayerCharacter::UpdateFloat(float& Value, float Target, float InterpSpeed) {
}

FName APlayerCharacter::UnavailableHolsterNameForType(EItemCategory Category) {
    return NAME_None;
}

void APlayerCharacter::TryPlayAISuspectResponseToReload() {
}

void APlayerCharacter::TryNextPlayerView_Released() {
}

void APlayerCharacter::ToggleUnderbarrelAttachment() {
}

void APlayerCharacter::ToggleThirdPerson() {
}

void APlayerCharacter::ToggleSprint() {
}

void APlayerCharacter::ToggleSightTweaker() {
}

void APlayerCharacter::ToggleSecondarySight() {
}

void APlayerCharacter::ToggleNoTarget() {
}

void APlayerCharacter::ToggleNightvisionGoggles() {
}

void APlayerCharacter::ToggleLowReady() {
}

void APlayerCharacter::ToggleLeanRight() {
}

void APlayerCharacter::ToggleLeanLeft() {
}

void APlayerCharacter::ToggleHUD() {
}

void APlayerCharacter::ToggleGodMode() {
}

void APlayerCharacter::ToggleFreeThirdPerson() {
}

void APlayerCharacter::ToggleFreeLook() {
}

void APlayerCharacter::ToggleFreeLean() {
}

void APlayerCharacter::ToggleDebugDamage() {
}

void APlayerCharacter::ToggleDebugBallistics() {
}

void APlayerCharacter::ToggleCrouch() {
}

void APlayerCharacter::ToggleCrosshairOverlay() {
}

void APlayerCharacter::StunMe(float Duration, const FString& WithType) {
}

void APlayerCharacter::StopUsingMultitool(AActor* Target) {
}

void APlayerCharacter::StopLockPicking(AActor* Target) {
}

void APlayerCharacter::StopFreeLook() {
}

void APlayerCharacter::StopFPMontageFromTable(const FString& Animation, float BlendoutTime) {
}

void APlayerCharacter::StartUsingMultitool(AActor* Target) {
}

void APlayerCharacter::StartQuickThrow() {
}

void APlayerCharacter::StartLockPicking(AActor* Target) {
}

void APlayerCharacter::StartFreeLook() {
}

void APlayerCharacter::StartCinematicSequence() {
}

void APlayerCharacter::StartChemThrow() {
}

void APlayerCharacter::StartBleeding() {
}

void APlayerCharacter::ShowPlayer() {
}

void APlayerCharacter::SetWeaponUp() {
}

void APlayerCharacter::SetWeaponDown() {
}

void APlayerCharacter::SetRunSpeed(float newRunSpeed) {
}

void APlayerCharacter::SetMaxRunSpeed(float newMaxSpeed) {
}

void APlayerCharacter::SetHumanCharacterWidget_V2(UHumanCharacterHUD_V2* NewHumanCharacterWidget) {
}

void APlayerCharacter::SetFreelookYawMin(float NewYawMinValue) {
}

void APlayerCharacter::SetFreelookYawMax(float NewYawMaxValue) {
}

void APlayerCharacter::SetFreelookPitchMin(float NewPitchMinValue) {
}

void APlayerCharacter::SetFreelookPitchMax(float NewPitchMaxValue) {
}

void APlayerCharacter::SetForceLowReady(bool bShouldForceLowReady) {
}

void APlayerCharacter::Server_Walk_Implementation() {
}
bool APlayerCharacter::Server_Walk_Validate() {
    return true;
}

void APlayerCharacter::Server_UpdateLean_Implementation(float QuickLean, float newFreeLeanY, float NewFreeLeanZ) {
}
bool APlayerCharacter::Server_UpdateLean_Validate(float QuickLean, float newFreeLeanY, float NewFreeLeanZ) {
    return true;
}

void APlayerCharacter::Server_UpdateLastSetRunSpeed_Implementation(float newRunSpeed) {
}
bool APlayerCharacter::Server_UpdateLastSetRunSpeed_Validate(float newRunSpeed) {
    return true;
}

void APlayerCharacter::Server_UpdateIsBlockingAnimationPlaying_Implementation(bool bIsBlockingAnimationPlaying) {
}
bool APlayerCharacter::Server_UpdateIsBlockingAnimationPlaying_Validate(bool bIsBlockingAnimationPlaying) {
    return true;
}

void APlayerCharacter::Server_UpdateFreeLookCache_Implementation(FRotator NewFreeLookCache) {
}
bool APlayerCharacter::Server_UpdateFreeLookCache_Validate(FRotator NewFreeLookCache) {
    return true;
}

void APlayerCharacter::Server_UpdateCameraRotationRate_Implementation(FRotator NewCameraRotRate) {
}
bool APlayerCharacter::Server_UpdateCameraRotationRate_Validate(FRotator NewCameraRotRate) {
    return true;
}

void APlayerCharacter::Server_UpdateADS_Implementation(bool bADS) {
}
bool APlayerCharacter::Server_UpdateADS_Validate(bool bADS) {
    return true;
}

void APlayerCharacter::Server_UnlockMovementAndAim_Implementation() {
}
bool APlayerCharacter::Server_UnlockMovementAndAim_Validate() {
    return true;
}

void APlayerCharacter::Server_UnlockMovementAndActions_Implementation() {
}
bool APlayerCharacter::Server_UnlockMovementAndActions_Validate() {
    return true;
}

void APlayerCharacter::Server_UnlockMovement_Implementation() {
}
bool APlayerCharacter::Server_UnlockMovement_Validate() {
    return true;
}

void APlayerCharacter::Server_UnlockAllActions_Implementation() {
}
bool APlayerCharacter::Server_UnlockAllActions_Validate() {
    return true;
}

void APlayerCharacter::Server_UnlockAim_Implementation() {
}
bool APlayerCharacter::Server_UnlockAim_Validate() {
    return true;
}

void APlayerCharacter::Server_ToggleWalk_Implementation() {
}
bool APlayerCharacter::Server_ToggleWalk_Validate() {
    return true;
}

void APlayerCharacter::Server_ToggleNoTarget_Implementation() {
}
bool APlayerCharacter::Server_ToggleNoTarget_Validate() {
    return true;
}

void APlayerCharacter::Server_ToggleLightByClass_Implementation(ELightRadialSelection LightType) {
}
bool APlayerCharacter::Server_ToggleLightByClass_Validate(ELightRadialSelection LightType) {
    return true;
}

void APlayerCharacter::Server_ToggleGodMode_Implementation() {
}
bool APlayerCharacter::Server_ToggleGodMode_Validate() {
    return true;
}

void APlayerCharacter::Server_TakeDamage_Implementation(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void APlayerCharacter::Server_Sprint_Implementation() {
}
bool APlayerCharacter::Server_Sprint_Validate() {
    return true;
}

void APlayerCharacter::Server_SpawnEjectedMagazine_Implementation(FTransform SpawnTransform, ABaseMagazineWeapon* Weapon) {
}
bool APlayerCharacter::Server_SpawnEjectedMagazine_Validate(FTransform SpawnTransform, ABaseMagazineWeapon* Weapon) {
    return true;
}

void APlayerCharacter::Server_SetWalkSpeed_Implementation(float newWalkSpeed, float newCrouchWalkSpeed) {
}
bool APlayerCharacter::Server_SetWalkSpeed_Validate(float newWalkSpeed, float newCrouchWalkSpeed) {
    return true;
}

void APlayerCharacter::Server_SetUserLowReady_Implementation(bool bShouldUserLowReady) {
}
bool APlayerCharacter::Server_SetUserLowReady_Validate(bool bShouldUserLowReady) {
    return true;
}

void APlayerCharacter::Server_SetLowReady_Implementation(bool bUp, bool bLowReady, bool bIsUserLowReady) {
}
bool APlayerCharacter::Server_SetLowReady_Validate(bool bUp, bool bLowReady, bool bIsUserLowReady) {
    return true;
}

void APlayerCharacter::Server_SecondaryUse_Implementation() {
}
bool APlayerCharacter::Server_SecondaryUse_Validate() {
    return true;
}

void APlayerCharacter::Server_ResetPlayerEffect_Implementation(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bMulticast) {
}
bool APlayerCharacter::Server_ResetPlayerEffect_Validate(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bMulticast) {
    return true;
}

void APlayerCharacter::Server_RepNVGOn_Implementation(bool bIsOn) {
}
bool APlayerCharacter::Server_RepNVGOn_Validate(bool bIsOn) {
    return true;
}

void APlayerCharacter::Server_RemovePendingC2_Implementation() {
}
bool APlayerCharacter::Server_RemovePendingC2_Validate() {
    return true;
}

void APlayerCharacter::Server_RemoveLadder_Implementation(ATelescopicLadder* Ladder) {
}
bool APlayerCharacter::Server_RemoveLadder_Validate(ATelescopicLadder* Ladder) {
    return true;
}

void APlayerCharacter::Server_PrimaryUse_Implementation() {
}
bool APlayerCharacter::Server_PrimaryUse_Validate() {
    return true;
}

void APlayerCharacter::Server_PrepareForHeal_Implementation() {
}
bool APlayerCharacter::Server_PrepareForHeal_Validate() {
    return true;
}

void APlayerCharacter::Server_PlayVaultAnimation_Implementation(FVector ledge, FVector legeWallNormal, FVector ledgeTraceDown, float ledgeZ, ELedgeWidth ledgeWidth, ELedgeHeight ledgeHeight) {
}
bool APlayerCharacter::Server_PlayVaultAnimation_Validate(FVector ledge, FVector legeWallNormal, FVector ledgeTraceDown, float ledgeZ, ELedgeWidth ledgeWidth, ELedgeHeight ledgeHeight) {
    return true;
}

void APlayerCharacter::Server_PlaySound_Implementation(USoundCue* Cue) {
}
bool APlayerCharacter::Server_PlaySound_Validate(USoundCue* Cue) {
    return true;
}

void APlayerCharacter::Server_PlayPVPSpeech_Implementation(const FString& SpeechRowName, ETeamType TeamType) {
}
bool APlayerCharacter::Server_PlayPVPSpeech_Validate(const FString& SpeechRowName, ETeamType TeamType) {
    return true;
}

void APlayerCharacter::Server_Ping_Implementation() {
}
bool APlayerCharacter::Server_Ping_Validate() {
    return true;
}

void APlayerCharacter::Server_OnReviveComplete_Implementation(APlayerCharacter* PlayerCharacter) {
}
bool APlayerCharacter::Server_OnReviveComplete_Validate(APlayerCharacter* PlayerCharacter) {
    return true;
}

void APlayerCharacter::Server_OnReloadComplete_Implementation() {
}
bool APlayerCharacter::Server_OnReloadComplete_Validate() {
    return true;
}

void APlayerCharacter::Server_MarkWeaponCleaned_Implementation(ABaseItem* Item) {
}
bool APlayerCharacter::Server_MarkWeaponCleaned_Validate(ABaseItem* Item) {
    return true;
}

void APlayerCharacter::Server_LockMovementAndAim_Implementation() {
}
bool APlayerCharacter::Server_LockMovementAndAim_Validate() {
    return true;
}

void APlayerCharacter::Server_LockMovementAndActions_Implementation() {
}
bool APlayerCharacter::Server_LockMovementAndActions_Validate() {
    return true;
}

void APlayerCharacter::Server_LockMovement_Implementation() {
}
bool APlayerCharacter::Server_LockMovement_Validate() {
    return true;
}

void APlayerCharacter::Server_LockAllActions_Implementation() {
}
bool APlayerCharacter::Server_LockAllActions_Validate() {
    return true;
}

void APlayerCharacter::Server_LockAim_Implementation() {
}
bool APlayerCharacter::Server_LockAim_Validate() {
    return true;
}

void APlayerCharacter::Server_KillfeedMessage_Implementation(APlayerCharacter* Killer, APlayerCharacter* Victim, ABaseItem* Weapon) {
}
bool APlayerCharacter::Server_KillfeedMessage_Validate(APlayerCharacter* Killer, APlayerCharacter* Victim, ABaseItem* Weapon) {
    return true;
}

void APlayerCharacter::Server_InstaStartFree_Implementation(APlayerCharacter* Target) {
}
bool APlayerCharacter::Server_InstaStartFree_Validate(APlayerCharacter* Target) {
    return true;
}

void APlayerCharacter::Server_InstaStartArrest_Implementation(APlayerCharacter* Target) {
}
bool APlayerCharacter::Server_InstaStartArrest_Validate(APlayerCharacter* Target) {
    return true;
}

void APlayerCharacter::Server_InstantSurrenderTarget_Implementation() {
}
bool APlayerCharacter::Server_InstantSurrenderTarget_Validate() {
    return true;
}

void APlayerCharacter::Server_FreefeedMessage_Implementation(APlayerCharacter* Freer, APlayerCharacter* Victim) {
}
bool APlayerCharacter::Server_FreefeedMessage_Validate(APlayerCharacter* Freer, APlayerCharacter* Victim) {
    return true;
}

void APlayerCharacter::Server_FinishHealing_Implementation() {
}

void APlayerCharacter::Server_FastWalk_Implementation() {
}
bool APlayerCharacter::Server_FastWalk_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipZipcuffs_Implementation() {
}
bool APlayerCharacter::Server_EquipZipcuffs_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipTablet_Implementation() {
}
bool APlayerCharacter::Server_EquipTablet_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipStinger_Implementation() {
}
bool APlayerCharacter::Server_EquipStinger_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipSecondaryItem_Implementation() {
}
bool APlayerCharacter::Server_EquipSecondaryItem_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipPrimaryItem_Implementation(bool bForce) {
}
bool APlayerCharacter::Server_EquipPrimaryItem_Validate(bool bForce) {
    return true;
}

void APlayerCharacter::Server_EquipPepperSpray_Implementation() {
}
bool APlayerCharacter::Server_EquipPepperSpray_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipNinebang_Implementation() {
}
bool APlayerCharacter::Server_EquipNinebang_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipMultitool_Implementation(EMultitoolFunctions MultitoolFunction) {
}
bool APlayerCharacter::Server_EquipMultitool_Validate(EMultitoolFunctions MultitoolFunction) {
    return true;
}

void APlayerCharacter::Server_EquipMirrorgun_Implementation() {
}
bool APlayerCharacter::Server_EquipMirrorgun_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipLastItem_Implementation(EHolsterAnimationType AnimationType) {
}
bool APlayerCharacter::Server_EquipLastItem_Validate(EHolsterAnimationType AnimationType) {
    return true;
}

void APlayerCharacter::Server_EquipGrenade_4_Implementation() {
}
bool APlayerCharacter::Server_EquipGrenade_4_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipGrenade_3_Implementation() {
}
bool APlayerCharacter::Server_EquipGrenade_3_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipGrenade_2_Implementation() {
}
bool APlayerCharacter::Server_EquipGrenade_2_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipGrenade_1_Implementation() {
}
bool APlayerCharacter::Server_EquipGrenade_1_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipFlashbang_Implementation() {
}
bool APlayerCharacter::Server_EquipFlashbang_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipDoorjam_Implementation() {
}
bool APlayerCharacter::Server_EquipDoorjam_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipDevice_4_Implementation() {
}
bool APlayerCharacter::Server_EquipDevice_4_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipDevice_3_Implementation() {
}
bool APlayerCharacter::Server_EquipDevice_3_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipDevice_2_Implementation() {
}
bool APlayerCharacter::Server_EquipDevice_2_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipDevice_1_Implementation() {
}
bool APlayerCharacter::Server_EquipDevice_1_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipCSGas_Implementation() {
}
bool APlayerCharacter::Server_EquipCSGas_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipC2_Implementation() {
}
bool APlayerCharacter::Server_EquipC2_Validate() {
    return true;
}

void APlayerCharacter::Server_EquipBreachingShotgun_Implementation() {
}
bool APlayerCharacter::Server_EquipBreachingShotgun_Validate() {
    return true;
}

void APlayerCharacter::Server_EndSecondaryUse_Implementation() {
}
bool APlayerCharacter::Server_EndSecondaryUse_Validate() {
    return true;
}

void APlayerCharacter::Server_EndPrimaryUse_Implementation() {
}
bool APlayerCharacter::Server_EndPrimaryUse_Validate() {
    return true;
}

void APlayerCharacter::Server_EndFastWalk_Implementation() {
}
bool APlayerCharacter::Server_EndFastWalk_Validate() {
    return true;
}

void APlayerCharacter::Server_ChangeMesh_Implementation(USkeletalMesh* FPMesh, USkeletalMesh* TPMesh, USkeletalMesh* TPHeadMesh) {
}
bool APlayerCharacter::Server_ChangeMesh_Validate(USkeletalMesh* FPMesh, USkeletalMesh* TPMesh, USkeletalMesh* TPHeadMesh) {
    return true;
}

void APlayerCharacter::Server_ChangeFPMesh_Implementation(USkeletalMesh* NewFPMesh) {
}
bool APlayerCharacter::Server_ChangeFPMesh_Validate(USkeletalMesh* NewFPMesh) {
    return true;
}

void APlayerCharacter::Server_ArrestfeedMessage_Implementation(APlayerCharacter* Arrester, APlayerCharacter* Victim) {
}
bool APlayerCharacter::Server_ArrestfeedMessage_Validate(APlayerCharacter* Arrester, APlayerCharacter* Victim) {
    return true;
}

void APlayerCharacter::Server_ApplyPlayerEffectFor_Implementation(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, float Seconds, bool bMulticast) {
}
bool APlayerCharacter::Server_ApplyPlayerEffectFor_Validate(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, float Seconds, bool bMulticast) {
    return true;
}

void APlayerCharacter::Server_ApplyPlayerEffect_Implementation(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bResettable, bool bMulticast) {
}
bool APlayerCharacter::Server_ApplyPlayerEffect_Validate(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bResettable, bool bMulticast) {
    return true;
}

void APlayerCharacter::Server_ActorPickedUp_Implementation(APickupActor* PickupActor) {
}
bool APlayerCharacter::Server_ActorPickedUp_Validate(APickupActor* PickupActor) {
    return true;
}

void APlayerCharacter::SecondaryUse() {
}

void APlayerCharacter::ResetLODS_Player() {
}

void APlayerCharacter::ResetLODs_Items() {
}

void APlayerCharacter::ReplenishAllMagazineAmmo() {
}

void APlayerCharacter::ReplenishAllGrenadeAmmo() {
}


void APlayerCharacter::ReloadOrMagCheck_Released() {
}

void APlayerCharacter::ReloadOrMagCheck() {
}

void APlayerCharacter::Reload() {
}

void APlayerCharacter::PrintItemAttachmentListToLog() {
}

void APlayerCharacter::PrimaryUseComplete() {
}

void APlayerCharacter::PrimaryUse() {
}


void APlayerCharacter::PlayerStopJumping() {
}

void APlayerCharacter::PlayerJump() {
}

void APlayerCharacter::Ping() {
}

void APlayerCharacter::OpenTablet() {
}


void APlayerCharacter::OnTeamChatPressed_Implementation() {
}




void APlayerCharacter::OnRep_UpdateMontageSection() {
}

void APlayerCharacter::OnRep_UpdateAnimInstance() {
}

void APlayerCharacter::OnRep_StartBoneBlend() {
}

void APlayerCharacter::OnRep_RunSpeedUpdate() {
}

void APlayerCharacter::OnRep_BaseAimRotation() {
}

void APlayerCharacter::OnPlayerEffectExpired_Implementation(TSubclassOf<UReadyOrNotGameplayEffect> InPlayerEffectClass) {
}

void APlayerCharacter::OnLowReadyButtonUp() {
}

void APlayerCharacter::OnLowReadyButtonDown() {
}

void APlayerCharacter::OnLowHealth(float CurrentHealth) {
}






void APlayerCharacter::OnItemSelectionStyleChanged_Implementation(EItemSelectionInterfaceType NewItemSelectionInterface) {
}

void APlayerCharacter::OnFullHealth() {
}

void APlayerCharacter::OnChatPressed_Implementation() {
}


void APlayerCharacter::Multicast_ToggleLaserLight_Implementation() {
}

void APlayerCharacter::Multicast_ShowThirdPerson_Implementation() {
}

void APlayerCharacter::Multicast_PlaySound_Implementation(USoundCue* Cue) {
}

void APlayerCharacter::Multicast_PlayPVPSpeech_Implementation(const FString& SpeechRowName, ETeamType TeamType) {
}

void APlayerCharacter::Multicast_PlayInjuredScream_Implementation() {
}

void APlayerCharacter::Multicast_PlayArmourRelatedEffects_Implementation(ABaseArmour* Armour, UParticleSystem* Particle, const FTransform& AtTransform) {
}

void APlayerCharacter::Multicast_HideThirdPerson_Implementation() {
}

void APlayerCharacter::Melee() {
}

void APlayerCharacter::MagCheck() {
}

void APlayerCharacter::LocalKillFeed_Implementation(APlayerCharacter* Killer, APlayerCharacter* Victim, ABaseItem* Weapon) {
}

void APlayerCharacter::LocalFreeFeed_Implementation(APlayerCharacter* Freer, APlayerCharacter* Victim) {
}

void APlayerCharacter::LocalDeathFeed_Implementation(AReadyOrNotPlayerController* PlayerController) {
}

void APlayerCharacter::LocalArrestFeed_Implementation(APlayerCharacter* Arrester, APlayerCharacter* Victim) {
}

void APlayerCharacter::LeanUp(float Val) {
}

void APlayerCharacter::LeanRight(float Val) {
}

void APlayerCharacter::Lean(float Val) {
}

void APlayerCharacter::JamDoor(ADoor* Door) {
}

bool APlayerCharacter::IsSprinting() const {
    return false;
}

bool APlayerCharacter::IsReloading() const {
    return false;
}

bool APlayerCharacter::IsPointPartiallyReachable(FVector Position) {
    return false;
}

bool APlayerCharacter::IsPointFullyReachable(FVector Position) {
    return false;
}

bool APlayerCharacter::IsMovingForward() const {
    return false;
}

bool APlayerCharacter::IsMoving() const {
    return false;
}

bool APlayerCharacter::IsMagCheckPlaying() const {
    return false;
}

bool APlayerCharacter::IsInTightSpaces() {
    return false;
}

bool APlayerCharacter::IsInLightSource(int32& VisibleLightSources, float MinimumLightLevel) {
    return false;
}

bool APlayerCharacter::IsInCinematicAnimation() const {
    return false;
}

bool APlayerCharacter::IsHoldingSprint() const {
    return false;
}

bool APlayerCharacter::IsFreelooking() const {
    return false;
}

bool APlayerCharacter::IsFireModeSelectPlaying() const {
    return false;
}

bool APlayerCharacter::Is1PMontagePlaying(UAnimMontage* Montage) const {
    return false;
}

void APlayerCharacter::IncrementalUse(float Val) {
}

void APlayerCharacter::HidePlayer() {
}

bool APlayerCharacter::HasWedge() {
    return false;
}

bool APlayerCharacter::HasOptiwand() {
    return false;
}

bool APlayerCharacter::HasNVG() {
    return false;
}

bool APlayerCharacter::HasLockpick() {
    return false;
}

bool APlayerCharacter::HasLineOfSightToAnyPlayerControlledCharacter() {
    return false;
}

bool APlayerCharacter::HasGrenadesInInventory() const {
    return false;
}

bool APlayerCharacter::HasChemlightsInInventory() const {
    return false;
}

bool APlayerCharacter::HasC2() {
    return false;
}

bool APlayerCharacter::HasBSG() {
    return false;
}

float APlayerCharacter::GetViewPitch() const {
    return 0.0f;
}

int32 APlayerCharacter::GetQuickthrowGrenadeAmmo() const {
    return 0;
}

float APlayerCharacter::GetLeanAmount(FVector Component, float& InOutPendingVal, float MaxValue) {
    return 0.0f;
}

FHitResult APlayerCharacter::GetHitFromCamera(float MaxDistance, TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels, FRotator OffsetRotation, FVector OffsetVector, bool bDrawTrace) {
    return FHitResult{};
}

int32 APlayerCharacter::GetFootConstant(EFootConstEnum FootConst) {
    return 0;
}

EFireMode APlayerCharacter::GetFiringMode() {
    return EFireMode::FM_Single;
}

FCameraFreelookSetting APlayerCharacter::GetCurrentFreelookSettings() const {
    return FCameraFreelookSetting{};
}

APlayerCharacter* APlayerCharacter::GetClosestPlayerCharacter(ETeamType Team, float& OutClosestDistance, bool bExcludeArrested) {
    return NULL;
}

int32 APlayerCharacter::GetChemlightAmmo() const {
    return 0;
}

TArray<AReadyOrNotCharacter*> APlayerCharacter::GetAvaliablePlayersForTeamView(const bool bIncludeDeadViews) const {
    return TArray<AReadyOrNotCharacter*>();
}

TArray<APlayerCharacter*> APlayerCharacter::GetAllOtherPlayerCharacters(ETeamType Team) {
    return TArray<APlayerCharacter*>();
}

FRotator APlayerCharacter::GetAimOffsets() const {
    return FRotator{};
}

void APlayerCharacter::ForceMaxLODs_Player() {
}

void APlayerCharacter::ForceMaxLODs_Items() {
}

void APlayerCharacter::ForceFirstDraw() {
}

void APlayerCharacter::FireLaserEyes() {
}

void APlayerCharacter::FadeToBlackEnable() {
}

void APlayerCharacter::FadeToBlackDisable() {
}

void APlayerCharacter::EquipZipcuffs() {
}

void APlayerCharacter::EquipTacticalDevice() {
}

void APlayerCharacter::EquipTablet() {
}

void APlayerCharacter::EquipStinger() {
}

void APlayerCharacter::EquipSecondaryItem() {
}

void APlayerCharacter::EquipPrimaryItem() {
}

void APlayerCharacter::EquipPepperspray() {
}

bool APlayerCharacter::EquippedWeaponHasSecondarySight() const {
    return false;
}

bool APlayerCharacter::EquippedWeaponHasLightAttachment() const {
    return false;
}

bool APlayerCharacter::EquippedWeaponHasLaserAttachment() const {
    return false;
}

void APlayerCharacter::EquipNinebang() {
}

void APlayerCharacter::EquipMultitool() {
}

void APlayerCharacter::EquipMirrorgun() {
}

void APlayerCharacter::EquipLongTactical() {
}

ABaseItem* APlayerCharacter::EquipItemOfType(EItemCategory ItemCategory) {
    return NULL;
}

ABaseItem* APlayerCharacter::EquipItemFromGroup_Name(FName GroupName, int32 ItemCategoryIndex) {
    return NULL;
}

ABaseItem* APlayerCharacter::EquipItemFromGroup_Index(int32 GroupIndex, int32 ItemCategoryIndex) {
    return NULL;
}

void APlayerCharacter::EquipGrenade_4() {
}

void APlayerCharacter::EquipGrenade_3() {
}

void APlayerCharacter::EquipGrenade_2() {
}

void APlayerCharacter::EquipGrenade_1() {
}

void APlayerCharacter::EquipGrenade() {
}

void APlayerCharacter::EquipFlashbang() {
}

void APlayerCharacter::EquipDoorJam() {
}

void APlayerCharacter::EquipDevice_4() {
}

void APlayerCharacter::EquipDevice_3() {
}

void APlayerCharacter::EquipDevice_2() {
}

void APlayerCharacter::EquipDevice_1() {
}

void APlayerCharacter::EquipCSGas() {
}

void APlayerCharacter::EquipC2() {
}

void APlayerCharacter::EquipBreachingShotgun() {
}

void APlayerCharacter::EquipBatteringRam() {
}

void APlayerCharacter::EndSecondaryUse() {
}

void APlayerCharacter::EndQuickThrow() {
}

void APlayerCharacter::EndCinematicSequence() {
}

void APlayerCharacter::EndChemThrow() {
}

void APlayerCharacter::EnableNightVisionGoggles() {
}

void APlayerCharacter::Drone_Yaw(float Val) {
}

void APlayerCharacter::Drone_Throttle(float Val) {
}

void APlayerCharacter::Drone_Steady() {
}

void APlayerCharacter::Drone_Right(float Val) {
}

void APlayerCharacter::Drone_MoveForward(float Val) {
}

void APlayerCharacter::DrawPermanentMarker() {
}

void APlayerCharacter::DisableNightVisionGoggles() {
}

void APlayerCharacter::DestroyNonDevelopmentComponents() {
}

void APlayerCharacter::DebugDetachAllComponentsAndSubComponents() {
}

void APlayerCharacter::CreateTeamViewWidget() {
}

void APlayerCharacter::CreateHUDWidget() {
}

void APlayerCharacter::CloseTablet() {
}

void APlayerCharacter::ClosePlayerView() {
}

void APlayerCharacter::Client_UpdateMagBeforeReload_Implementation() {
}

void APlayerCharacter::Client_StartStun_Implementation(EStunType StunType, AActor* StunCauser, FVector DamageCauserLocation) {
}

void APlayerCharacter::Client_ShowMagDiscarded_Implementation() {
}

void APlayerCharacter::Client_ShowMagCheck_Implementation() {
}

void APlayerCharacter::Client_ShowMagAfterReload_Implementation() {
}

void APlayerCharacter::Client_ShowFireModeChanged_Implementation(EFireMode newFireMode) {
}

void APlayerCharacter::Client_SetWalkSpeed_Implementation(float newWalkSpeed, float newCrouchWalkSpeed) {
}

void APlayerCharacter::Client_ResetPlayerEffect_Implementation(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass) {
}

void APlayerCharacter::Client_PossessedBy_Implementation(AController* NewController) {
}

void APlayerCharacter::Client_PlayPostProcessEffect_Implementation(const FName& InPostProcessEffect, AActor* DamageCauser) {
}

void APlayerCharacter::Client_OnTakenDamageDetail_Implementation(bool bWasHeadshot, bool bTorsoShot, bool bLeftArm, bool bLeftLeg, bool bRightArm, bool bRightLeg, float DamageTaken, float RemainingHealth, bool bBlockedByArmour, bool bBlockedByHelmet) {
}

void APlayerCharacter::Client_OnPlayerDamage_Implementation(bool bTakenDamage, float InDamage, AReadyOrNotCharacter* InstigatorCharacter, AActor* DamageCauser) {
}

void APlayerCharacter::Client_OnLimbBroken_Implementation() {
}

void APlayerCharacter::Client_HideMagCheck_Implementation() {
}

void APlayerCharacter::Client_CreateWidget_Implementation(TSubclassOf<UUserWidget> Widget) {
}

void APlayerCharacter::Client_BulletHit_Implementation(FHitResult BulletImpact) {
}

void APlayerCharacter::Client_AutoSelectNewQuickthrowItem_Implementation(ABaseGrenade* CallingGrenade) {
}

void APlayerCharacter::Client_ApplyPlayerEffect_Implementation(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bResettable, bool bMulticast) {
}

void APlayerCharacter::CheckSprintingGroup() {
}

void APlayerCharacter::CaptureFPCamera(float DeltaTime) {
}

bool APlayerCharacter::CanUseIncrementalSystem_Implementation() const {
    return false;
}

bool APlayerCharacter::CanQuickThrow() {
    return false;
}

bool APlayerCharacter::CanPingActor(AActor* Actor) const {
    return false;
}

bool APlayerCharacter::CalculateStopLocation(FVector& OutStopLocation, const FVector& CurrentLocation, const FVector& Velocity, const FVector& Acceleration, float Friction, float BrakingDeceleration, float TimeStep, int32 MaxSimulationIterations) {
    return false;
}

void APlayerCharacter::CalculateLeanMovement(float DeltaTime) {
}

void APlayerCharacter::C2Door(ADoor* Door) {
}

void APlayerCharacter::ApplyPlayerEffectFor_Class(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, float Seconds) {
}

void APlayerCharacter::ApplyPlayerEffectFor(UBasePlayerEffect* InPlayerEffect, float Seconds) {
}

void APlayerCharacter::ApplyPlayerEffect_Class(TSubclassOf<UBasePlayerEffect> InPlayerEffectClass, bool bResettable) {
}

void APlayerCharacter::ApplyPlayerEffect(UBasePlayerEffect* InPlayerEffect, bool bResettable) {
}

void APlayerCharacter::AdjustScopeOffsetVertical(float NewOffset) {
}

void APlayerCharacter::AdjustScopeOffsetHorizontal(float NewOffset) {
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerCharacter, Rep_FPBodyMesh);
    DOREPLIFETIME(APlayerCharacter, ReplicatedFPMesh);
    DOREPLIFETIME(APlayerCharacter, CurrentViewCharacter);
    DOREPLIFETIME(APlayerCharacter, LastInteractableComponent);
    DOREPLIFETIME(APlayerCharacter, FreeLookCache);
    DOREPLIFETIME(APlayerCharacter, RevivingPlayer);
    DOREPLIFETIME(APlayerCharacter, BeingRevivedByPlayer);
    DOREPLIFETIME(APlayerCharacter, RevivingOperatingTime);
    DOREPLIFETIME(APlayerCharacter, bStunAimLocked);
    DOREPLIFETIME(APlayerCharacter, BlendedBone);
    DOREPLIFETIME(APlayerCharacter, Replicated_3PAnimInstance);
    DOREPLIFETIME(APlayerCharacter, Replicated_1PAnimInstance);
    DOREPLIFETIME(APlayerCharacter, bForceLowReady);
    DOREPLIFETIME(APlayerCharacter, LastCollectedEvidence);
    DOREPLIFETIME(APlayerCharacter, bWeaponDown3P);
    DOREPLIFETIME(APlayerCharacter, bIsWearingHeavyArmour);
    DOREPLIFETIME(APlayerCharacter, bFireLoop);
    DOREPLIFETIME(APlayerCharacter, bServerIsBlockingAnimationPlaying);
    DOREPLIFETIME(APlayerCharacter, ItemBeforeQuickThrow);
    DOREPLIFETIME(APlayerCharacter, bAiming);
    DOREPLIFETIME(APlayerCharacter, bFreeLeaning);
    DOREPLIFETIME(APlayerCharacter, bIsLeaning);
    DOREPLIFETIME(APlayerCharacter, RunSpeed);
    DOREPLIFETIME(APlayerCharacter, HitSpeedMultiplier);
    DOREPLIFETIME(APlayerCharacter, SlowDownSpeedMultiplier);
    DOREPLIFETIME(APlayerCharacter, WalkSpeedRampMultiplier);
    DOREPLIFETIME(APlayerCharacter, SprintSpeedRampUpMultiplier);
    DOREPLIFETIME(APlayerCharacter, CurrentRunSpeedPercent);
    DOREPLIFETIME(APlayerCharacter, MaxRunSpeedPercent);
    DOREPLIFETIME(APlayerCharacter, MaxCrouchRunSpeedPercent);
    DOREPLIFETIME(APlayerCharacter, MinWalkSpeedPercent);
    DOREPLIFETIME(APlayerCharacter, LastSetRunSpeed);
    DOREPLIFETIME(APlayerCharacter, bHoldingFastWalk);
    DOREPLIFETIME(APlayerCharacter, bDisableSprinting);
    DOREPLIFETIME(APlayerCharacter, bWalking);
    DOREPLIFETIME(APlayerCharacter, bAllowPlacement);
    DOREPLIFETIME(APlayerCharacter, QuickLeanAmount);
    DOREPLIFETIME(APlayerCharacter, FreeLeanX);
    DOREPLIFETIME(APlayerCharacter, FreeLeanZ);
    DOREPLIFETIME(APlayerCharacter, Rep_MontageSection3P);
    DOREPLIFETIME(APlayerCharacter, bIsThirdPerson);
    DOREPLIFETIME(APlayerCharacter, Server_BaseAimRotation);
    DOREPLIFETIME(APlayerCharacter, bIsStopping);
    DOREPLIFETIME(APlayerCharacter, bNVGOn);
    DOREPLIFETIME(APlayerCharacter, CurrentMeshRot);
}

APlayerCharacter::APlayerCharacter() {
    this->ThirdPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
    this->ThirdPersonCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThirdPersonCameraArm"));
    this->Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
    this->MeshBody1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshBody1P"));
    this->FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->PlayerPostProcessingComp = CreateDefaultSubobject<UPlayerPostProcessing>(TEXT("PlayerPostProcessingComp"));
    this->FMODBreathingAudioComp = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODBreathingAudioComp"));
    this->BleedComponent = CreateDefaultSubobject<UBleedComponent>(TEXT("Bleed Component"));
    this->ScoringComponent = CreateDefaultSubobject<UScoringComponent>(TEXT("Scoring Component"));
    this->Rep_FPBodyMesh = NULL;
    this->LastSetMesh1PDynamicMaterial = NULL;
    this->LastKnownPlayerState = NULL;
    this->bInAISafeZone = false;
    this->Body1PMat = NULL;
    this->CurrentViewCharacter = NULL;
    this->CurrentTeamViewIndex = -1;
    this->PlayerViewActor = NULL;
    this->PlayerViewActorClass = NULL;
    this->TeamViewInputHoldTime = 0.25f;
    this->surfaceType = 0.00f;
    this->roomType = 0.00f;
    this->bIsSwatCommandOpen = false;
    this->SwatCommandWidget = NULL;
    this->bInCommandMenu = false;
    this->bInDevicesMenu = false;
    this->bInTabMenu = false;
    this->bFadeToGray = false;
    this->Sensitivity = 1.00f;
    this->bInvertYaw = false;
    this->bInvertPitch = false;
    this->HUD_Widget = NULL;
    this->HumanCharacterWidget_V2 = NULL;
    this->TeamViewWidget = NULL;
    this->LastInteractableComponent = NULL;
    this->LastBuildingEntered = NULL;
    this->InsideCurrentBuilding = NULL;
    this->lastHighlightedDoor = NULL;
    this->lastHighlightedEvidence = NULL;
    this->lastHighlightedPickupMagazine = NULL;
    this->bExitWithFireSelect = false;
    this->PreviousPosessedCharacter = NULL;
    this->CriticalInjuredEvent = NULL;
    this->FlatlineEvent = NULL;
    this->FlatlineEventPvP = NULL;
    this->HeadshotEvent = NULL;
    this->SAPIPlateHitEvent = NULL;
    this->bMirroring = false;
    this->bSpawnInventoryItemsOnPossess = true;
    this->YellOutEffectLength = 2.00f;
    this->YelloutEffectRadius = 3500.00f;
    this->bShowReadyStatus = false;
    this->LastPlayerState = NULL;
    this->Camera_Hit_Arm_L = NULL;
    this->Camera_Hit_Arm_R = NULL;
    this->Camera_Hit_Low = NULL;
    this->Camera_Hit_Leg_L = NULL;
    this->Camera_Hit_Leg_R = NULL;
    this->Camera_Hit_Head_Front = NULL;
    this->Camera_Hit_Head_Back = NULL;
    this->CrouchHeight = 0.00f;
    this->BodyImpactGroundSound = NULL;
    this->CurrentlyPiloting = NULL;
    this->RevivingPlayer = NULL;
    this->BeingRevivedByPlayer = NULL;
    this->RevivingOperatingTime = 0.00f;
    this->StunMovementSpeedMultiplier = 0.75f;
    this->bStunAimLocked = false;
    this->LastEquippedItemBeforeStun = NULL;
    this->FirstPersonShakeAmount = 0.00f;
    this->ViewBlendMultiplier = 0.03f;
    this->Replicated_3PAnimInstance = NULL;
    this->Replicated_1PAnimInstance = NULL;
    this->HoldingUseTime = 0.00f;
    this->bHoldingUse = false;
    this->bLookingAtEvidenceItem = false;
    this->bLookingAtDoor = false;
    this->bLookingAtHuman = false;
    this->bLookingAtTarget = false;
    this->bUserLowReady = false;
    this->bForceLowReady = false;
    this->LowReadyTraceDistance = 10000.00f;
    this->LastCollectedEvidence = NULL;
    this->bIsInTightSpace = false;
    this->RecoilNerfEffect = NULL;
    this->bOverrideHeadwearPaperdollTexture = false;
    this->HeadwearPaperdollTexture_Override = NULL;
    this->HeadwearPaperdollTexture_Crouch_Override = NULL;
    this->EquipIndex = 0;
    this->ForwardShake = NULL;
    this->RightShake = NULL;
    this->DroppedItem = NULL;
    this->BloodPool = NULL;
    this->MeshSpaceMovementMultiplier1P = 0.50f;
    this->bWeaponDown3P = false;
    this->bIsWearingHeavyArmour = false;
    this->ReturnToWeaponDownDelay = 30.00f;
    this->bFireLoop = false;
    this->TimeSinceAiming = 999.00f;
    this->bServerIsBlockingAnimationPlaying = false;
    this->SprintFovFactor = 1.10f;
    this->SprintFovInterpTime = 8.00f;
    this->DefaultFovInterpTime = 10.00f;
    this->PendingC2Removal = NULL;
    this->LastEquippedItemBeforeUsingChem = NULL;
    this->QuickThrowItem = NULL;
    this->ItemBeforeQuickThrow = NULL;
    this->bQuickThrowing = false;
    this->ClearingScore = 0.00f;
    this->bAiming = false;
    this->AimTime = 0.00f;
    this->bReloadLoop = false;
    this->ForwardStrafeSpeedMultiplier = 1.00f;
    this->BackwardStrafeSpeedMultiplier = 0.85f;
    this->SideStrafeSpeedMultiplier = 0.85f;
    this->LeanSpeedMultiplier = 0.85f;
    this->SpeedPercentLossPerLegInjury = 0.10f;
    this->SpeedPercentLossWhenCarrying = 0.10f;
    this->bLeanLeftToggle = false;
    this->bLeanRightToggle = false;
    this->LeanAudioComponent = NULL;
    this->LeanAudioEvent = NULL;
    this->LeanMovementValue = 0.00f;
    this->bLedgeFound = false;
    this->bVaulting = false;
    this->LastPlayedVaultMontage = NULL;
    this->bLeaningLeft = false;
    this->bLeaningRight = false;
    this->bLeaningUp = false;
    this->bLeaningDown = false;
    this->bFreeLeaning = false;
    this->bIsLeaning = false;
    this->RunSpeed = 0.00f;
    this->MaxAcceleration = 500.00f;
    this->SpeedModifier_AimFocus = 0.25f;
    this->SpeedModifier_Aim = 0.50f;
    this->SpeedModifier_Crouch = 0.50f;
    this->SpeedModifier_Sprint = 1.20f;
    this->SpeedModifier_SprintMax = 1.30f;
    this->SpeedModifier_SprintTime = 5.00f;
    this->HitSpeedMultiplier = 1.00f;
    this->SlowDownSpeedMultiplier = 1.00f;
    this->WalkSpeedRampMultiplier = 1.00f;
    this->SprintSpeedRampUpMultiplier = 1.00f;
    this->CurrentRunSpeedPercent = 1.00f;
    this->MaxRunSpeedPercent = 1.00f;
    this->MaxCrouchRunSpeedPercent = 0.50f;
    this->MinWalkSpeedPercent = 0.15f;
    this->LastSetRunSpeed = 0.50f;
    this->WalkSpeedMultiplier = 0.25f;
    this->DeployableWalkSpeedMultiplier = 1.00f;
    this->bHoldingFastWalk = false;
    this->bHoldingSprint = false;
    this->bDisableSprinting = false;
    this->bWalking = true;
    this->bAllowPlacement = false;
    this->QuickLeanAmount = 0.00f;
    this->FreeLeanX = 0.00f;
    this->FreeLeanZ = 0.00f;
    this->MeshspaceInterp = 8.00f;
    this->VelocityCameraRollMultiplier = 0.01f;
    this->RecoilSpeed = 2.00f;
    this->Last1PMontage = NULL;
    this->JumpStartSound = NULL;
    this->JumpLandSound = NULL;
    this->InMix = NULL;
    this->OutMix = NULL;
    this->bOutMixPlaying = true;
    this->InjuredScreamPVP = NULL;
    this->DeathScreamPVP = NULL;
    this->InjuredScreamComponent = NULL;
    this->MovementRequiredPerSound = 75.00f;
    this->RotationRequiredPerSound = 40.00f;
    this->NegativeVelocityRequiredForLandingSound = 50.00f;
    this->HitDirectionForward = 0.00f;
    this->HitDirectionRight = 0.00f;
    this->BreathingBaseEvent = NULL;
    this->ExhaustionLevel = 0.00f;
    this->ExhaustionDissipationRate = 0.05f;
    this->ExhaustionIncreaseRate = 0.10f;
    this->ExhaustionThreshold = 0.80f;
    this->FearLevel = 0.00f;
    this->FearDissipationRate = 0.05f;
    this->FearSuppressionScale = 0.10f;
    this->FearThreshold = 0.75f;
    this->bIsSightTweakMode = false;
    this->SightTweakerWidgetTemplate = NULL;
    this->SightTweakerOverlay = NULL;
    this->SpawnProtectionTime = 5.00f;
    this->bIsThirdPerson = false;
    this->IsPlayingInteraction = false;
    this->bIsStopping = false;
    this->bNVGOn = false;
    this->LadderPlacementZone = NULL;
    this->MoveForwardInput = 0.00f;
    this->MoveRightInput = 0.00f;
    this->LeftFootSocketName = TEXT("foot_LE");
    this->RighttFootSocketName = TEXT("foot_RI");
    this->LeftFootEnum = EFootConstEnum::FCE_Forward;
    this->RightFootEnum = EFootConstEnum::FCE_Forward;
    this->FootAdjustOffset = 3.00f;
    this->FootInterpSpeed = 15.00f;
    this->FootRotationInterpSpeed = 15.00f;
    this->HipInterpSpeed = 10.00f;
    this->TraceDistance = 55.00f;
    this->TraceOffset = 50.00f;
    this->VelocityThreshold = 10.00f;
    this->SpeedBubbleAmount = 0.20f;
    this->bIgnoreRotationOverride = false;
    this->bIsSecondarySightActive = false;
    this->bIsPelvisFPMovementBobActive = false;
    this->PelvisFPMovementDamping = 0.00f;
    this->bCopyTPMeshTransformsToFP = true;
}

