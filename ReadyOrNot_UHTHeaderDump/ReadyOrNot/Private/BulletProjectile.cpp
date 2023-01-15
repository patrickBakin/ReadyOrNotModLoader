#include "BulletProjectile.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

class USceneComponent;
class AActor;
class UPrimitiveComponent;

void ABulletProjectile::OnRespawnProjectile(FVector RespawnLocation, FRotator RespawnRotation, float NewSpeed, float NewDamage, EProjectileReaction ProjectileReaction) {
}

void ABulletProjectile::OnRep_UpdateMesh() {
}

void ABulletProjectile::OnMeshHit_Implementation(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


void ABulletProjectile::Multicast_SimulatePhysics_Implementation(bool bSimulate) {
}

void ABulletProjectile::Multicast_OnRespawnProjectile_Implementation(FVector_NetQuantize100 RespawnLocation, FVector_NetQuantize100 RespawnRotation, float NewSpeed, float NewDamage, EProjectileReaction ProjectileReaction) {
}

void ABulletProjectile::Multicast_AttachToComponent_Implementation(FVector NewLocation, USceneComponent* Component, FName BoneName) {
}

void ABulletProjectile::Multicast_ApplyForceToHitObjects_Implementation(const FHitResult& Hit, FVector Velocity) {
}

void ABulletProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABulletProjectile, FiredFromWeapon);
    DOREPLIFETIME(ABulletProjectile, FiredFromPlayer);
    DOREPLIFETIME(ABulletProjectile, bDrawBlood);
}

ABulletProjectile::ABulletProjectile() {
    this->BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet"));
    this->FiredFromWeapon = NULL;
    this->FiredFromPlayer = NULL;
    this->HitAngleMultiplier = 0.20f;
    this->RequiredAngleToDeflect = 60.00f;
    this->PercentageToDeflect = 0.50f;
    this->DeflectionAmount = 90.00f;
    this->SpeedLossMultiplierPerSurface = 0.50f;
    this->DamageLossMultiplierPerSurface = 0.50f;
    this->VelocityRequiredToRespawn = 5000.00f;
    this->bDrawBlood = true;
    this->DecalScale = 1.00f;
    this->bAffectedByGravity = true;
    this->BulletWizzSound = NULL;
    this->MinimumDistanceForWizz = 100.00f;
    this->requiredSpeedForWizz = 3420.00f;
    this->DebugLineSize = 0.50f;
    this->ExitEffects = NULL;
    this->RicochetEffects = NULL;
    this->RichochetParticle = NULL;
    this->ArmorPiercing = 0.00f;
    this->bDestroyOnHit = true;
    this->bAttachOnHit = true;
    this->InitialSpeed = 0.00f;
    this->OwningActor = NULL;
    this->LockIntegrityDamage = 0.00f;
    this->InitialDamageType = NULL;
    this->LifeSpan = 0.00f;
    this->Drag = -3000.00f;
    this->Wobble = 30.00f;
    this->InitialWobbleDelay = 1.00f;
    this->PhysicsImpulseMultiplier = 5000.00f;
}

