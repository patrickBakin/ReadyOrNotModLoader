#include "RandomizedShippingContainerActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void ARandomizedShippingContainerActor::RandomizeContainer() {
}

ARandomizedShippingContainerActor::ARandomizedShippingContainerActor() {
    this->ContainerMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ContainerMesh"));
    this->ContainerDecalsComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ContainerDecals"));
    this->LeftDoorDecalsComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoorDecals"));
    this->RightDoorDecalsComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoorDecals"));
}

