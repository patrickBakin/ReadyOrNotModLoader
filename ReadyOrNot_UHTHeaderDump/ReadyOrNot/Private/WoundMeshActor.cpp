#include "WoundMeshActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

class AActor;

void AWoundMeshActor::OnParentDestroyed(AActor* Parent) {
}

AWoundMeshActor::AWoundMeshActor() {
    this->WoundStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WoundMesh"));
}

