#include "PlacedZipcuffs.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

APlacedZipcuffs::APlacedZipcuffs() {
    this->ZipcuffMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
}

