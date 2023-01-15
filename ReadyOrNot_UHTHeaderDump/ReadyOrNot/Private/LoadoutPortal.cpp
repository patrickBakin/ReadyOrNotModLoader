#include "LoadoutPortal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
#include "InteractableComponent.h"

ALoadoutPortal::ALoadoutPortal() {
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->bIsWeaponCustomizationOnly = false;
    this->WeaponCustomizationCamera = NULL;
    this->PreMissionStreamedLevel = NULL;
}

