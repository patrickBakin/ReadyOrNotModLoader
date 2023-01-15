#include "CollectedEvidenceActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void ACollectedEvidenceActor::Server_PlaySpawnSound_Implementation() {
}

void ACollectedEvidenceActor::PlaySpawnSound() {
}

void ACollectedEvidenceActor::Multicast_PlaySpawnSound_Implementation() {
}

ACollectedEvidenceActor::ACollectedEvidenceActor() {
    this->CollectionBagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BagMesh"));
    this->Bag_Spawn_Sound = NULL;
}

