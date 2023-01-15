#include "ReadyOrNotSaveGame.h"

class UReadyOrNotSaveGame;

UReadyOrNotSaveGame* UReadyOrNotSaveGame::CreateDefaultSavegame(const FString& LoadSlotName) {
    return NULL;
}

UReadyOrNotSaveGame::UReadyOrNotSaveGame() {
    this->SaveSlotName = TEXT("GameSettings");
    this->UserIndex = 0;
    this->PCDO = 0;
}

