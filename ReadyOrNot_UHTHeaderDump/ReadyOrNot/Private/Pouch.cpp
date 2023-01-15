#include "Pouch.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

void APouch::OnRep_UpdateVisibility() {
}

void APouch::OnRep_Attach() {
}

void APouch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APouch, AttachToComp);
    DOREPLIFETIME(APouch, AttachToSocket);
    DOREPLIFETIME(APouch, bShowMagazine);
}

APouch::APouch() {
    this->MagazineComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Magazine"));
    this->AttachToComp = NULL;
    this->bShowMagazine = false;
    this->OpenPouch = NULL;
    this->ClosePouch = NULL;
}

