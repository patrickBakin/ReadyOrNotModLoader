#include "ScriptedLevelEvents.h"

class UBaseActivity;
class ACyberneticController;
class ACyberneticCharacter;
class APlayerCharacter;

void UScriptedLevelEvents::ScriptedStopAimingAtEvent(ACyberneticController* Controller) {
}

UBaseActivity* UScriptedLevelEvents::ScriptedShootAtEvent(ACyberneticController* Controller, APlayerCharacter* ForcedShootAtTarget) {
    return NULL;
}

UBaseActivity* UScriptedLevelEvents::ScriptedAimAtEvent(ACyberneticController* Controller, APlayerCharacter* ForcedLookAtTarget) {
    return NULL;
}

void UScriptedLevelEvents::GiveWorldBuildingActivityByTag(ACyberneticController* Controller, FName Tag, float TimeDoingActivity) {
}

APlayerCharacter* UScriptedLevelEvents::GetPlayerCharacterByTag(FName Tag) {
    return NULL;
}

ACyberneticController* UScriptedLevelEvents::GetCyberneticsControllerByTag(FName Tag) {
    return NULL;
}

ACyberneticCharacter* UScriptedLevelEvents::GetCyberneticsCharacterByTag(FName Tag) {
    return NULL;
}

UScriptedLevelEvents::UScriptedLevelEvents() {
}

