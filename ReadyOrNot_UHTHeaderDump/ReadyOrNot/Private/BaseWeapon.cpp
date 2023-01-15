#include "BaseWeapon.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

class ULightAttachment;
class ULaserAttachment;

void ABaseWeapon::ResetRecoilSettingsToDefault() {
}

void ABaseWeapon::RemoveAttachment(bool bScopedAttachment, bool bMuzzleAttachment, bool bUnderbarrelAttachment, bool bOverbarrelAttachment, bool bStockAttachment, bool bGripAttachment, bool bIlluminatorAttachment, bool bAmmunitionAttachment) {
}

void ABaseWeapon::PlayFiringModeAnimation() {
}


void ABaseWeapon::OnWeaponReloadComplete() {
}



void ABaseWeapon::OnEndAimDownSights(bool bWasAiming) {
}

void ABaseWeapon::OnAimDownSights(bool bWasAiming) {
}

bool ABaseWeapon::IsLethalWeapon() const {
    return false;
}

bool ABaseWeapon::IsLessLethalWeapon() const {
    return false;
}

EWeaponUnderbarrelAnimationType ABaseWeapon::GetUnderbarrelAnimationType() const {
    return EWeaponUnderbarrelAnimationType::WU_None;
}

FRotator ABaseWeapon::GetSpread() {
    return FRotator{};
}

FRotator ABaseWeapon::GetRecoil() {
    return FRotator{};
}

ULightAttachment* ABaseWeapon::GetLightAttachment() {
    return NULL;
}

ULaserAttachment* ABaseWeapon::GetLaserAttachment() {
    return NULL;
}

void ABaseWeapon::EnableGlimmer() {
}

void ABaseWeapon::DisableGlimmer() {
}

bool ABaseWeapon::CanReload() {
    return false;
}

bool ABaseWeapon::CanAddAttachment(UClass* AttachmentClass) {
    return false;
}

void ABaseWeapon::AddMagazineCountFromAttachments(float AddAmount) {
}

void ABaseWeapon::AddAttachment(UClass* Class, bool bReplicateAttachment) {
}

void ABaseWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseWeapon, ScopeAttachment);
    DOREPLIFETIME(ABaseWeapon, MuzzleAttachment);
    DOREPLIFETIME(ABaseWeapon, UnderbarrelAttachment);
    DOREPLIFETIME(ABaseWeapon, OverbarrelAttachment);
    DOREPLIFETIME(ABaseWeapon, StockAttachment);
    DOREPLIFETIME(ABaseWeapon, GripAttachment);
    DOREPLIFETIME(ABaseWeapon, IlluminatorAttachment);
    DOREPLIFETIME(ABaseWeapon, AmmunitionAttachment);
    DOREPLIFETIME(ABaseWeapon, bSupressed);
    DOREPLIFETIME(ABaseWeapon, CurrentFireMode);
    DOREPLIFETIME(ABaseWeapon, ProjectileMovementSpeed);
    DOREPLIFETIME(ABaseWeapon, fireDirection);
}

ABaseWeapon::ABaseWeapon() {
    this->FiremodeBeforeSafe = EFireMode::FM_Single;
    this->BulletSpawn = CreateDefaultSubobject<UArrowComponent>(TEXT("BulletSpawn_Code"));
    this->ShellSpawn = CreateDefaultSubobject<UArrowComponent>(TEXT("ShellSpawn_Code"));
    this->ShellParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ShellParticle"));
    this->Flashlight = NULL;
    this->ScopeAttachment = NULL;
    this->MuzzleAttachment = NULL;
    this->UnderbarrelAttachment = NULL;
    this->OverbarrelAttachment = NULL;
    this->StockAttachment = NULL;
    this->GripAttachment = NULL;
    this->IlluminatorAttachment = NULL;
    this->AmmunitionAttachment = NULL;
    this->AttachmentPoints = 5;
    this->bSupressed = false;
    this->CurrentFireMode = EFireMode::FM_Single;
    this->DefaultFireMode = EFireMode::FM_Single;
    this->BurstBulletCount = 3.00f;
    this->bHasSafeMode = true;
    this->AddedMagazineCountFromAttachments = 0.00f;
    this->Optics_UI_Socket = TEXT("UI_Optics");
    this->Grip_UI_Socket = TEXT("UI_Grip");
    this->Muzzle_UI_Socket = TEXT("UI_Muzzle");
    this->Stock_UI_Socket = TEXT("UI_Stock");
    this->Magazine_UI_Socket = TEXT("UI_Magazine");
    this->ADSZoom = 0.90f;
    this->ADSZoomInSpeed = 10.00f;
    this->ADSZoomOutSpeed = 10.00f;
    this->DefaultDamageType = NULL;
    this->DamageType = NULL;
    this->FireCameraShake = NULL;
    this->Damage = 0.00f;
    this->DamageSeverityMultiplier = 1.00f;
    this->DamageSeverityChance = 0.00f;
    this->BleedoutDamageMultiplier = 0.00f;
    this->BleedoutDamageChance = 0.00f;
    this->DefaultDamage = 0.00f;
    this->FireRate = 0.00f;
    this->MinFireRateAI = 0.00f;
    this->BulletsFiredUntilFullyAccurate = 0;
    this->MaxFireRateAI = 0.00f;
    this->ProjectileMovementSpeed = 0.00f;
    this->bArmorPiercing = false;
    this->ImpactEffects = NULL;
    this->RicochetEffects = NULL;
    this->RicochetParticleSystem = NULL;
    this->RicochetEvent = NULL;
    this->SpallingDecal = NULL;
    this->SpallingParticleSystem = NULL;
    this->SpallingEvent = NULL;
    this->ExitEffects = NULL;
    this->Wobble = 0.00f;
    this->InitialWobbleDelay = 0.00f;
    this->bAttachBulletOnHit = true;
    this->BulletPhysicsImpulseMultiplier = 0.10f;
    this->bDestroyBulletOnHit = true;
    this->BulletProjectileMesh = NULL;
    this->FakeProjectileMeshStatic = NULL;
    this->BulletProjectileMeshStatic = NULL;
    this->ShellClass = NULL;
    this->ShellMesh = NULL;
    this->BulletDrag = 3000.00f;
    this->RecoilInterpSpeed = 10.00f;
    this->ADSRecoilMultiplier = 1.00f;
    this->ADSSpreadMultiplier = 1.00f;
    this->RecoilReturnRate = 10.00f;
    this->bIgnoreAmmoTypeSpread = false;
    this->SpreadReturnRate = 10.00f;
    this->GlimmerIntensity = 25.00f;
    this->SpawnProjectileCount = 1;
    this->FirstShotRecoil = 0.70f;
    this->FirstShotSpread = 0.10f;
    this->FirstShotResetTime = 0.20f;
    this->VelocitySpreadMultiplier = 0.01f;
    this->VelocityRecoilMultiplier = 0.00f;
    this->RecoilMultiplierPitch = 0.00f;
    this->RecoilMultiplierYaw = 0.00f;
    this->RefireDelay = 0.00f;
    this->RecoilReturnPercentage = 0.90f;
    this->RecoilReturnInterpSpeed = 2.50f;
    this->bCalculateProcRecoil = false;
    this->RecoilDampStrength = 7.50f;
    this->RecoilFireTime = 0.05f;
    this->RecoilFireStrength = 0.50f;
    this->RecoilFireStrengthFirst = 3.00f;
    this->RecoilAngleStrength = 0.40f;
    this->RecoilRandomness = 0.10f;
    this->RecoilFireADSModifier = 0.70f;
    this->RecoilAngleADSModifier = 0.30f;
    this->RecoilBuildupADSModifier = 0.00f;
    this->RecoilHasBuildup = false;
    this->RecoilBuildupDampStrength = 15.00f;
    this->CurrentHighTimer = 0.00f;
    this->ReloadHighTimer = 2.00f;
    this->FireHighTimer = 2.00f;
    this->EquipHighTimer = 2.00f;
    this->bUseScopeMask = false;
}

