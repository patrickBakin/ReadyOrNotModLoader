#include "DataSingleton.h"

void UDataSingleton::UnloadLevels() {
}

void UDataSingleton::RefreshInputKeyTable() {
}

void UDataSingleton::LoadLevels() {
}

UDataSingleton::UDataSingleton() {
    this->LookupData = NULL;
    this->bDrawBulletDebug = false;
    this->bDrawNoNameplates = false;
    this->bShowGrenadeDamage = false;
    this->ItemData = NULL;
    this->Dev_ItemData = NULL;
    this->WidgetData = NULL;
    this->PenetrationData = NULL;
    this->ItemDataLookupTable = NULL;
    this->AmmoDataLookupTable = NULL;
    this->AIDataLookupTable = NULL;
    this->LevelDataLookupTable = NULL;
    this->AnimationDataLookupTable = NULL;
    this->AnimatedIconLookupTable = NULL;
    this->DoorDataLookupTable = NULL;
    this->TrapDataLookupTable = NULL;
    this->ConversationLookupTable = NULL;
    this->GameSettingsLookupTable = NULL;
    this->CharacterLookOverrideTable = NULL;
    this->RonInputKeyTable = NULL;
    this->WidgetDataLookupTable = NULL;
    this->SuspectArmourDataTable = NULL;
    this->PairedInteractionDataTable = NULL;
    this->MoveStyleDataTable = NULL;
}

