#include "PlacedC2Explosive.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "InteractableComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionStimuliSourceComponent -FallbackName=AIPerceptionStimuliSourceComponent

void APlacedC2Explosive::Server_DetonateC2_Implementation() {
}
bool APlacedC2Explosive::Server_DetonateC2_Validate() {
    return true;
}

void APlacedC2Explosive::RemoveFromTarget() {
}

void APlacedC2Explosive::PostExplosionKill() {
}

void APlacedC2Explosive::Multicast_OnC2Detonated_Implementation() {
}

USkeletalMeshComponent* APlacedC2Explosive::GetMeshComp() {
    return NULL;
}

void APlacedC2Explosive::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlacedC2Explosive, PlacedByController);
    DOREPLIFETIME(APlacedC2Explosive, TargetItem);
    DOREPLIFETIME(APlacedC2Explosive, PlacementHit);
    DOREPLIFETIME(APlacedC2Explosive, bIsBeingRemoved);
    DOREPLIFETIME(APlacedC2Explosive, IsBeingRemovedBy);
}

APlacedC2Explosive::APlacedC2Explosive() {
    this->ExplosionComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Explosion"));
    this->AudioComp = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODSound"));
    this->MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->C2InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->PerceptionStimuliComp = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PerceptionComp"));
    this->ConnectedC2Explosive = NULL;
    this->PlacedByController = NULL;
    this->DamageToInflict = 120.00f;
    this->MinDamageToInflict = 5.00f;
    this->DamageType = NULL;
    this->DamageInnerRadius = 200.00f;
    this->DamageOuterRadius = 600.00f;
    this->ExplosionPostKillTime = 15.00f;
    this->bDetonated = false;
    this->DoorIntegrityDamage = 2.00f;
    this->TargetItem = NULL;
    this->FMODC2ExplosionAudio = NULL;
    this->bUseScreenShake = false;
    this->ExplosionScreenShake = NULL;
    this->CameraShakeRadius = 500.00f;
    this->StunDamageType = NULL;
    this->bRemovedViaMultitool = false;
    this->bIsBeingRemoved = false;
    this->IsBeingRemovedBy = NULL;
}

