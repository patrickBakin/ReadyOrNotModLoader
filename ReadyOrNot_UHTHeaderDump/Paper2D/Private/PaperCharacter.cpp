#include "PaperCharacter.h"
#include "PaperFlipbookComponent.h"

APaperCharacter::APaperCharacter() {
    this->Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite0"));
}

