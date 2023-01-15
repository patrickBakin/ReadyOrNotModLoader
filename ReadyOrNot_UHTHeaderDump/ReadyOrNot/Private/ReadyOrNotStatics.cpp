#include "ReadyOrNotStatics.h"

class AReadyOrNotGameState;
class AReadyOrNotGameMode;
class AConversationManager;
class AReadyOrNotLevelScript;
class UReadyOrNotGameInstance;
class AReadyOrNotSignificanceManager;
class AReadyOrNotPlayerController;

AReadyOrNotSignificanceManager* UReadyOrNotStatics::GetReadyOrNotSignificanceManager() {
    return NULL;
}

AReadyOrNotPlayerController* UReadyOrNotStatics::GetReadyOrNotPlayerController() {
    return NULL;
}

AReadyOrNotLevelScript* UReadyOrNotStatics::GetReadyOrNotLevelScript() {
    return NULL;
}

AReadyOrNotGameState* UReadyOrNotStatics::GetReadyOrNotGameState() {
    return NULL;
}

AReadyOrNotGameMode* UReadyOrNotStatics::GetReadyOrNotGameMode() {
    return NULL;
}

UReadyOrNotGameInstance* UReadyOrNotStatics::GetReadyOrNotGameInstance() {
    return NULL;
}

AConversationManager* UReadyOrNotStatics::GetConversationManager() {
    return NULL;
}

bool UReadyOrNotStatics::DoesMapExist(const FString& Map) {
    return false;
}

UReadyOrNotStatics::UReadyOrNotStatics() {
}

