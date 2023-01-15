#include "ReadyOrNotCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SkinnedDecalComponent -ObjectName=SkinnedDecalSampler -FallbackName=SkinnedDecalSampler
#include "CharacterHealthComponent.h"
#include "FMODAudioPropagationComponent.h"
#include "GibComponent.h"
#include "InventoryComponent.h"
#include "InteractableComponent.h"
#include "ItemVisualizationComponent.h"
#include "MapActorComponent.h"
#include "ObjectiveMarkerComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicalAnimationComponent -FallbackName=PhysicalAnimationComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PawnNoiseEmitterComponent -FallbackName=PawnNoiseEmitterComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent

class UObject;
class AActor;
class UPrimitiveComponent;
class UFMODEvent;
class USkeletalMesh;
class AController;
class UMatineeCameraShake;
class ABaseItem;
class UDamageType;
class ABaseMagazineWeapon;
class AReadyOrNotCharacter;
class ACollectedEvidenceActor;
class UPhysicalMaterial;
class ADoor;
class AEvidenceActor;
class UInteractionsData;
class APepperspray;
class APairedInteractionDriver;
class ATaser;
class AZipcuffs;
class UAnimMontage;
class UParticleSystem;

bool AReadyOrNotCharacter::UsingReviveSystem() const {
    return false;
}

void AReadyOrNotCharacter::UpdateOverridesFromCharacterLookOverrideDataTable(const FString& LookOverride) {
}

void AReadyOrNotCharacter::UnlockMovementAndActions() {
}

void AReadyOrNotCharacter::UnlockMovement() {
}

void AReadyOrNotCharacter::UnlockAllActions() {
}

void AReadyOrNotCharacter::UnlockAim() {
}

void AReadyOrNotCharacter::TestPhysicalAnimationComponent() {
}

void AReadyOrNotCharacter::StopTPMontageFromTable_Implementation(const FString& Animation, float BlendoutTime) {
}

void AReadyOrNotCharacter::StopTPMontage(UAnimMontage* AnimMontage, float BlendoutTime) {
}

void AReadyOrNotCharacter::StopTPAnimMontage(UAnimMontage* AnimMontage) {
}

void AReadyOrNotCharacter::StopFPAnimMontage(UAnimMontage* AnimMontage, float BlendoutTime) {
}

void AReadyOrNotCharacter::StartStun(EStunType StunType, AActor* StunCauser) {
}

void AReadyOrNotCharacter::StartPepperSprayed(const FHitResult& Hit, APepperspray* PeppersprayUsed) {
}

void AReadyOrNotCharacter::StartBeingTasered(float PingStunDuration, ATaser* WeaponUsed) {
}

void AReadyOrNotCharacter::SpawnFootstepEffect() {
}

ACollectedEvidenceActor* AReadyOrNotCharacter::SpawnEvidenceCollectionBag(FTransform SpawnTransform) {
    return NULL;
}

void AReadyOrNotCharacter::SpawnBloodPool() {
}

void AReadyOrNotCharacter::Server_Yell_Implementation() {
}
bool AReadyOrNotCharacter::Server_Yell_Validate() {
    return true;
}

void AReadyOrNotCharacter::Server_ThrowArrestedTarget_Implementation(AReadyOrNotCharacter* ArrestedCharacter) {
}
bool AReadyOrNotCharacter::Server_ThrowArrestedTarget_Validate(AReadyOrNotCharacter* ArrestedCharacter) {
    return true;
}

void AReadyOrNotCharacter::Server_StartStun_Implementation(EStunType StunType, AActor* StunCauser) {
}
bool AReadyOrNotCharacter::Server_StartStun_Validate(EStunType StunType, AActor* StunCauser) {
    return true;
}

void AReadyOrNotCharacter::Server_ReportToTOC_Implementation(AActor* Actor, bool bPlayAnimation) {
}
bool AReadyOrNotCharacter::Server_ReportToTOC_Validate(AActor* Actor, bool bPlayAnimation) {
    return true;
}

void AReadyOrNotCharacter::Server_ReportTarget_Implementation(AActor* Character) {
}
bool AReadyOrNotCharacter::Server_ReportTarget_Validate(AActor* Character) {
    return true;
}

void AReadyOrNotCharacter::Server_PlayTOCConversation_Implementation() {
}
bool AReadyOrNotCharacter::Server_PlayTOCConversation_Validate() {
    return true;
}

void AReadyOrNotCharacter::Server_PlayNonLocal3PMontage_Implementation(UAnimMontage* NewMontage) {
}
bool AReadyOrNotCharacter::Server_PlayNonLocal3PMontage_Validate(UAnimMontage* NewMontage) {
    return true;
}

void AReadyOrNotCharacter::Server_Play3PMontage_Implementation(UAnimMontage* NewMontage, float StartTime, float PlayRate) {
}
bool AReadyOrNotCharacter::Server_Play3PMontage_Validate(UAnimMontage* NewMontage, float StartTime, float PlayRate) {
    return true;
}

void AReadyOrNotCharacter::Server_MeleeInteract_Implementation(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
}
bool AReadyOrNotCharacter::Server_MeleeInteract_Validate(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
    return true;
}

void AReadyOrNotCharacter::Server_Kill_Implementation() {
}
bool AReadyOrNotCharacter::Server_Kill_Validate() {
    return true;
}

void AReadyOrNotCharacter::Server_KickQueuedDoor_Implementation() {
}
bool AReadyOrNotCharacter::Server_KickQueuedDoor_Validate() {
    return true;
}

void AReadyOrNotCharacter::Server_KickFailQueuedDoor_Implementation() {
}
bool AReadyOrNotCharacter::Server_KickFailQueuedDoor_Validate() {
    return true;
}

void AReadyOrNotCharacter::Server_KickBreakQueuedDoor_Implementation() {
}
bool AReadyOrNotCharacter::Server_KickBreakQueuedDoor_Validate() {
    return true;
}

void AReadyOrNotCharacter::Server_Interact_PrimaryUse_Implementation(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
}
bool AReadyOrNotCharacter::Server_Interact_PrimaryUse_Validate(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
    return true;
}

void AReadyOrNotCharacter::Server_Interact_Implementation(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
}
bool AReadyOrNotCharacter::Server_Interact_Validate(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
    return true;
}

void AReadyOrNotCharacter::Server_EndInteract_PrimaryUse_Implementation(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
}
bool AReadyOrNotCharacter::Server_EndInteract_PrimaryUse_Validate(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
    return true;
}

void AReadyOrNotCharacter::Server_EndInteract_Implementation(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
}
bool AReadyOrNotCharacter::Server_EndInteract_Validate(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
    return true;
}

void AReadyOrNotCharacter::Server_DropArrestedTarget_Implementation(AReadyOrNotCharacter* ArrestedCharacter) {
}
bool AReadyOrNotCharacter::Server_DropArrestedTarget_Validate(AReadyOrNotCharacter* ArrestedCharacter) {
    return true;
}

void AReadyOrNotCharacter::Server_DoubleTapInteract_Implementation(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
}
bool AReadyOrNotCharacter::Server_DoubleTapInteract_Validate(UObject* Interactable, UInteractableComponent* InInteractableComponent) {
    return true;
}

void AReadyOrNotCharacter::Server_DoMelee_Implementation() {
}
bool AReadyOrNotCharacter::Server_DoMelee_Validate() {
    return true;
}

void AReadyOrNotCharacter::Server_CollectEvidenceActor_Implementation(AEvidenceActor* InEvidenceActor) {
}
bool AReadyOrNotCharacter::Server_CollectEvidenceActor_Validate(AEvidenceActor* InEvidenceActor) {
    return true;
}

void AReadyOrNotCharacter::Server_CollectEvidence_Implementation(ABaseItem* Item) {
}
bool AReadyOrNotCharacter::Server_CollectEvidence_Validate(ABaseItem* Item) {
    return true;
}

void AReadyOrNotCharacter::Server_ChangeTPMesh_Implementation(USkeletalMesh* Body, USkeletalMesh* Face) {
}
bool AReadyOrNotCharacter::Server_ChangeTPMesh_Validate(USkeletalMesh* Body, USkeletalMesh* Face) {
    return true;
}

void AReadyOrNotCharacter::Server_CarryArrestedTarget_Implementation(AReadyOrNotCharacter* ArrestedCharacter) {
}
bool AReadyOrNotCharacter::Server_CarryArrestedTarget_Validate(AReadyOrNotCharacter* ArrestedCharacter) {
    return true;
}

void AReadyOrNotCharacter::Server_ApplyPointDamage_Implementation(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
}
bool AReadyOrNotCharacter::Server_ApplyPointDamage_Validate(AActor* DamagedActor, float BaseDamage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass) {
    return true;
}

void AReadyOrNotCharacter::ResetPhysicsAsset() {
}

void AReadyOrNotCharacter::ResetHealth() {
}

void AReadyOrNotCharacter::RagdollArrestTarget(AReadyOrNotCharacter* RagdollCharacter) {
}

void AReadyOrNotCharacter::PlayTOCResponse(const FString& Line, bool bIsNetworked, ETOCPriority Priority, bool bCanPrefix, float Delay) {
}

void AReadyOrNotCharacter::PlaySpecificDebugVoiceLine(const FString& Filename) {
}

void AReadyOrNotCharacter::PlayROEViolateTOCResponse() {
}

void AReadyOrNotCharacter::PlayRawVOWithCooldown(const FString& VoiceLine, float Cooldown, const FString& OverrideSpeakerName) {
}

void AReadyOrNotCharacter::PlayRawVO(const FString& VoiceLine, const FString& OverrideSpeakerName, bool bIgnoreIfAlreadyPlaying) {
}

void AReadyOrNotCharacter::PlayRandomDebugVoiceLine(const FString& Line) {
}

void AReadyOrNotCharacter::PlayRandomDebugConversation() {
}

APairedInteractionDriver* AReadyOrNotCharacter::PlayPairedInteraction(UInteractionsData* InteractionData, AActor* Driver, AActor* Slave, ABaseItem* OptionalItem) {
    return NULL;
}

UAnimMontage* AReadyOrNotCharacter::PlayMontageFromTableWithIndex(const FString& Animation, int32 Index) {
    return NULL;
}

UAnimMontage* AReadyOrNotCharacter::PlayMontageFromTable(const FString& Animation) {
    return NULL;
}

void AReadyOrNotCharacter::Play3PMontageDeferred_Implementation(UAnimMontage* Montage, const FString& AnimationName) {
}

void AReadyOrNotCharacter::Play3PMontage(UAnimMontage* NewMontage, float StartTime, float PlayRate) {
}

void AReadyOrNotCharacter::Play1PMontageDeferred_Implementation(UAnimMontage* Montage, const FString& AnimationName) {
}

void AReadyOrNotCharacter::Play1PMontage(UAnimMontage* NewMontage, float PlayRate) {
}

void AReadyOrNotCharacter::PickupEvidence(AActor* InEvidence) {
}

bool AReadyOrNotCharacter::OpenDoor(ADoor* Door, bool bOpenDoor) {
    return false;
}

void AReadyOrNotCharacter::OnYellExecute() {
}

void AReadyOrNotCharacter::OnVoiceAudioStopped() {
}

void AReadyOrNotCharacter::OnRep_Surrendered() {
}

void AReadyOrNotCharacter::OnRep_ReplicatedAcceleration() {
}

void AReadyOrNotCharacter::OnRep_MeshReplicated() {
}

void AReadyOrNotCharacter::OnRep_CurrentRagdollArrestCharacterChanged() {
}

void AReadyOrNotCharacter::OnRep_CurrentCarryCharacterChanged() {
}

void AReadyOrNotCharacter::OnRep_ControlRotation() {
}

void AReadyOrNotCharacter::OnRep_CharacterLookOverride() {
}

void AReadyOrNotCharacter::OnRep_ActiveRagdollPhysAsset() {
}

void AReadyOrNotCharacter::OnMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AReadyOrNotCharacter::OnKilled(AReadyOrNotCharacter* InstigatorCharacter) {
}

void AReadyOrNotCharacter::OnItemHolstered(ABaseItem* HolsteredItem) {
}

void AReadyOrNotCharacter::OnItemEquipped(ABaseItem* NewEquippedItem) {
}

void AReadyOrNotCharacter::OnIncapacitated(AReadyOrNotCharacter* InstigatorCharacter) {
}

void AReadyOrNotCharacter::OnHealthDepleted() {
}

void AReadyOrNotCharacter::OnEquippedWeaponMagCheck(ABaseMagazineWeapon* Weapon) {
}

void AReadyOrNotCharacter::OnEquippedWeaponFire(ABaseMagazineWeapon* Weapon, bool bServer) {
}

void AReadyOrNotCharacter::OnEquippedWeaponDryFire(ABaseMagazineWeapon* Weapon, bool bServer) {
}

void AReadyOrNotCharacter::OnDismembermentParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) {
}

void AReadyOrNotCharacter::OnDeadHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AReadyOrNotCharacter::OnCarryThrowComplete_Slave(AActor* Slave) {
}

void AReadyOrNotCharacter::OnCarryThrowComplete_Driver(AActor* Driver) {
}

void AReadyOrNotCharacter::OnCarryThrowComplete(AActor* Driver, AActor* Slave) {
}

void AReadyOrNotCharacter::OnCarryPickupComplete_Slave(AActor* Slave) {
}

void AReadyOrNotCharacter::OnCarryPickupComplete_Driver(AActor* Driver) {
}

void AReadyOrNotCharacter::OnCarryPickupComplete(AActor* Driver, AActor* Slave) {
}

void AReadyOrNotCharacter::OnCarryDropComplete_Slave(AActor* Slave) {
}

void AReadyOrNotCharacter::OnCarryDropComplete_Driver(AActor* Driver) {
}

void AReadyOrNotCharacter::OnCarryDropComplete(AActor* Driver, AActor* Slave) {
}

void AReadyOrNotCharacter::OnArteryBleedParticleCollision(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat) {
}

void AReadyOrNotCharacter::OnActorSpawned(AActor* Actor) {
}

void AReadyOrNotCharacter::Multicast_TakeDamage_Implementation(float Damage, const FDamageEvent& DamageEvent, AReadyOrNotCharacter* InstigatorCharacter, AActor* DamageCauser) {
}

void AReadyOrNotCharacter::Multicast_Stop3PMontage_Implementation(UAnimMontage* Montage, float BlendoutTime) {
}

void AReadyOrNotCharacter::Multicast_Stop1PMontage_Implementation(UAnimMontage* Montage, float BlendoutTime) {
}

void AReadyOrNotCharacter::Multicast_SpawnDismembermentEffects_Implementation(EGibAreas GibArea, FHitResult HitResult) {
}

void AReadyOrNotCharacter::Multicast_SpawnBloodEffects_Implementation(FHitResult Hit, float WoundSize) {
}

void AReadyOrNotCharacter::Multicast_SpawnArterialBloodEffects_Implementation(FHitResult HitResult, FName Artery) {
}

void AReadyOrNotCharacter::Multicast_SavePoseSnapshot_Implementation(const FName& SnapshotName) {
}

void AReadyOrNotCharacter::Multicast_PlayRawVO_Implementation(const FString& SpecificFileName, const FString& OverrideSpeakerName, bool bIgnoreIfAlreadyPlaying) {
}

void AReadyOrNotCharacter::Multicast_PlayNonLocal3PMontage_Implementation(UAnimMontage* NewMontage) {
}

void AReadyOrNotCharacter::Multicast_PlayMeleeImpactEffects_Implementation(UFMODEvent* ImpactSound, UParticleSystem* ImpactParticle) {
}

void AReadyOrNotCharacter::Multicast_PlayDeathAnimation_Implementation(UAnimMontage* Montage) {
}

void AReadyOrNotCharacter::Multicast_Play3PMontage_Implementation(UAnimMontage* NewMontage, float StartTime, float PlayRate) {
}

void AReadyOrNotCharacter::Multicast_PauseAllAnims_Implementation(bool bPaused) {
}

void AReadyOrNotCharacter::Multicast_OnTargetReported_Implementation() {
}

void AReadyOrNotCharacter::Multicast_OnKilled_Implementation(FName LastBoneHit, AActor* DamageCauser) {
}

void AReadyOrNotCharacter::Multicast_OnIncapacitated_Implementation(FName LastBone) {
}

void AReadyOrNotCharacter::Multicast_OnExplosiveVestDetonation_Implementation() {
}

void AReadyOrNotCharacter::Multicast_InflictSuppression_Implementation(float Strength, TSubclassOf<UMatineeCameraShake> CameraShake, bool bLessLethal) {
}

void AReadyOrNotCharacter::Multicast_EnableRagdollBlendIn_Implementation() {
}

void AReadyOrNotCharacter::Multicast_EnableRagdoll_Implementation(float Duration) {
}

void AReadyOrNotCharacter::Multicast_DisableRagdoll_Implementation() {
}

void AReadyOrNotCharacter::Multicast_ChangeFaceEmotion_Implementation(ECharacterEmotion NewEmotion, float OverrideTime, float Blend, float BlendDecay, int32 Priority) {
}

void AReadyOrNotCharacter::Multicast_AddMoveIgnoreActor_Implementation(AReadyOrNotCharacter* MoveIgnoreCharacter, bool bAdd) {
}

void AReadyOrNotCharacter::MeshMerge() {
}

void AReadyOrNotCharacter::LockMovementAndActions() {
}

void AReadyOrNotCharacter::LockMovement() {
}

void AReadyOrNotCharacter::LockAllActions() {
}

void AReadyOrNotCharacter::LockAim() {
}

void AReadyOrNotCharacter::Kill() {
}

void AReadyOrNotCharacter::KickDoor(ADoor* Door) {
}

bool AReadyOrNotCharacter::IsUpperBodyMontagePlaying() const {
    return false;
}

bool AReadyOrNotCharacter::IsUnconsciousNotDead() const {
    return false;
}

bool AReadyOrNotCharacter::IsTableMontagePlayingWithTimeRemaining(const FString& Animation, float& TimeRemaining) const {
    return false;
}

bool AReadyOrNotCharacter::IsTableMontagePlaying(const FString& Animation) const {
    return false;
}

bool AReadyOrNotCharacter::IsTableMontage(UAnimMontage* Montage) const {
    return false;
}

bool AReadyOrNotCharacter::IsSuspect() const {
    return false;
}

bool AReadyOrNotCharacter::IsSurrenderedFor(const float Seconds) const {
    return false;
}

bool AReadyOrNotCharacter::IsSurrendered() const {
    return false;
}

bool AReadyOrNotCharacter::IsSurrenderComplete() const {
    return false;
}

bool AReadyOrNotCharacter::IsStunnedWith(EStunType StunType) const {
    return false;
}

bool AReadyOrNotCharacter::IsStunned() const {
    return false;
}

bool AReadyOrNotCharacter::IsStartling() const {
    return false;
}

bool AReadyOrNotCharacter::IsSpeechTimerActive() const {
    return false;
}

bool AReadyOrNotCharacter::IsReviveHealthDepleted() const {
    return false;
}

bool AReadyOrNotCharacter::IsRelevant() const {
    return false;
}

bool AReadyOrNotCharacter::IsRagdollBlending() const {
    return false;
}

bool AReadyOrNotCharacter::IsPlayingRootMotionFromMontage() const {
    return false;
}

bool AReadyOrNotCharacter::IsPlayingNonInterruptibleMontage(const FString& MontageNameTryingToBePlayed) const {
    return false;
}

bool AReadyOrNotCharacter::IsPlayingCarryAnims() const {
    return false;
}

bool AReadyOrNotCharacter::IsOutside() {
    return false;
}

bool AReadyOrNotCharacter::IsOutlineEnabled(EActorOutlineType OutlineType) {
    return false;
}

bool AReadyOrNotCharacter::IsOnSWATTeam() const {
    return false;
}

bool AReadyOrNotCharacter::IsOnSameTeam(AReadyOrNotCharacter* A, AReadyOrNotCharacter* B) {
    return false;
}

bool AReadyOrNotCharacter::IsMontageSlotPlaying(FName SlotName) const {
    return false;
}

bool AReadyOrNotCharacter::IsLowHealth() const {
    return false;
}

bool AReadyOrNotCharacter::IsLocalPlayer() const {
    return false;
}

bool AReadyOrNotCharacter::IsLoadingTableMontage() const {
    return false;
}

bool AReadyOrNotCharacter::IsLimbHit(ELimbType Limb) const {
    return false;
}

bool AReadyOrNotCharacter::IsLimbBroken(ELimbType Limb) const {
    return false;
}

bool AReadyOrNotCharacter::IsInRagdoll() const {
    return false;
}

bool AReadyOrNotCharacter::IsInjured() const {
    return false;
}

bool AReadyOrNotCharacter::IsIncapacitated() const {
    return false;
}

bool AReadyOrNotCharacter::IsHealthDepleted() const {
    return false;
}

bool AReadyOrNotCharacter::IsHalfHealth() const {
    return false;
}

bool AReadyOrNotCharacter::IsGettingUp() const {
    return false;
}

bool AReadyOrNotCharacter::IsFullHealth() const {
    return false;
}

bool AReadyOrNotCharacter::IsFullBodyMontagePlaying() const {
    return false;
}

bool AReadyOrNotCharacter::IsDropping() const {
    return false;
}

bool AReadyOrNotCharacter::IsDowned() const {
    return false;
}

bool AReadyOrNotCharacter::IsDeadOrUnconscious() const {
    return false;
}

bool AReadyOrNotCharacter::IsDeadNotUnconscious() const {
    return false;
}

bool AReadyOrNotCharacter::IsCurrentlyTased() const {
    return false;
}

bool AReadyOrNotCharacter::IsCurrentlyStung() {
    return false;
}

bool AReadyOrNotCharacter::IsCurrentlySprayed() {
    return false;
}

bool AReadyOrNotCharacter::IsCurrentlyGassed() const {
    return false;
}

bool AReadyOrNotCharacter::IsCurrentlyFlashed() {
    return false;
}

bool AReadyOrNotCharacter::IsCivilian() const {
    return false;
}

bool AReadyOrNotCharacter::IsCarrying() const {
    return false;
}

bool AReadyOrNotCharacter::IsCarried() const {
    return false;
}

bool AReadyOrNotCharacter::IsBeingThrown() const {
    return false;
}

bool AReadyOrNotCharacter::IsBeingCarried() const {
    return false;
}

bool AReadyOrNotCharacter::IsBeingArrested() const {
    return false;
}

bool AReadyOrNotCharacter::IsArrestedOrSurrendered() const {
    return false;
}

bool AReadyOrNotCharacter::IsArrestedAndDead() const {
    return false;
}

bool AReadyOrNotCharacter::IsArrested() const {
    return false;
}

bool AReadyOrNotCharacter::IsAnyTableMontagePlaying(FString& OutMontage) const {
    return false;
}

bool AReadyOrNotCharacter::IsAnyLimbHit() const {
    return false;
}

bool AReadyOrNotCharacter::IsAnimationBlocking() const {
    return false;
}

bool AReadyOrNotCharacter::IsAffectedByDamageTypeClass(TSubclassOf<UDamageType> DamageType) const {
    return false;
}

bool AReadyOrNotCharacter::IsAffectedByDamageType(const UDamageType* DamageType) const {
    return false;
}

bool AReadyOrNotCharacter::IsActiveForMovement() const {
    return false;
}

bool AReadyOrNotCharacter::IsActive() const {
    return false;
}

bool AReadyOrNotCharacter::Is3PMontagePlaying(const UAnimMontage* Montage) const {
    return false;
}

void AReadyOrNotCharacter::IncreaseHealth(float Amount) {
}

bool AReadyOrNotCharacter::HasRecentlyTakenStunDamage(const float Tolerance) const {
    return false;
}

bool AReadyOrNotCharacter::HasRecentlyTakenDamage(const float Tolerance) const {
    return false;
}

bool AReadyOrNotCharacter::HasLineOfSightTo(const FVector& Location) const {
    return false;
}

bool AReadyOrNotCharacter::HasEverBeenStunned() const {
    return false;
}

bool AReadyOrNotCharacter::HasBeenSpottedBySwat() const {
    return false;
}

bool AReadyOrNotCharacter::HasBeenReported() const {
    return false;
}

float AReadyOrNotCharacter::GetTimeSinceLastStun() const {
    return 0.0f;
}

float AReadyOrNotCharacter::GetTimeSinceLastBulletDamage() const {
    return 0.0f;
}

ETeamType AReadyOrNotCharacter::GetTeam() const {
    return ETeamType::TT_NONE;
}

TArray<FString> AReadyOrNotCharacter::GetTableMontageQueue() const {
    return TArray<FString>();
}

FString AReadyOrNotCharacter::GetSpeechCharacterName() const {
    return TEXT("");
}

float AReadyOrNotCharacter::GetSpeakCooldown() const {
    return 0.0f;
}

TArray<ABaseItem*> AReadyOrNotCharacter::GetRemovedItems() const {
    return TArray<ABaseItem*>();
}

UAnimMontage* AReadyOrNotCharacter::GetMontageFromTableWithIndex(const FString& Animation, int32 Index) const {
    return NULL;
}

UAnimMontage* AReadyOrNotCharacter::GetMontageFromTable(const FString& Animation) const {
    return NULL;
}

int32 AReadyOrNotCharacter::GetMontageAnimCountFromTable(const FString& Animation) const {
    return 0;
}

float AReadyOrNotCharacter::GetMaxHealth() const {
    return 0.0f;
}

FLimbHealthData AReadyOrNotCharacter::GetLimbHealth(ELimbType Limb) const {
    return FLimbHealthData{};
}

FString AReadyOrNotCharacter::GetLastTableMontagePlayed() const {
    return TEXT("");
}

EPlayerHealthStatus AReadyOrNotCharacter::GetHealthStatus() const {
    return EPlayerHealthStatus::HS_Healthy;
}

UCharacterHealthComponent* AReadyOrNotCharacter::GetHealthComponent() const {
    return NULL;
}

void AReadyOrNotCharacter::GetFMODFootstepParameters(int32& Stance, int32& Speed, int32& Surface) {
}

ABaseItem* AReadyOrNotCharacter::GetEquippedItem() const {
    return NULL;
}

float AReadyOrNotCharacter::GetDeltaRotationToCharacter(AReadyOrNotCharacter* Character) {
    return 0.0f;
}

EAnimWeaponType AReadyOrNotCharacter::GetCurrentWeaponAnimType() const {
    return EAnimWeaponType::CWT_Unarmed;
}

float AReadyOrNotCharacter::GetCurrentStunTime() const {
    return 0.0f;
}

float AReadyOrNotCharacter::GetCurrentStunDuration() const {
    return 0.0f;
}

float AReadyOrNotCharacter::GetCurrentReviveTime() const {
    return 0.0f;
}

float AReadyOrNotCharacter::GetCurrentReviveHealth() const {
    return 0.0f;
}

float AReadyOrNotCharacter::GetCurrentHealth() const {
    return 0.0f;
}

TArray<UPrimitiveComponent*> AReadyOrNotCharacter::GetCollisionIgnoredComponents() const {
    return TArray<UPrimitiveComponent*>();
}

TArray<AActor*> AReadyOrNotCharacter::GetCollisionIgnoredActors() const {
    return TArray<AActor*>();
}

void AReadyOrNotCharacter::ForceMeshUsingOverride_Implementation(USkeletalMesh* InFPMesh, USkeletalMesh* InTPMesh, USkeletalMesh* InFaceMesh) {
}

void AReadyOrNotCharacter::EndStun(EStunType StunType) {
}

void AReadyOrNotCharacter::EndEvidenceCollection_COOP(UInteractableComponent* CollectionInteractableComp) {
}

void AReadyOrNotCharacter::EnableRagdoll(float Duration) {
}

void AReadyOrNotCharacter::EnableOutline(EActorOutlineType OutlineType) {
}

bool AReadyOrNotCharacter::DoesMontageFromTableExist(const FString& Animation) const {
    return false;
}

void AReadyOrNotCharacter::DisableRagdoll() {
}

void AReadyOrNotCharacter::DisableOutline() {
}

void AReadyOrNotCharacter::DepleteHealth() {
}

void AReadyOrNotCharacter::DecreaseHealth(float Amount) {
}

bool AReadyOrNotCharacter::DamageHitHead(const FPointDamageEvent& DamageEvent) {
    return false;
}

void AReadyOrNotCharacter::CompleteEvidenceCollection_COOP(AActor* InEvidenceActor) {
}

void AReadyOrNotCharacter::CollectPendingEvidence() {
}

void AReadyOrNotCharacter::Client_SetControlRotation_Implementation(FRotator NewRotation) {
}

void AReadyOrNotCharacter::Client_PlayScreenShake_Implementation(TSubclassOf<UMatineeCameraShake> CameraShake) {
}

void AReadyOrNotCharacter::Client_PlayMeleeImpactEffects_Implementation() {
}

void AReadyOrNotCharacter::Client_PlayFMODEvent2D_Implementation(UFMODEvent* Event) {
}

void AReadyOrNotCharacter::Client_Play1PMontage_Implementation(UAnimMontage* NewMontage, float PlayRate) {
}

void AReadyOrNotCharacter::Client_OnBoneDamaged_Implementation(const FName& BoneHit) {
}

void AReadyOrNotCharacter::Client_OnBodyPartDamaged_Implementation(bool bInHeadHit, bool bInBodyHit, bool bInLeftArmHit, bool bInRightArmHit, bool bInLeftLegHit, bool bInRightLegHit, bool bInLeftFootHit, bool bInRightFootHit) {
}

bool AReadyOrNotCharacter::CanYell() const {
    return false;
}

bool AReadyOrNotCharacter::CanMelee() const {
    return false;
}

bool AReadyOrNotCharacter::CanDropCharacter(AReadyOrNotCharacter* CharacterToDrop) const {
    return false;
}

void AReadyOrNotCharacter::CancelArrest(AReadyOrNotCharacter* PlayerMakingArrest) {
}

bool AReadyOrNotCharacter::CanCarryCharacter(AReadyOrNotCharacter* CharacterToPickup) const {
    return false;
}

bool AReadyOrNotCharacter::CanBePickedUp() const {
    return false;
}

bool AReadyOrNotCharacter::CanArrestRagdoll() const {
    return false;
}

bool AReadyOrNotCharacter::CanArrest() const {
    return false;
}

void AReadyOrNotCharacter::CacheIsOutside() {
}

void AReadyOrNotCharacter::BeginEvidenceCollection_COOP(AActor* InEvidenceActor, UInteractableComponent* CollectionInteractableComp, float CollectionTime) {
}

void AReadyOrNotCharacter::ArrestComplete(AReadyOrNotCharacter* PlayerMakingArrest, AZipcuffs* Zipcuffs) {
}

void AReadyOrNotCharacter::Arrest(AReadyOrNotCharacter* PlayerMakingArrest) {
}

void AReadyOrNotCharacter::ApplyDamageToBone(float& Damage, const FName& HitBone, const FPointDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

bool AReadyOrNotCharacter::AnyBodyPartHit() const {
    return false;
}

void AReadyOrNotCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReadyOrNotCharacter, CharacterHealth);
    DOREPLIFETIME(AReadyOrNotCharacter, PhysicalAnimationComp);
    DOREPLIFETIME(AReadyOrNotCharacter, ReplicatedControlRotation);
    DOREPLIFETIME(AReadyOrNotCharacter, bBlendInPhysics);
    DOREPLIFETIME(AReadyOrNotCharacter, bStartBlendInIncapacitation);
    DOREPLIFETIME(AReadyOrNotCharacter, bBlendInIncapacitation);
    DOREPLIFETIME(AReadyOrNotCharacter, IncapacitationBlendTime);
    DOREPLIFETIME(AReadyOrNotCharacter, IncapacitationBlendOutTime);
    DOREPLIFETIME(AReadyOrNotCharacter, IncapacitationLoopAnim);
    DOREPLIFETIME(AReadyOrNotCharacter, BlendInterpAmount);
    DOREPLIFETIME(AReadyOrNotCharacter, KilledBy);
    DOREPLIFETIME(AReadyOrNotCharacter, IncapacitatedBy);
    DOREPLIFETIME(AReadyOrNotCharacter, DeathReason);
    DOREPLIFETIME(AReadyOrNotCharacter, bLowReadyPointUp);
    DOREPLIFETIME(AReadyOrNotCharacter, bLowReadyPointDown);
    DOREPLIFETIME(AReadyOrNotCharacter, bIsCrouching);
    DOREPLIFETIME(AReadyOrNotCharacter, DefaultTeam);
    DOREPLIFETIME(AReadyOrNotCharacter, Rep_CarryArrestedAnimState);
    DOREPLIFETIME(AReadyOrNotCharacter, bSurrendered);
    DOREPLIFETIME(AReadyOrNotCharacter, bSurrenderComplete);
    DOREPLIFETIME(AReadyOrNotCharacter, bOrderedToRotateForArrest);
    DOREPLIFETIME(AReadyOrNotCharacter, bIsBeingCarried);
    DOREPLIFETIME(AReadyOrNotCharacter, CarriedByCharacter);
    DOREPLIFETIME(AReadyOrNotCharacter, PendingCarryCharacter);
    DOREPLIFETIME(AReadyOrNotCharacter, CurrentCarryCharacter);
    DOREPLIFETIME(AReadyOrNotCharacter, CurrentCarryConfirmTime);
    DOREPLIFETIME(AReadyOrNotCharacter, CurrentRagdollArrestConfirmTime);
    DOREPLIFETIME(AReadyOrNotCharacter, PendingRagdollArrestCharacter);
    DOREPLIFETIME(AReadyOrNotCharacter, CurrentRagdollArrestCharacter);
    DOREPLIFETIME(AReadyOrNotCharacter, bIsBeingArrested);
    DOREPLIFETIME(AReadyOrNotCharacter, bArrestComplete);
    DOREPLIFETIME(AReadyOrNotCharacter, bArrestedAsRagdoll);
    DOREPLIFETIME(AReadyOrNotCharacter, bArrestedAsRagdoll_Flipped);
    DOREPLIFETIME(AReadyOrNotCharacter, bIsPairedInteractionPlaying);
    DOREPLIFETIME(AReadyOrNotCharacter, bPrimed);
    DOREPLIFETIME(AReadyOrNotCharacter, bOverarmThrow);
    DOREPLIFETIME(AReadyOrNotCharacter, bIsStrafing);
    DOREPLIFETIME(AReadyOrNotCharacter, Rep_CharacterLookOverride);
    DOREPLIFETIME(AReadyOrNotCharacter, Rep_BodyMesh);
    DOREPLIFETIME(AReadyOrNotCharacter, Rep_FaceMesh);
    DOREPLIFETIME(AReadyOrNotCharacter, Rep_FPMesh);
    DOREPLIFETIME(AReadyOrNotCharacter, SpeechCharacterName);
    DOREPLIFETIME(AReadyOrNotCharacter, bHasBeenReported);
    DOREPLIFETIME(AReadyOrNotCharacter, bBodyHit);
    DOREPLIFETIME(AReadyOrNotCharacter, bRightFootHit);
    DOREPLIFETIME(AReadyOrNotCharacter, bLeftFootHit);
    DOREPLIFETIME(AReadyOrNotCharacter, bBlockedByBodyArmor);
    DOREPLIFETIME(AReadyOrNotCharacter, bBlockedByHeadArmor);
    DOREPLIFETIME(AReadyOrNotCharacter, DamagedByWeapons);
    DOREPLIFETIME(AReadyOrNotCharacter, bRepStunned);
    DOREPLIFETIME(AReadyOrNotCharacter, RepStunnedWith);
    DOREPLIFETIME(AReadyOrNotCharacter, bHasEverBeenStunned);
    DOREPLIFETIME(AReadyOrNotCharacter, DamagedByCharacters);
    DOREPLIFETIME(AReadyOrNotCharacter, bMovementLocked);
    DOREPLIFETIME(AReadyOrNotCharacter, bAimLocked);
    DOREPLIFETIME(AReadyOrNotCharacter, bActionsLocked);
    DOREPLIFETIME(AReadyOrNotCharacter, LastKickedDoor);
    DOREPLIFETIME(AReadyOrNotCharacter, Rep_ActiveRagdollPhysAsset);
    DOREPLIFETIME(AReadyOrNotCharacter, ReplicatedAcceleration);
    DOREPLIFETIME(AReadyOrNotCharacter, ReplicatedMaxSpeed);
}

AReadyOrNotCharacter::AReadyOrNotCharacter() {
    this->MeshGearSlot = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshGearSlot"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->PlayerMarkerComponent = CreateDefaultSubobject<UObjectiveMarkerComponent>(TEXT("Player Marker Component"));
    this->PrimaryItemVisualizationComponent = CreateDefaultSubobject<UItemVisualizationComponent>(TEXT("PrimaryItemVisualization"));
    this->SecondaryItemVisualizationComponent = CreateDefaultSubobject<UItemVisualizationComponent>(TEXT("SecondaryItemVisualization"));
    this->LongTacticalVisualizationComponent = CreateDefaultSubobject<UItemVisualizationComponent>(TEXT("LongTacticalVisualizationComponent"));
    this->HelmetVisualizationComponent = CreateDefaultSubobject<UItemVisualizationComponent>(TEXT("HelmetVisualizationComponent"));
    this->EquippedItemVisualizationComponent = CreateDefaultSubobject<UItemVisualizationComponent>(TEXT("EquippedVisualizationComponent"));
    this->FaceMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FaceMesh"));
    this->MapActorComponent = CreateDefaultSubobject<UMapActorComponent>(TEXT("Map Actor Component"));
    this->FMODAudioPropagationComp = CreateDefaultSubobject<UFMODAudioPropagationComponent>(TEXT("FMODAudioPropagationComponent"));
    this->FMODVoiceAudioComp = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODAudioComp"));
    this->CharacterHealth = CreateDefaultSubobject<UCharacterHealthComponent>(TEXT("CharacterHealthComponent"));
    this->InventoryComp = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComp"));
    this->NoiseEmitter = CreateDefaultSubobject<UPawnNoiseEmitterComponent>(TEXT("NoiseEmitter"));
    this->PerceptionStimuliComp = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionComp"));
    this->GibComponent = CreateDefaultSubobject<UGibComponent>(TEXT("GibComponent"));
    this->PhysicalAnimationComp = CreateDefaultSubobject<UPhysicalAnimationComponent>(TEXT("Physical Animation"));
    this->SkinnedDecalSampler = CreateDefaultSubobject<USkinnedDecalSampler>(TEXT("SkinnedDecalSampler"));
    this->ThrownItem = NULL;
    this->bBulletForceTransferred = true;
    this->MinimumBodyFallImpulse = 750.00f;
    this->MaxRagdollSounds = 3;
    this->RagdollSoundsPlayed = 0;
    this->BodyFallEvent = NULL;
    this->bInRagdoll = false;
    this->bBlendInPhysics = false;
    this->bStartBlendInIncapacitation = false;
    this->bBlendInIncapacitation = false;
    this->IncapacitationBlendTime = 0.00f;
    this->IncapacitationBlendOutTime = 0.00f;
    this->IncapacitationLoopAnim = NULL;
    this->BlendInterpAmount = 0.00f;
    this->FinalBlendInTime = 1.00f;
    this->BlendInAfterStartOfAnim = 1.00f;
    this->bIsPreviewCharacter = false;
    this->ArrestedBy = NULL;
    this->KilledBy = NULL;
    this->IncapacitatedBy = NULL;
    this->DeathReason = ECharacterDeathReason::None;
    this->HeadBones.AddDefaulted(4);
    this->UpperBody.AddDefaulted(2);
    this->LowerBody.AddDefaulted(4);
    this->R_Leg.AddDefaulted(5);
    this->L_Leg.AddDefaulted(5);
    this->L_Foot.AddDefaulted(2);
    this->R_Foot.AddDefaulted(2);
    this->L_Arm.AddDefaulted(8);
    this->R_Arm.AddDefaulted(8);
    this->L_Hand.AddDefaulted(24);
    this->R_Hand.AddDefaulted(24);
    this->bLowReadyPointUp = false;
    this->bLowReadyPointDown = false;
    this->LowReadyDistance = 339999995214436424907732413799364296704.00f;
    this->bIsCrouching = false;
    this->SquadPosition = ESquadPosition::SP_Alpha;
    this->DefaultTeam = ETeamType::TT_NONE;
    this->FPMeleeImpactFMODEvent = NULL;
    this->TPMeleeImpactFMODEvent = NULL;
    this->MeleeImpactParticle = NULL;
    this->MeleeCameraShake = NULL;
    this->MeleeRange = 85.00f;
    this->MeleeDamage = 5.00f;
    this->bSurrendered = false;
    this->bSurrenderComplete = false;
    this->bOrderedToRotateForArrest = false;
    this->PlacedZipcuffs = NULL;
    this->SpawnedZipcuffsClass = NULL;
    this->SpawnedFPZipcuffsClass = NULL;
    this->bIsBeingCarried = false;
    this->CarriedByCharacter = NULL;
    this->ThrownByCharacter = NULL;
    this->PendingCarryCharacter = NULL;
    this->CurrentCarryCharacter = NULL;
    this->FakeCarryCharacterMesh = NULL;
    this->CurrentCarryConfirmTime = 0.00f;
    this->CarryMasterIdleLoop = NULL;
    this->CarrySlaveIdleLoop = NULL;
    this->MaxCarryConfirmTime = 0.50f;
    this->LastCharacterMakingArrest = NULL;
    this->CurrentlyArresting = NULL;
    this->MaxRagdollArrestConfirmTime = 0.50f;
    this->CurrentRagdollArrestConfirmTime = 0.00f;
    this->PendingRagdollArrestCharacter = NULL;
    this->CurrentRagdollArrestCharacter = NULL;
    this->bIsBeingArrested = false;
    this->bArrestComplete = false;
    this->bArrestedAsRagdoll = false;
    this->bArrestedAsRagdoll_Flipped = false;
    this->bIsPairedInteractionPlaying = false;
    this->bNoTeamDamage = false;
    this->bPrimed = false;
    this->bOverarmThrow = false;
    this->bIsStrafing = false;
    this->Rep_BodyMesh = NULL;
    this->Rep_FaceMesh = NULL;
    this->Rep_FPMesh = NULL;
    this->CurrentFaceROM = NULL;
    this->AnimationBlockingTime = 0.00f;
    this->TOCManager = NULL;
    this->ReportToTOC_PVP_CameraShake = NULL;
    this->bHasBeenReported = false;
    this->SpeakCooldown = 0.00f;
    this->ReportPlayerDeadFMODEvent = NULL;
    this->ReportPlayerArrestedFMODEvent = NULL;
    this->ReportPlayerGeneralFMODEvent = NULL;
    this->bBodyHit = false;
    this->bRightFootHit = false;
    this->bLeftFootHit = false;
    this->bBlockedByBodyArmor = false;
    this->bBlockedByHeadArmor = false;
    this->GasDamageAccumulated = 0.00f;
    this->GasDamageDecay = 0.02f;
    this->bGodMode = false;
    this->bNoTarget = false;
    this->ArmorImpactEffect = NULL;
    this->Blood = NULL;
    this->bRepStunned = false;
    this->RepStunnedWith = EStunType::ST_None;
    this->bHasEverBeenStunned = false;
    this->PendingEvidence = NULL;
    this->bIsCollectingEvidence = false;
    this->bCollectionAnimHasTriggered = false;
    this->CollectingLoopAnim1P = NULL;
    this->CollectingLoopAnim3P = NULL;
    this->CollectedEvidenceClass = NULL;
    this->Reward = NULL;
    this->CurrentEmotion = ECharacterEmotion::None;
    this->FacialAnimationOverrideTime = 0.00f;
    this->FacialAnimationBlend = 0.00f;
    this->FacialAnimationBlendTarget = 0.00f;
    this->FacialAnimationBlendDecay = 0.20f;
    this->FacialAnimationPriority = 0;
    this->bMovementLocked = false;
    this->bAimLocked = false;
    this->bActionsLocked = false;
    this->QueuedDoorToOpen = NULL;
    this->QueuedDoorToClose = NULL;
    this->LastKickedDoor = NULL;
    this->DoorKickInteractionFront = NULL;
    this->DoorKickInteractionBack = NULL;
    this->DoorKickFailureInteractionFront = NULL;
    this->DoorKickFailureInteractionBack = NULL;
    this->DoorKickBreakInteractionFront = NULL;
    this->DoorKickBreakInteractionBack = NULL;
    this->CarryArrestedInteractionData = NULL;
    this->DropArrestedInteractionData = NULL;
    this->ThrowArrestedInteractionData = NULL;
    this->bShouldPlayFootstepFoley = false;
    this->bPlayEveryStep = false;
    this->FootstepImpactEffectFast = NULL;
    this->FootstepImpactEffectSlow = NULL;
    this->CurrentFootstepFoleyEvent = NULL;
    this->CurrentFootstepFoleyEventRemote = NULL;
    this->FootstepsLocal = NULL;
    this->FootstepsRemote = NULL;
    this->DefaultRagdollPhysAsset = NULL;
    this->DefaultAlivePhysAsset = NULL;
    this->CuffedRagdollPhysAsset = NULL;
    this->Rep_ActiveRagdollPhysAsset = NULL;
    this->NeutralizeSuspectTag = NULL;
    this->CurrentDeathMontage = NULL;
    this->bPlayingDeathMontage = false;
    this->bStartedPlayingDeath = false;
    this->ReplicatedMaxSpeed = 0.00f;
    this->bIsBlendRagdollNotifyActive = false;
    this->FootstepOcclusionMultiplier = 1.00f;
    this->FootstepFullOcclusionDepth = 150.00f;
}

