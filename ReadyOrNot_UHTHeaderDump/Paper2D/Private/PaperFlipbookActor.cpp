#include "PaperFlipbookActor.h"
#include "PaperFlipbookComponent.h"

APaperFlipbookActor::APaperFlipbookActor() {
    this->RenderComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("RenderComponent"));
}

