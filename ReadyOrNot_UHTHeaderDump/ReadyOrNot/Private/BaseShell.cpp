#include "BaseShell.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

class AActor;
class UPrimitiveComponent;

void ABaseShell::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

ABaseShell::ABaseShell() {
    this->ShellMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shell"));
    this->FMODAudioComp = NULL;
    this->ShellBounceFMODAudio = NULL;
    this->ShellNormalizeMax = 0.00f;
    this->ShellNormalizeMin = 0.00f;
}

