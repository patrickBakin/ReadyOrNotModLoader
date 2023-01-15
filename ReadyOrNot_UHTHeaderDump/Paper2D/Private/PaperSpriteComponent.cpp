#include "PaperSpriteComponent.h"

class UPaperSprite;

void UPaperSpriteComponent::SetSpriteColor(FLinearColor NewColor) {
}

bool UPaperSpriteComponent::SetSprite(UPaperSprite* NewSprite) {
    return false;
}

UPaperSprite* UPaperSpriteComponent::GetSprite() {
    return NULL;
}

UPaperSpriteComponent::UPaperSpriteComponent() {
    this->SourceSprite = NULL;
    this->MaterialOverride = NULL;
}

