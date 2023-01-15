#include "Ladder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ALadder::ALadder() {
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->LadderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ladder"));
}

