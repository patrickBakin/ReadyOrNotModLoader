#include "BombActor.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InteractableComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent

void ABombActor::Multicast_PlayBombExplodeSFX_Implementation() {
}

EBombState ABombActor::GetBombState() {
    return EBombState::BS_None;
}

void ABombActor::Explode() {
}

void ABombActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABombActor, BombState);
    DOREPLIFETIME(ABombActor, TimeUntilExplodes);
}

ABombActor::ABombActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bomb Mesh"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Defuse Interactable Component"));
    this->ExplosionParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Explosion Particle"));
    this->MultitoolUseTime = 15.00f;
    this->BombState = EBombState::BS_None;
    this->TimeUntilExplodes = 0.00f;
}

