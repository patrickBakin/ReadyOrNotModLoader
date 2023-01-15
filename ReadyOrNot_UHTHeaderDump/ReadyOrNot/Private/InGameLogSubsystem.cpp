#include "InGameLogSubsystem.h"

bool UInGameLogSubsystem::GetNextLogMessage_PVP(FInGameLogMessage_PVP& OutLogMessage) {
    return false;
}

bool UInGameLogSubsystem::GetNextLogMessage(FInGameLogMessage& OutLogMessage) {
    return false;
}

void UInGameLogSubsystem::EnqueuePVPMessages(const TArray<FInGameLogMessage_PVP>& InLogMessages) {
}

void UInGameLogSubsystem::EnqueuePVPMessage(FInGameLogMessage_PVP InLogMessage) {
}

void UInGameLogSubsystem::EnqueueLogMessages(const TArray<FInGameLogMessage>& InLogMessages) {
}

void UInGameLogSubsystem::EnqueueLogMessage(FInGameLogMessage InLogMessage) {
}

UInGameLogSubsystem::UInGameLogSubsystem() {
}

