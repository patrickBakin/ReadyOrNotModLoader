#include "Projectile.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent

class AActor;
class UPrimitiveComponent;
class AImpactEffect;

void AProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AProjectile::Multicast_SpawnImpactEffects_Implementation(FHitResult Hit, TSubclassOf<AImpactEffect> EffectsClass, float DecalScale, bool bExitImpact, bool bArmorImpact) {
}

void AProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProjectile, ImpactEffectsClass);
}

AProjectile::AProjectile() {
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement"));
    this->ProjectileHitSound = NULL;
    this->ImpactEffectsClass = NULL;
}

