#include "ReplayControls.h"

class AReadyOrNotCharacter;

AReadyOrNotCharacter* UReplayControls::GetFollowCharacter(const FString& InName) {
    return NULL;
}

void UReplayControls::GetAllFollowableCharacters(TArray<FString>& OutNames) {
}

UReplayControls::UReplayControls() : UUserWidget(FObjectInitializer::Get()) {
}

