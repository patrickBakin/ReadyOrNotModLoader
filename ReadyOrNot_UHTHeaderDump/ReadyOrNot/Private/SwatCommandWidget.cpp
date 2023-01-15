#include "SwatCommandWidget.h"

void USwatCommandWidget::RespondToSWATCommand(FSwatCommand Command, ETeamType TeamType, FHitResult CommandContextualData) {
}


bool USwatCommandWidget::HasQueuedCommandForTeam(ETeamType TeamType) const {
    return false;
}

bool USwatCommandWidget::HasQueuedCommandForActiveTeam() const {
    return false;
}

bool USwatCommandWidget::GetSubCommands(FSwatCommand Command, TArray<FSwatCommand>& OutSubCommands) {
    return false;
}

FKey USwatCommandWidget::GetInputTwo() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputThree() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputSix() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputSeven() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputOne() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputNine() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputFour() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputFive() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputEight() {
    return FKey{};
}

FKey USwatCommandWidget::GetInputBack() {
    return FKey{};
}

void USwatCommandWidget::DoCommand(FSwatCommand Command, bool bFromQueue, ETeamType ActiveTeamOverride, FHitResult ContextualDataOverride, bool bOverrideContextualData) {
}

USwatCommandWidget::USwatCommandWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LastSubCommandPageIndex = 0;
    this->ActiveTeamType = ETeamType::TT_SQUAD;
    this->ExecutionTeamType = ETeamType::TT_SQUAD;
    this->DefaultCommand = ESwatCommand::SC_FallIn;
    this->DefaultDoorOpenCommand = ESwatCommand::SC_MoveAndClear;
    this->DefaultDoorUnknownCommand = ESwatCommand::SC_StackUp;
    this->DefaultCheckDoorCommand = ESwatCommand::SC_CheckDoor;
    this->DefaultDoorLockedCommand = ESwatCommand::SC_PickLock;
    this->DefaultDoorUnlockedCommand = ESwatCommand::SC_OpenAndClear;
    this->SWATManager = NULL;
    this->OpenMenuEvent = NULL;
    this->OpenSubCommandMenuEvent = NULL;
    this->ExecuteCommandEvent = NULL;
    this->Flashbang = NULL;
    this->Stinger = NULL;
    this->CSGas = NULL;
    this->bHoldingQueueCommandKey = false;
}

