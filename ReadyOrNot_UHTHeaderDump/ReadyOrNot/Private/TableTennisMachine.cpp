#include "TableTennisMachine.h"
#include "Net/UnrealNetwork.h"

class UCanvas;

void ATableTennisMachine::StartGame() {
}

void ATableTennisMachine::SimulateGame(float DeltaTime, bool bDoLeftAI, bool bDoRightAI) {
}


void ATableTennisMachine::DrawGame(UCanvas* Canvas) {
}

void ATableTennisMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATableTennisMachine, Game);
}

ATableTennisMachine::ATableTennisMachine() {
    this->NumberTexture = NULL;
    this->BackgroundTexture = NULL;
    this->StartTexture = NULL;
    this->ReadyTexture = NULL;
    this->InsertCoinTexture = NULL;
    this->bShouldDrawInsertCoin = false;
}

