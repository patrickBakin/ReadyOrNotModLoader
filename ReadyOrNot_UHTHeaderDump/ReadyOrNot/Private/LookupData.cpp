#include "LookupData.h"

void ULookupData::EmptyData() {
}

ULookupData::ULookupData() {
    this->bToggleToDoAssetUpdate = false;
    this->bAddSelectedBlueprintToItemData = false;
    this->ItemDataLookupTable = NULL;
    this->bToggleForceLevelDataTable = false;
    this->LevelDataLookupTable = NULL;
    this->bToggleForceAIData = false;
    this->AIDataLookupTable = NULL;
}

