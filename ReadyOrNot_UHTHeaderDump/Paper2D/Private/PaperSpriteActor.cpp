#include "PaperSpriteActor.h"
#include "PaperSpriteComponent.h"

APaperSpriteActor::APaperSpriteActor() {
    this->RenderComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RenderComponent"));
}

