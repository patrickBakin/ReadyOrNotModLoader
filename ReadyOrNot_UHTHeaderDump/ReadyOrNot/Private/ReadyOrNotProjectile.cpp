#include "ReadyOrNotProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent

class AActor;
class UPrimitiveComponent;

void AReadyOrNotProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

AReadyOrNotProjectile::AReadyOrNotProjectile() {
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
}

