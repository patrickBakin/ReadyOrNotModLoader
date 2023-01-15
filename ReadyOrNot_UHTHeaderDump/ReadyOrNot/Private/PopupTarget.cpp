#include "PopupTarget.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

void APopupTarget::Popup() {
}

bool APopupTarget::IsAlive() {
    return false;
}

void APopupTarget::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APopupTarget, Health);
    DOREPLIFETIME(APopupTarget, bFallDown);
}

APopupTarget::APopupTarget() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->MaxHealth = 100;
    this->PopupTime = 0.00f;
    this->Health = 100.00f;
    this->bFallDown = false;
}

