#include "GlassActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ApexDestruction -ObjectName=DestructibleComponent -FallbackName=DestructibleComponent

class AActor;
class AController;
class UMaterialInterface;

void AGlassActor::Multicast_TakeDamage_Implementation(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

void AGlassActor::Multicast_ApplyDamageToWindow_Implementation(float DamageAmount, FVector HitLocation, FVector ImpulseDir, float ImpulseStrength) {
}

UMaterialInterface* AGlassActor::GetRandomShatteredGlassMaterial() {
    return NULL;
}

UMaterialInterface* AGlassActor::GetRandomGlassMaterial() {
    return NULL;
}

AGlassActor::AGlassActor() {
    this->DestructibleWindow = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructibleWindow"));
}

