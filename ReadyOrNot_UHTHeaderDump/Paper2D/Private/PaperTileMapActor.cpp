#include "PaperTileMapActor.h"
#include "PaperTileMapComponent.h"

APaperTileMapActor::APaperTileMapActor() {
    this->RenderComponent = CreateDefaultSubobject<UPaperTileMapComponent>(TEXT("RenderComponent"));
}

