#include "ItemData.h"
#include "Templates/SubclassOf.h"
#include "BaseItem.h"

class UItemData;
class USkinComponent;

int32 UItemData::GetDeviceAmount(TSubclassOf<ABaseItem> Item) {
    return 0;
}

TArray<TSubclassOf<USkinComponent>> UItemData::GetAvailableSkinsForWeapon(UItemData* ItemData, TSubclassOf<ABaseItem> Item, FWeaponData& WeaponData) {
    return TArray<TSubclassOf<USkinComponent>>();
}

UItemData::UItemData() {
    this->NullItem = ABaseItem::StaticClass();
    this->NullPrimaryScopeAttachment = NULL;
    this->NullMuzzleAttachment = NULL;
    this->NullOverbarrelAttachment = NULL;
    this->NullUnderbarrelAttachment = NULL;
    this->NullStockAttachment = NULL;
    this->NullGripAttachment = NULL;
    this->NullIlluminatorAttachment = NULL;
    this->NullAmmunitionAttachment = NULL;
    this->FactorySkin = NULL;
    this->AttachmentPointsBase = 0;
}

