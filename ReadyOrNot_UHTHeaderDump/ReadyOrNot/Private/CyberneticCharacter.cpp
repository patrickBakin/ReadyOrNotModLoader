#include "CyberneticCharacter.h"
#include "Net/UnrealNetwork.h"
#include "ScoringComponent.h"
#include "RoNMoveStyleComponent.h"

class UAIArchetypeData;
class ABaseArmour;
class ABaseItem;
class UDamageType;
class ABaseMagazineWeapon;
class ACyberneticController;
class AReadyOrNotCharacter;
class APlayerCharacter;
class UAnimMontage;

bool ACyberneticCharacter::WasRecentlyYelledAt(const float Seconds) const {
    return false;
}

void ACyberneticCharacter::UpdateDefaultMoveStyle() {
}

bool ACyberneticCharacter::SurrenderExit(ESurrenderExitType ExitType, FVector FocalPoint) {
    return false;
}

void ACyberneticCharacter::Surrender() {
}

void ACyberneticCharacter::StopPlayingDead() {
}

void ACyberneticCharacter::PlayShootingWeaponConversation() {
}

bool ACyberneticCharacter::PlayMontageWithFocalPoint(UAnimMontage* Montage, const FVector& FocalPoint) {
    return false;
}

UAnimMontage* ACyberneticCharacter::PlayMontageFromTableWithIndexWithFocalPoint(const FString& Animation, int32 Index, const FVector& FocalPoint) {
    return NULL;
}

UAnimMontage* ACyberneticCharacter::PlayMontageFromTableWithFocalPoint(const FString& Animation, const FVector& FocalPoint) {
    return NULL;
}

void ACyberneticCharacter::PlayDead(float Duration, const bool bPlayVO) {
}

void ACyberneticCharacter::PlayBarkOrStartConversation(const FString& SpeechRow, bool bHasSharedCooldown, float Cooldown) {
}

void ACyberneticCharacter::OnRep_SimulatingAttachedStaticMeshes() {
}

void ACyberneticCharacter::OnRep_CharacterMeshData() {
}

void ACyberneticCharacter::OnRep_AttachedSkeletalMeshData() {
}

void ACyberneticCharacter::OnRep_AttachedMeshData() {
}

void ACyberneticCharacter::OnOfficerShouted_Implementation(AReadyOrNotCharacter* Shouter, bool bLOS) {
}

void ACyberneticCharacter::OnGetupAfterRagdollComplete() {
}

void ACyberneticCharacter::Multicast_SendCharacterMeshData_Implementation(FCharacterMesh RPC_CharacterMeshData) {
}

void ACyberneticCharacter::Multicast_PlayArmourHitEffects_Implementation(ABaseArmour* Armour, FHitResult Hit) {
}

void ACyberneticCharacter::Knockout(float Duration, bool bPlayVO) {
}

bool ACyberneticCharacter::IsWearingHeadArmor() const {
    return false;
}

bool ACyberneticCharacter::IsWearingExplosiveVest() const {
    return false;
}

bool ACyberneticCharacter::IsUnjustifiedUseOfForce(AReadyOrNotCharacter* Aggressor, ABaseItem* ForceWeapon, const UDamageType* ForceUsed) const {
    return false;
}

bool ACyberneticCharacter::IsTakingHostage() const {
    return false;
}

bool ACyberneticCharacter::IsTakingCoverAtLandmark() const {
    return false;
}

bool ACyberneticCharacter::IsTakingCover() const {
    return false;
}

bool ACyberneticCharacter::IsRaisingWeapon() const {
    return false;
}

bool ACyberneticCharacter::IsPlayingStunAnimation() const {
    return false;
}

bool ACyberneticCharacter::IsPlayingDead() const {
    return false;
}

bool ACyberneticCharacter::IsMovingToLandmarkCover() const {
    return false;
}

bool ACyberneticCharacter::IsMovingToCover() const {
    return false;
}

bool ACyberneticCharacter::IsLoweringWeapon() const {
    return false;
}

bool ACyberneticCharacter::IsHesitatingFor(const float Seconds) const {
    return false;
}

bool ACyberneticCharacter::IsHesitating() const {
    return false;
}

bool ACyberneticCharacter::IsFiringFromCover() const {
    return false;
}

bool ACyberneticCharacter::IsExitingSurrender() const {
    return false;
}

bool ACyberneticCharacter::IsEndingHostageTake() const {
    return false;
}

bool ACyberneticCharacter::IsDamagedByLethal() const {
    return false;
}

bool ACyberneticCharacter::IsDamagedByLessLethal() const {
    return false;
}

bool ACyberneticCharacter::IsBeingTakenHostage() const {
    return false;
}

bool ACyberneticCharacter::IsBeginningHostageTake() const {
    return false;
}

bool ACyberneticCharacter::IsArrestCapable(APlayerCharacter* PlayerCharacter) const {
    return false;
}

bool ACyberneticCharacter::IsActiveForCombat() const {
    return false;
}

void ACyberneticCharacter::IncreaseStress(float Amount) {
}

bool ACyberneticCharacter::HasDamagedSWAT() const {
    return false;
}

float ACyberneticCharacter::GetVisibleSWATPercentage() const {
    return 0.0f;
}

float ACyberneticCharacter::GetHesitationTime() const {
    return 0.0f;
}

FVector ACyberneticCharacter::GetFocalPoint() const {
    return FVector{};
}

ABaseMagazineWeapon* ACyberneticCharacter::GetEquippedWeapon() const {
    return NULL;
}

TArray<FDebugData> ACyberneticCharacter::GetDebugInfoOnROE() const {
    return TArray<FDebugData>();
}

ACyberneticController* ACyberneticCharacter::GetCyberneticsController() const {
    return NULL;
}

ABaseArmour* ACyberneticCharacter::GetArmour() const {
    return NULL;
}

UAIArchetypeData* ACyberneticCharacter::GetAIArchetype() const {
    return NULL;
}

void ACyberneticCharacter::ForceFireGun(float Chance) {
}

void ACyberneticCharacter::FakeSurrender() {
}

void ACyberneticCharacter::DrawWeapon() {
}

ESurrenderExitType ACyberneticCharacter::DetermineSurrenderExitType() const {
    return ESurrenderExitType::None;
}

void ACyberneticCharacter::DecreaseStress(float Amount) {
}

bool ACyberneticCharacter::CanExitSurrender() const {
    return false;
}

FVector ACyberneticCharacter::CalculateGetupPosition() const {
    return FVector{};
}

void ACyberneticCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACyberneticCharacter, CurrentCoverLandmarkInUse);
    DOREPLIFETIME(ACyberneticCharacter, LastCoverLandmarkUsed);
    DOREPLIFETIME(ACyberneticCharacter, CurrentWallHoleTraversalInUse);
    DOREPLIFETIME(ACyberneticCharacter, LastWallHoleTraversalUsed);
    DOREPLIFETIME(ACyberneticCharacter, SimulatingAttachedStaticMeshes);
    DOREPLIFETIME(ACyberneticCharacter, AttachedMeshData);
    DOREPLIFETIME(ACyberneticCharacter, AttachedSkeletalMeshData);
    DOREPLIFETIME(ACyberneticCharacter, bIsMoving);
    DOREPLIFETIME(ACyberneticCharacter, Rep_CoverAnimState);
    DOREPLIFETIME(ACyberneticCharacter, Rep_HidingAnimState);
    DOREPLIFETIME(ACyberneticCharacter, Rep_HoleTraversalAnimState);
    DOREPLIFETIME(ACyberneticCharacter, CombatState);
    DOREPLIFETIME(ACyberneticCharacter, bHasEverShot);
    DOREPLIFETIME(ACyberneticCharacter, Rep_AimOffsetFocalPoint);
    DOREPLIFETIME(ACyberneticCharacter, Rep_FocalPoint);
    DOREPLIFETIME(ACyberneticCharacter, Rep_HeadFocalPoint);
    DOREPLIFETIME(ACyberneticCharacter, Rep_FocalActor);
    DOREPLIFETIME(ACyberneticCharacter, bRecoveringFromRagdoll);
    DOREPLIFETIME(ACyberneticCharacter, bIsKnockedOut);
    DOREPLIFETIME(ACyberneticCharacter, bIsPlayingDead);
    DOREPLIFETIME(ACyberneticCharacter, bIsFakeSurrender);
    DOREPLIFETIME(ACyberneticCharacter, bHasEverFakeSurrendered);
    DOREPLIFETIME(ACyberneticCharacter, CharacterMeshData);
    DOREPLIFETIME(ACyberneticCharacter, bIsRaisingWeapon);
    DOREPLIFETIME(ACyberneticCharacter, bIsLoweringWeapon);
    DOREPLIFETIME(ACyberneticCharacter, CachedHitScanResult);
    DOREPLIFETIME(ACyberneticCharacter, Rep_WorldBuildingAnimState);
    DOREPLIFETIME(ACyberneticCharacter, Rep_TakeHostageAnimState);
    DOREPLIFETIME(ACyberneticCharacter, RagdollMeshLocation);
    DOREPLIFETIME(ACyberneticCharacter, RagdollMeshRotation);
}

ACyberneticCharacter::ACyberneticCharacter() {
    this->ClosestPawn = NULL;
    this->MoveStyle = CreateDefaultSubobject<URoNMoveStyleComponent>(TEXT("MoveStyle"));
    this->ForceComplianceStrength = 0.00f;
    this->ActiveCoverDirection = ECoverDirection::Left;
    this->ActiveCoverAimType = ECoverAimType::LeftOrRight;
    this->ActiveCoverFireType = ECoverFireType::None;
    this->ActiveCoverFirePose = NULL;
    this->ActiveCoverIdlePose = NULL;
    this->CurrentCoverLandmarkInUse = NULL;
    this->LastCoverLandmarkUsed = NULL;
    this->CurrentWallHoleTraversalInUse = NULL;
    this->LastWallHoleTraversalUsed = NULL;
    this->bIsMoving = false;
    this->LastEquippedBreachItem = NULL;
    this->NoBuenoTextRender = NULL;
    this->AbuseCount = 0;
    this->ShootingYellCoolDownDuration = 10.00f;
    this->CivilianCowerActivityDuration = 10.00f;
    this->FactionManager = NULL;
    this->CombatState = ECombatState::CS_Unaware;
    this->RecentMeleeVictim = NULL;
    this->bHasEverShot = false;
    this->PendingThrownItem = NULL;
    this->SuppressionAmount = 0.00f;
    this->BeingRestrainedBy = NULL;
    this->ScoringComponent = CreateDefaultSubobject<UScoringComponent>(TEXT("Scoring Component"));
    this->SpawnedFromSpawner = NULL;
    this->DefaultSuspectArchetype = NULL;
    this->DefaultCivilianArchetype = NULL;
    this->Rep_FocalActor = NULL;
    this->bHeardYellFromOfficer = false;
    this->TimeSinceHeardOfficerYell = 340282346638528859811704183484516925440.00f;
    this->ArrestedTime = 0.00f;
    this->bFemale = false;
    this->bChild = false;
    this->LastGetUpMontage = NULL;
    this->bRecoveringFromRagdoll = false;
    this->bIsKnockedOut = false;
    this->bIsPlayingDead = false;
    this->Unarmed_Calm_AD = NULL;
    this->Unarmed_Sr_AD = NULL;
    this->Unarmed_Ar_AD = NULL;
    this->Unarmed_Ar_Crouch_AD = NULL;
    this->Unarmed_Alert_AD = NULL;
    this->Rifle_AD = NULL;
    this->Pistol_AD = NULL;
    this->Pistol_OneHanded_AD = NULL;
    this->Stress = 0.00f;
    this->StartingStress = 0.00f;
    this->TimeSinceLastShot = 340282346638528859811704183484516925440.00f;
    this->TimeSinceArrest = 0.00f;
    this->bHasPlayedSurrenderAnim = false;
    this->bIsFakeSurrender = false;
    this->bHasEverFakeSurrendered = false;
    this->bFinishedEquippingLoadout = false;
    this->bFinishedEquippingArmour = false;
    this->bForceFiringEnabled = false;
    this->bAimingAtTarget = false;
    this->bHasEverAimedAtTarget = false;
    this->bIsFleeing = false;
    this->bIsExitingLandmark = false;
    this->bDrawingWeapon = false;
    this->bPickingUpWeapon = false;
    this->bHasDamagedSWATTeam = false;
    this->bHitScannedFriendly = false;
    this->bDiedWhilstTraversingHole = false;
    this->bDiedWhilstHiding = false;
    this->bIsRaisingWeapon = false;
    this->bIsLoweringWeapon = false;
    this->DrawingWeaponTime = 0.00f;
    this->PickingUpWeaponTime = 0.00f;
    this->RaisingWeaponTime = 0.00f;
    this->LoweringWeaponTime = 0.00f;
    this->HostageMasterIdleLoop = NULL;
    this->HostageSlaveIdleLoop = NULL;
    this->TakenHostageBy = NULL;
    this->TimeSurrendered = 0.00f;
    this->bIsComplying = false;
    this->bIsWaiting = false;
    this->PepperSprayAbuseLevel = 0.00f;
    this->TimeSinceLastTasered = 0.00f;
    this->TimesTasered = 0;
    this->FocalPointInterpSpeed = 30.00f;
    this->ActorRotationInterpStandingSpeed = 5.00f;
    this->ActorRotationInterpMovingSpeed = 7.00f;
    this->AimOffsetInterpSpeed = 8.00f;
}

