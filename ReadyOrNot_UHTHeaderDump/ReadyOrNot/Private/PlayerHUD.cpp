#include "PlayerHUD.h"

class UUserWidget;
class APlayerController;
class UCanvasPanel;

void APlayerHUD::SetWidgetTranslationByMouseDelta(APlayerController* Controller, UUserWidget* Widget, float DeltaSeconds, float InterpSpeed, float InputScale, float ClampAt) {
}

void APlayerHUD::SetCanvasTranslationByMouseDelta(APlayerController* Controller, UCanvasPanel* Widget, float DeltaSeconds, float InterpSpeed, float InputScale, float ClampAt) {
}

APlayerHUD::APlayerHUD() {
    this->PlayerHUD = NULL;
}

