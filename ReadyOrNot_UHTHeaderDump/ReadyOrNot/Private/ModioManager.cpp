#include "ModioManager.h"

class UModioManager;

bool UModioManager::IsRestartRequired() const {
    return false;
}

bool UModioManager::IsModIoEnabled() {
    return false;
}

UModioManager* UModioManager::GetInstance() {
    return NULL;
}

void UModioManager::ClearUserData() {
}

UModioManager::UModioManager() {
}

