#include "DynamicWorldItem.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

class AActor;
class UPrimitiveComponent;

void ADynamicWorldItem::OnRep_ItemDestroyed() {
}


void ADynamicWorldItem::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADynamicWorldItem::Multicast_DestroyItem_Implementation() {
}

void ADynamicWorldItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADynamicWorldItem, bItemDestroyed);
}

ADynamicWorldItem::ADynamicWorldItem() {
    this->ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
    this->ImpactParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ImpactParticle"));
    this->ImpactAudioFMOD = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("ImpactAudioFMOD"));
    this->PostImpactMesh = NULL;
    this->PostImpactMaterial = NULL;
    this->PhysicsImpactDecal = NULL;
    this->PhysicsImpactDecalScale = 1.00f;
    this->bItemDestroyed = false;
}

