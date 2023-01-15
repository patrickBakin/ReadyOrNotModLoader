#include "AnimNotify_SpawnThrownItem.h"

UAnimNotify_SpawnThrownItem::UAnimNotify_SpawnThrownItem() {
    this->ItemClass = NULL;
    this->bLocalOnly = false;
    this->bNonLocalOnly = false;
    this->BoneToSpawnOn = TEXT("hand_RI");
    this->bCustomThrowDirection = false;
}

