#include "AmmoRefillBox.h"
#include "InteractableComponent.h"

AAmmoRefillBox::AAmmoRefillBox() {
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->RefillCharacter = NULL;
}

