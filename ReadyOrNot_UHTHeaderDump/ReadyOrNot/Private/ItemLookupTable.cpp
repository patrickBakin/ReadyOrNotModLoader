#include "ItemLookupTable.h"

FItemLookupTable::FItemLookupTable() {
    this->ItemClass = EItemClass::IC_NoClass;
    this->ItemType = EItemType::IT_None;
    this->bPistolGrip = false;
    this->ItemIcon = NULL;
    this->ItemWeight = 0.00f;
    this->HolsterPlayRate = 0.00f;
    this->DrawPlayRate = 0.00f;
    this->bUseLowReady = false;
    this->PushbackRange = 0.00f;
    this->LowReadyRange = 0.00f;
    this->LowReadyRangeSightsModifier = 0.00f;
    this->LowReadyPitchThreshold = 0.00f;
    this->MovementSpeedMultiplier = 0.00f;
    this->LeanOffset = 0.00f;
    this->ADSZoom = 0.00f;
    this->ADSZoomInSpeed = 0.00f;
    this->ADSZoomOutSpeed = 0.00f;
    this->ImpactEffects = NULL;
    this->RicochetEffects = NULL;
    this->RicochetParticleSystem = NULL;
    this->ExitEffects = NULL;
    this->MagazineWeightFull = 0.00f;
    this->MagazineWeightEmpty = 0.00f;
    this->bADSCountsAsAbuse = false;
    this->HesitationBoostMultiplier = 0.00f;
    this->BurstBulletCount = 0.00f;
    this->Damage = 0.00f;
    this->DamageSeverityMultiplier = 0.00f;
    this->DamageSeverityChance = 0.00f;
    this->BleedoutDamageMultiplier = 0.00f;
    this->BleedoutDamageChance = 0.00f;
    this->DefaultDamageType = NULL;
    this->ArmorPiercingDamageType = NULL;
    this->MagazineCountDefault = 0.00f;
    this->MagazineCountMin = 0.00f;
    this->MagazineCountMax = 0.00f;
    this->ProjectileMovementSpeed = 0.00f;
    this->PenetrationDistance = 0.00f;
    this->FakeBulletProjectile = NULL;
    this->BulletProjectile = NULL;
    this->ArmorPiercingBulletProjectile = NULL;
    this->MagazineSize = 0;
    this->FireRate = 0.00f;
    this->Range = 0.00f;
    this->Accuracy = 0.00f;
    this->MinFireRateAI = 0.00f;
    this->MaxFireRateAI = 0.00f;
    this->BulletsFiredUntilFullyAccurate = 0;
    this->bIgnoreAmmoTypeSpread = false;
    this->SpreadReturnRate = 0.00f;
    this->ADSSpreadMultiplier = 0.00f;
    this->RecoilReturnRate = 0.00f;
    this->RecoilInterpSpeed = 0.00f;
    this->ADSRecoilMultiplier = 0.00f;
    this->LockIntegrityMinDamage = 0.00f;
    this->LockIntegrityMaxDamage = 0.00f;
    this->BulletDrag = 0.00f;
    this->bHitScan = false;
    this->bSpawnTracer = false;
    this->bNoSpawnTracerForFiringPlayer = false;
    this->SpawnProjectileCount = 0;
    this->Wobble = 0.00f;
    this->InitialWobbleDelay = 0.00f;
    this->FireCameraShake = NULL;
    this->FirstShotRecoil = 0.00f;
    this->FirstShotSpread = 0.00f;
    this->FirstShotResetTime = 0.00f;
    this->RecoilReturnInterpSpeed = 0.00f;
    this->RecoilReturnPercentage = 0.00f;
    this->VelocitySpreadMultiplier = 0.00f;
    this->VelocityRecoilMultiplier = 0.00f;
    this->RecoilMultiplierPitch = 0.00f;
    this->RecoilMultiplierYaw = 0.00f;
    this->RefireDelay = 0.00f;
    this->AttachmentPoints = 0;
    this->bAcceptsScopeAttachments = false;
    this->bAcceptsMuzzleAttachments = false;
    this->bAcceptsUnderbarrelAttachments = false;
    this->bAcceptsOverbarrelAttachments = false;
    this->bAcceptsStockAttachments = false;
    this->bAcceptsGripAttachments = false;
    this->bAcceptsIlluminatorAttachments = false;
    this->bAcceptsAmmunitionAttachments = false;
    this->bCalculateProcRecoil = false;
    this->RecoilDampStrength = 0.00f;
    this->RecoilFireTime = 0.00f;
    this->RecoilFireStrength = 0.00f;
    this->RecoilFireStrengthFirst = 0.00f;
    this->RecoilAngleStrength = 0.00f;
    this->RecoilRandomness = 0.00f;
    this->RecoilADSModfier = 0.00f;
    this->RecoilAngleADSModifier = 0.00f;
    this->RecoilBuildupADSMultiplier = 0.00f;
    this->RecoilHasBuildup = false;
    this->RecoilBuildupDampStrength = 0.00f;
    this->FreeAimLimit = 0.00f;
    this->FreeAimLimitADS = 0.00f;
    this->LazySpringStrength = 0.00f;
    this->LazySpringStrengthADS = 0.00f;
    this->FPADSMotionWeight = 0.00f;
    this->FreeAimInterpSpeed = 0.00f;
    this->FreeAimInterpADSModifier = 0.00f;
    this->FreeAimInterpHipModifier = 0.00f;
    this->FreeAimSlowMoveModifier = 0.00f;
    this->FreeAimSlowMoveTolerance = 0.00f;
    this->bDisableMeshspaceMovement = false;
    this->MeshSpaceAimInterp = 0.00f;
    this->OnDrawMeshspaceInterp = 0.00f;
    this->OnHolsterMeshspaceInterp = 0.00f;
    this->InertiaDragAimRotation = 0.00f;
    this->InertiaDragAimLocation = 0.00f;
    this->InertiaDragStrafeRotation = 0.00f;
    this->InertiaDragStrafeLocation = 0.00f;
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

