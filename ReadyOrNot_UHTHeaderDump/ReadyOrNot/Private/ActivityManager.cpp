#include "ActivityManager.h"
#include "Templates/SubclassOf.h"

class UObject;
class UActivityManager;
class UBaseActivity;
class ACyberneticCharacter;

void UActivityManager::SetStartDelay(float NewDelayTime) {
}

bool UActivityManager::GiveActivityTo(UBaseActivity* InActivity, ACyberneticCharacter* InCharacter, bool bOverrideCurrentActivity, bool bClearActivityList) {
    return false;
}

bool UActivityManager::GiveActivitiesTo(const TArray<UBaseActivity*>& InActivities, ACyberneticCharacter* InCharacter, bool bOverrideCurrentActivity, bool bClearActivityList) {
    return false;
}

float UActivityManager::GetStartDelay() const {
    return 0.0f;
}

UActivityManager* UActivityManager::Get() {
    return NULL;
}

UBaseActivity* UActivityManager::CreateActivity(UObject* ContextObject, TSubclassOf<UBaseActivity> InActivityClass, const FString& InActivityName, float InActivityStartDelay) {
    return NULL;
}

bool UActivityManager::CanGiveActivityTo(UBaseActivity* InActivity, ACyberneticCharacter* InCharacter) {
    return false;
}

UActivityManager::UActivityManager() {
    this->GlobalStartDelay = 0.00f;
}

