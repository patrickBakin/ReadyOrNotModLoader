#include "BaseMagazineWeapon.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

class USoundCue;

void ABaseMagazineWeapon::SetMagazineCount(int32 Count, TArray<FName> AmmoTypes) {
}

void ABaseMagazineWeapon::Server_SetTacticalReload_Implementation(bool bIsTacticalReload) {
}
bool ABaseMagazineWeapon::Server_SetTacticalReload_Validate(bool bIsTacticalReload) {
    return true;
}

void ABaseMagazineWeapon::Server_SetReloading_Implementation(bool bIsReloading) {
}
bool ABaseMagazineWeapon::Server_SetReloading_Validate(bool bIsReloading) {
    return true;
}

void ABaseMagazineWeapon::Server_SetDesiredAmmoTypeIndex_Implementation(int32 Index) {
}

void ABaseMagazineWeapon::Server_SetCancelReloading_Implementation(bool bNewValue) {
}
bool ABaseMagazineWeapon::Server_SetCancelReloading_Validate(bool bNewValue) {
    return true;
}

void ABaseMagazineWeapon::Server_OnFire_Implementation(FRotator Direction, FVector SpawnLoc, int32 Seed) {
}
bool ABaseMagazineWeapon::Server_OnFire_Validate(FRotator Direction, FVector SpawnLoc, int32 Seed) {
    return true;
}

void ABaseMagazineWeapon::Server_NextMagazine_Implementation() {
}
bool ABaseMagazineWeapon::Server_NextMagazine_Validate() {
    return true;
}

void ABaseMagazineWeapon::Server_AddMagazine_Implementation(FMagazine Magazine) {
}

void ABaseMagazineWeapon::ReplenishAmmo() {
}

float ABaseMagazineWeapon::RemoveAmmo(float Value) {
    return 0.0f;
}

void ABaseMagazineWeapon::PlaySound(USoundCue* Cue) {
}

void ABaseMagazineWeapon::PlayBulletWhizz(float Pan) {
}

void ABaseMagazineWeapon::OnReloadAnimEvent(EReloadAnimEvent Type) {
}

void ABaseMagazineWeapon::OnNewFireModeAnimEvent(EFireMode newFireMode) {
}

void ABaseMagazineWeapon::OnFire(FRotator Direction, FVector SpawnLoc) {
}

void ABaseMagazineWeapon::Multicast_SpawnShell_Implementation(bool bOnlyLocallyControlled, bool bSkipLocallyControlled) {
}

void ABaseMagazineWeapon::Multicast_SpawnParticleEffects_Implementation(bool bSkipAuthority, bool bSkipLocalOwner) {
}

void ABaseMagazineWeapon::Multicast_SimulateFireForViewTargets_Implementation(FVector_NetQuantize100 DirectionNet, FVector_NetQuantize100 SpawnLoc, int32 Seed) {
}

void ABaseMagazineWeapon::Multicast_OnFire_Implementation(FVector_NetQuantize100 DirectionNet, FVector_NetQuantize100 SpawnLoc, int32 Seed) {
}

void ABaseMagazineWeapon::Multicast_HandleSupression_Implementation() {
}

void ABaseMagazineWeapon::Multicast_DoHitScan_Implementation(FTransform SpawnTransform, bool bLocalOnly, int32 ProjectileNumber, int32 Seed) {
}

bool ABaseMagazineWeapon::InSingleMode() const {
    return false;
}

bool ABaseMagazineWeapon::InSafeMode() const {
    return false;
}

bool ABaseMagazineWeapon::InFullAutoMode() const {
    return false;
}

bool ABaseMagazineWeapon::InBurstMode() const {
    return false;
}

bool ABaseMagazineWeapon::HasAnyAmmo() const {
    return false;
}

bool ABaseMagazineWeapon::HasAmmo() const {
    return false;
}

void ABaseMagazineWeapon::GivenAmmoFromAmmoBag() {
}

float ABaseMagazineWeapon::GetNextAmmo() const {
    return 0.0f;
}

FText ABaseMagazineWeapon::GetMagazineScreenName(const FMagazine& Magazine) const {
    return FText::GetEmpty();
}

int32 ABaseMagazineWeapon::GetMagazineCount() {
    return 0;
}

float ABaseMagazineWeapon::GetMagazineAmmoPercentage(int32 MagazineIndex) const {
    return 0.0f;
}

FMagazine ABaseMagazineWeapon::GetCurrentMagazine() const {
    return FMagazine{};
}

float ABaseMagazineWeapon::GetCurrentAmmoPercentage() const {
    return 0.0f;
}

float ABaseMagazineWeapon::GetAmmoWeight(int32 Count) {
    return 0.0f;
}

float ABaseMagazineWeapon::GetAmmoInMagazine(int32 Index) const {
    return 0.0f;
}

float ABaseMagazineWeapon::GetAmmo() const {
    return 0.0f;
}

void ABaseMagazineWeapon::FindNextMagIndex() {
}

bool ABaseMagazineWeapon::AllMagsEmpty() const {
    return false;
}

void ABaseMagazineWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseMagazineWeapon, bReloading);
    DOREPLIFETIME(ABaseMagazineWeapon, bCancelReloading);
    DOREPLIFETIME(ABaseMagazineWeapon, Magazines);
    DOREPLIFETIME(ABaseMagazineWeapon, MagIndex);
    DOREPLIFETIME(ABaseMagazineWeapon, NextMagIndex);
    DOREPLIFETIME(ABaseMagazineWeapon, LastSpawnedProjectile);
}

ABaseMagazineWeapon::ABaseMagazineWeapon() {
    this->MuzzleFlashParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlash"));
    this->MuzzleSmokeParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleSmoke"));
    this->HeatSmokeParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HeatSmoke"));
    this->SupressionStrength = 1.00f;
    this->SupressionCameraShake = NULL;
    this->bSpawnNoTrail = false;
    this->FiringAudioComp = NULL;
    this->bReloading = false;
    this->bCancelReloading = false;
    this->MuzzleFlashParticleSocket = TEXT("P_MuzzleFlash");
    this->MuzzleSmokeParticleSocket = TEXT("P_MuzzleSmoke");
    this->bShowParticlesWhenFiring = true;
    this->ArmorPiercingDamageType = NULL;
    this->ProjectileAttachedParticle = NULL;
    this->bDrawBlood = true;
    this->FakeBulletProjectile = NULL;
    this->BulletProjectile = NULL;
    this->ArmorPiercingBulletProjectile = NULL;
    this->PenetrationDistance = 20.00f;
    this->BreachShell = NULL;
    this->BeanbagShell = NULL;
    this->BuckShotShell = NULL;
    this->SlugShell = NULL;
    this->MagIndex = 0;
    this->NextMagIndex = 0;
    this->DesiredAmmoType = 0;
    this->bInfiniteAmmo = false;
    this->QueuedAmmoType = 0;
    this->bBulletInChamberOnReload = true;
    this->bTacReloadWhenEmpty = false;
    this->AmmoMax = 0.00f;
    this->LockIntegrityMinDamage = 0.00f;
    this->LockIntegrityMaxDamage = 0.00f;
    this->bLoseMagOnReload = false;
    this->bSpawnShell = true;
    this->SpawnShellDelay = 0.00f;
    this->ShellBounceFMODAudio = NULL;
    this->ImpactDecalScale = 1.00f;
    this->ImpactEffects_Instance = NULL;
    this->bShowAmmoTypesOnHUD = true;
    this->LastSpawnedProjectile = NULL;
    this->Mag_01_Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mag_01_Comp"));
    this->Mag_01_Comp_TPOnly = NULL;
    this->bShowBulletsWhenEmpty = false;
    this->Mag_01_Bullets_Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mag_01_Bullets_Comp"));
    this->Mag_01_Extra_Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mag_01_Extra_Comp"));
    this->Mag_ReloadInterpFix_Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mag_ReloadInterpFix"));
    this->Mag_01_Static = NULL;
    this->Mag_01_FMJ_Bullets_Static = NULL;
    this->Mag_01_HP_Bullets_Static = NULL;
    this->Mag_01_Extra_Static = NULL;
    this->Mag_02_Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mag_02_Comp"));
    this->Mag_02_Bullets_Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mag_02_Bullets_Comp"));
    this->Mag_02_Extra_Comp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mag_02_Extra_Comp"));
    this->Mag_02_Static = NULL;
    this->Mag_02_FMJ_Bullets_Static = NULL;
    this->Mag_02_HP_Bullets_Static = NULL;
    this->Mag_02_Extra_Static = NULL;
    this->bUseFireLoopAnims = false;
    this->MagCheckIcon_Empty = NULL;
    this->MagCheckIcon_Full = NULL;
    this->DroppedMagazineHitEvent = NULL;
    this->HeatPerShot = 0.40f;
    this->HeatThreshold = 1.00f;
    this->HeatMax = 2.00f;
    this->HeatDissipation = 0.20f;
    this->CurrentHeat = 0.00f;
    this->HeatMinimumTime = 0.50f;
    this->HeatTime = 0.00f;
    this->bHeatEffectPlayed = false;
    this->MagazineWeightFull = 0.00f;
    this->MagazineWeightEmpty = 0.00f;
    this->MagazineCountDefault = 4;
    this->MagazineCountMin = 1;
    this->MagazineCountMax = 1;
    this->bHasBeenDisassembled = false;
    this->GunshotOcclusionMultiplier = 1.00f;
    this->GunshotFullOcclusionDepth = 150.00f;
    this->ShootingYellBias = 0.70f;
    this->bTwoHandedPistol = false;
    this->bHeavyRifle = false;
    this->RagdollImpulseMultiplier = 5000.00f;
}

