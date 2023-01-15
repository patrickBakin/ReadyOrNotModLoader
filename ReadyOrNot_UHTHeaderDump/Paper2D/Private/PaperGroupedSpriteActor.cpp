#include "PaperGroupedSpriteActor.h"
#include "PaperGroupedSpriteComponent.h"

APaperGroupedSpriteActor::APaperGroupedSpriteActor() {
    this->RenderComponent = CreateDefaultSubobject<UPaperGroupedSpriteComponent>(TEXT("RenderComponent"));
}

