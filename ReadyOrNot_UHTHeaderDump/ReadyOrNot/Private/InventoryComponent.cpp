#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class ABaseArmour;
class ABaseItem;
class AHeadwear;

void UInventoryComponent::ThrowSpecificItem_Implementation(ABaseItem* Item) {
}

void UInventoryComponent::ThrowEquippedItem() {
}

void UInventoryComponent::ThrowAllWeapons() {
}

void UInventoryComponent::ThrowAllItems() {
}

void UInventoryComponent::Server_PlayTPHolster_Implementation(FItemChangeRequest ItemChangeRequest) {
}
bool UInventoryComponent::Server_PlayTPHolster_Validate(FItemChangeRequest ItemChangeRequest) {
    return true;
}

void UInventoryComponent::Server_ChangeEquippedItem_Implementation(FItemChangeRequest ItemChangeRequest) {
}
bool UInventoryComponent::Server_ChangeEquippedItem_Validate(FItemChangeRequest ItemChangeRequest) {
    return true;
}

void UInventoryComponent::Server_AttemptEquipNewLoadout_Implementation(FSavedLoadout Loadout) {
}
bool UInventoryComponent::Server_AttemptEquipNewLoadout_Validate(FSavedLoadout Loadout) {
    return true;
}

bool UInventoryComponent::RemoveInventoryItem(ABaseItem* Item, bool bNullOwner) {
    return false;
}

bool UInventoryComponent::PutItemInHands(ABaseItem* Item, bool bInstant, bool bForce) {
    return false;
}

void UInventoryComponent::PlayTPDraw(FItemChangeRequest ItemChangeRequest) {
}

void UInventoryComponent::PlayLocalHolster_Implementation(FItemChangeRequest ItemChangeRequest) {
}

void UInventoryComponent::PlayLocalDraw_Implementation(FItemChangeRequest ItemChangeRequest) {
}

void UInventoryComponent::OnRep_SpawnedGear() {
}

void UInventoryComponent::OnRep_ItemChangeRequest() {
}

void UInventoryComponent::OnRep_InventoryItemsChanged() {
}

void UInventoryComponent::OnActorRelevancyChanged(AActor* Actor, bool bIsRelevant) {
}

void UInventoryComponent::Multicast_NotifyInventoryItemsChanged_Implementation() {
}

bool UInventoryComponent::IsWearingHeadArmour() const {
    return false;
}

bool UInventoryComponent::IsWearingExplosiveVest() const {
    return false;
}

bool UInventoryComponent::IsWearingArmour() const {
    return false;
}

bool UInventoryComponent::IsWearingAntiFlashGoggles() const {
    return false;
}

bool UInventoryComponent::IsItemEquipped_Class(TSubclassOf<ABaseItem> ItemClass) const {
    return false;
}

bool UInventoryComponent::IsItemEquipped(EItemCategory ItemCategory) const {
    return false;
}

bool UInventoryComponent::IsEquippingSpecificItem(ABaseItem* Item) {
    return false;
}

bool UInventoryComponent::IsEquippingItemOfType(EItemCategory ItemCategory) {
    return false;
}

bool UInventoryComponent::IsEquippingItemOfClass(UClass* ClassType) {
    return false;
}

bool UInventoryComponent::IsEquippingItem() {
    return false;
}

bool UInventoryComponent::IsEquippedWithShield(const ABaseItem* Item) const {
    return false;
}

bool UInventoryComponent::IsAnyItemAttachedToHands() const {
    return false;
}

bool UInventoryComponent::IsAnyItemAttachedToBody() const {
    return false;
}

bool UInventoryComponent::IsAnyBlockingAnimationPlaying() const {
    return false;
}

bool UInventoryComponent::HolsterEquippedItem(bool bInstant) {
    return false;
}

bool UInventoryComponent::Holster(ABaseItem* Item, bool bInstant) {
    return false;
}

bool UInventoryComponent::HasInventoryItem(ABaseItem* Item) const {
    return false;
}

bool UInventoryComponent::HasAnyInventoryItemsOfType(EItemCategory ItemCategory) const {
    return false;
}

bool UInventoryComponent::HasAnyInventoryItemsOfClass(TSubclassOf<ABaseItem> ItemClass) const {
    return false;
}

bool UInventoryComponent::HasAnyInventoryItems() const {
    return false;
}

TArray<ABaseItem*> UInventoryComponent::GetRemovedInventoryItems() const {
    return TArray<ABaseItem*>();
}

FSavedLoadout UInventoryComponent::GetLastEquippedLoadout() const {
    return FSavedLoadout{};
}

TArray<ABaseItem*> UInventoryComponent::GetInventoryItemsOfType(EItemCategory ItemCategory) const {
    return TArray<ABaseItem*>();
}

TArray<ABaseItem*> UInventoryComponent::GetInventoryItems() const {
    return TArray<ABaseItem*>();
}

ABaseItem* UInventoryComponent::GetInventoryItemOfType(EItemCategory ItemCategory) const {
    return NULL;
}

ABaseItem* UInventoryComponent::GetInventoryItemOfClassType(EItemClass ItemClass) const {
    return NULL;
}

ABaseItem* UInventoryComponent::GetInventoryItemOfClass(UClass* Class, bool bCanEquipCheck) const {
    return NULL;
}

ABaseItem* UInventoryComponent::GetHolsteredItem() const {
    return NULL;
}

AHeadwear* UInventoryComponent::GetHeadwear() const {
    return NULL;
}

AHeadwear* UInventoryComponent::GetHeadArmour() const {
    return NULL;
}

ABaseItem* UInventoryComponent::GetEquippedItem() const {
    return NULL;
}

ABaseArmour* UInventoryComponent::GetArmour() const {
    return NULL;
}

void UInventoryComponent::EquipLoadout(FLoadout Loadout) {
}

void UInventoryComponent::EquipLastEquippedWeapon(bool bInstant, bool bForce) {
}

void UInventoryComponent::EquipLastEquippedItem(bool bInstant, bool bForce) {
}

ABaseItem* UInventoryComponent::EquipItemOfType(const EItemCategory ItemCategory, const bool bInstant) {
    return NULL;
}

ABaseItem* UInventoryComponent::EquipItemOfClass(UClass* ClassType, bool bInstant) {
    return NULL;
}

ABaseItem* UInventoryComponent::EquipItemFromGroup_Name(FName GroupName, int32 ItemCategoryIndex) {
    return NULL;
}

ABaseItem* UInventoryComponent::EquipItemFromGroup_Index(int32 GroupIndex, int32 ItemCategoryIndex) {
    return NULL;
}

bool UInventoryComponent::EquipHolsteredItem(bool bInstant) {
    return false;
}

void UInventoryComponent::EquipDefaultItems(bool bItemReplicates, bool bEquipToHands) {
}

bool UInventoryComponent::DestroyInventoryItem(ABaseItem* Item) {
    return false;
}

void UInventoryComponent::DestroyAllEquippedItems() {
}

int32 UInventoryComponent::CountInventoryItemType(EItemCategory ItemCategory) const {
    return 0;
}

void UInventoryComponent::Client_NotifyInventorySpawned_Implementation() {
}

void UInventoryComponent::Client_NotifyInventoryItemsDestroyed_Implementation() {
}

void UInventoryComponent::Client_NotifyInventoryItemsChanged_Implementation() {
}

bool UInventoryComponent::CanEquip(ABaseItem* Item) {
    return false;
}

bool UInventoryComponent::AddInventoryItem(ABaseItem* Item) {
    return false;
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, LatestItemChangeRequest);
    DOREPLIFETIME(UInventoryComponent, LastEquippedItem);
    DOREPLIFETIME(UInventoryComponent, LastEquippedWeapon);
    DOREPLIFETIME(UInventoryComponent, InventoryItems);
    DOREPLIFETIME(UInventoryComponent, RemovedInventoryItems);
    DOREPLIFETIME(UInventoryComponent, SpawnedGear);
    DOREPLIFETIME(UInventoryComponent, LastEquippedLoadout);
    DOREPLIFETIME(UInventoryComponent, SelectedDevice);
}

UInventoryComponent::UInventoryComponent() {
    this->QueuedItemSwap = NULL;
    this->LastEquippedItem = NULL;
    this->LastEquippedWeapon = NULL;
    this->SelectedDevice = NULL;
}

