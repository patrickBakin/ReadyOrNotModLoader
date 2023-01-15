#include "BaseMagPouch.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

void ABaseMagPouch::ShowMagazine() {
}

void ABaseMagPouch::OpenPouch() {
}

void ABaseMagPouch::HideMagazine() {
}

void ABaseMagPouch::ClosePouch() {
}

ABaseMagPouch::ABaseMagPouch() {
    this->MagazineMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MagazineMesh"));
    this->OpenPouchAnim = NULL;
    this->ClosedPouchAnim = NULL;
}

