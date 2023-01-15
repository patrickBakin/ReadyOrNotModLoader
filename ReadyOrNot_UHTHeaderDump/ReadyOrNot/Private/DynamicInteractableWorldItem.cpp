#include "DynamicInteractableWorldItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InteractableComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

class AActor;
class UPrimitiveComponent;



void ADynamicInteractableWorldItem::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADynamicInteractableWorldItem::Multicast_ItemStateToggle_Implementation() {
}

void ADynamicInteractableWorldItem::Multicast_DestroyItem_Implementation() {
}

ADynamicInteractableWorldItem::ADynamicInteractableWorldItem() {
    this->bRestartOnToggle = false;
    this->bCanToggleIfDestroyed = false;
    this->bItemOn = false;
    this->bItemDestroyed = false;
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));
    this->InteractAudioFMOD = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("InteractAudioFMOD"));
    this->IntactRunningAudioFMOD1 = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("IntactRunningAudioFMOD"));
    this->DestroyedRunningAudioFMOD = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("DestroyedRunningAudioFMOD"));
    this->ImpactAudioFMOD = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("ImpactAudioFMOD"));
    this->ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
    this->PostDestructionMesh = NULL;
    this->ImpactParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ImpactParticle"));
    this->PhysicsImpactDecal = NULL;
    this->PhysicsImpactDecalScale = 1.00f;
}

