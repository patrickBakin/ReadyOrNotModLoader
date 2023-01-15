#include "LoadoutEquipOptions.h"

FLoadoutEquipOptions::FLoadoutEquipOptions() {
    this->EquipItemCategory = EItemCategory::IC_None;
    this->bReplicates = false;
    this->OverridePlayerState = NULL;
    this->bSanitizeLoadout = false;
}

