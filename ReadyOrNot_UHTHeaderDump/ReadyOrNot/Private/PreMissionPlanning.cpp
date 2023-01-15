#include "PreMissionPlanning.h"
#include "Templates/SubclassOf.h"

class ABaseItem;
class ABaseWeapon;
class AReadyOrNotCharacter;
class UWeaponAttachment;
class UPreMissionPlanning;
class AReadyOrNotPlayerState;
class USkinComponent;

void UPreMissionPlanning::UpdateWorkbenchItemAttachments() {
}

void UPreMissionPlanning::UpdateWeaponPresets(TSubclassOf<ABaseItem> Weapon, FSavedWeaponPreset Presets) {
}

void UPreMissionPlanning::UpdateWeaponPreset(TSubclassOf<ABaseItem> Weapon, FWeaponPreset PresetData, int32 Index) {
}

void UPreMissionPlanning::UpdateWeaponDefaultFireMode(TSubclassOf<ABaseWeapon> Weapon, EFireMode NewDefaultFireMode) {
}

void UPreMissionPlanning::UpdatePreviewWeaponSkin(bool IsSecondary, TSubclassOf<USkinComponent> SkinAttachment) {
}

void UPreMissionPlanning::UpdatePreviewWeaponAttachments(bool IsSecondary, TSubclassOf<UWeaponAttachment> Attachment) {
}

void UPreMissionPlanning::UpdatePreviewCharacterSecondary() {
}

void UPreMissionPlanning::UpdatePreviewCharacterPrimary() {
}

void UPreMissionPlanning::UpdatePreviewCharacterLongTactical() {
}

void UPreMissionPlanning::UpdatePreviewCharacterHeadwear() {
}

void UPreMissionPlanning::UpdatePreviewCharacterArmour() {
}

void UPreMissionPlanning::UpdatePreviewCharacter(AReadyOrNotPlayerState* InPreviewPlayerState, FName Tag) {
}

void UPreMissionPlanning::SetWorkbenchItemClass(TSubclassOf<ABaseItem> Item, FName Tag) {
}

void UPreMissionPlanning::SetSubcategory(EPreMissionSubCategory NewSubCategory) {
}

void UPreMissionPlanning::SetSecondaryWeapon(FWeaponData WeaponData) {
}

void UPreMissionPlanning::SetSecondaryUnderbarrelAttachment(TSubclassOf<UWeaponAttachment> UnderbarrelAttachment) {
}

void UPreMissionPlanning::SetSecondaryStockAttachment(TSubclassOf<UWeaponAttachment> StockAttachment) {
}

void UPreMissionPlanning::SetSecondarySkinAttachment(TSubclassOf<USkinComponent> SkinAttachment) {
}

void UPreMissionPlanning::SetSecondaryScopeAttachment(TSubclassOf<UWeaponAttachment> ScopeAttachment) {
}

void UPreMissionPlanning::SetSecondaryOverbarrelAttachment(TSubclassOf<UWeaponAttachment> OverbarrelAttachment) {
}

void UPreMissionPlanning::SetSecondaryMuzzleAttachment(TSubclassOf<UWeaponAttachment> MuzzleAttachment) {
}

void UPreMissionPlanning::SetSecondaryIlluminatorAttachment(TSubclassOf<UWeaponAttachment> IlluminatorAttachment) {
}

void UPreMissionPlanning::SetSecondaryGripAttachment(TSubclassOf<UWeaponAttachment> GripAttachment) {
}

void UPreMissionPlanning::SetSecondaryAmmunitionAttachment(TSubclassOf<UWeaponAttachment> AmmunitionAttachment) {
}

void UPreMissionPlanning::SetPrimaryWeapon(FWeaponData WeaponData) {
}

void UPreMissionPlanning::SetPrimaryUnderbarrelAttachment(TSubclassOf<UWeaponAttachment> UnderbarrelAttachment) {
}

void UPreMissionPlanning::SetPrimaryStockAttachment(TSubclassOf<UWeaponAttachment> StockAttachment) {
}

void UPreMissionPlanning::SetPrimarySkinAttachment(TSubclassOf<USkinComponent> SkinAttachment) {
}

void UPreMissionPlanning::SetPrimaryScopeAttachment(TSubclassOf<UWeaponAttachment> ScopeAttachment) {
}

void UPreMissionPlanning::SetPrimaryOverbarrelAttachment(TSubclassOf<UWeaponAttachment> OverbarrelAttachment) {
}

void UPreMissionPlanning::SetPrimaryMuzzleAttachment(TSubclassOf<UWeaponAttachment> MuzzleAttachment) {
}

void UPreMissionPlanning::SetPrimaryIlluminatorAttachment(TSubclassOf<UWeaponAttachment> IlluminatorAttachment) {
}

void UPreMissionPlanning::SetPrimaryGripAttachment(TSubclassOf<UWeaponAttachment> GripAttachment) {
}

void UPreMissionPlanning::SetPrimaryAmmunitionAttachment(TSubclassOf<UWeaponAttachment> AmmunitionAttachment) {
}

void UPreMissionPlanning::SetPlayerSkin(TSubclassOf<USkinComponent> SkinCompClass) {
}

void UPreMissionPlanning::SetLongTactical(TSubclassOf<ABaseItem> LongTactical) {
}

void UPreMissionPlanning::SetLockInput(bool bShouldLockInput) {
}

void UPreMissionPlanning::SetLightColorByTag(FName Tag, FLinearColor Color) {
}

void UPreMissionPlanning::SetItem_V2(EItemClass ItemClass, TSubclassOf<ABaseItem> ItemObjectClass) {
}

void UPreMissionPlanning::SetItem(EItemType ItemType, TSubclassOf<ABaseItem> ItemClass) {
}

void UPreMissionPlanning::SetHeadwear(TSubclassOf<ABaseItem> Headwear) {
}

void UPreMissionPlanning::SetEquippingSwatMember(EEquippingSwat NewEquippingSwat, AReadyOrNotPlayerState* NewEquippingPlayerState) {
}

void UPreMissionPlanning::SetBodyArmour(TSubclassOf<ABaseItem> BodyArmour) {
}

void UPreMissionPlanning::SetActiveCameraByTag(FName Tag, float BlendTime) {
}

void UPreMissionPlanning::SaveWeaponPresets() {
}

void UPreMissionPlanning::SaveWeaponDefaultFireMode() {
}

void UPreMissionPlanning::SaveWeaponAttachments() {
}

void UPreMissionPlanning::SaveLoadoutPresets() {
}

void UPreMissionPlanning::SaveItemClassAsSlot(EItemType ItemType, TSubclassOf<ABaseItem> Class) {
}

void UPreMissionPlanning::SaveActiveLoadout() {
}

void UPreMissionPlanning::PlayAnimationOnQuartermaster(const FString& Animation) {
}

void UPreMissionPlanning::PlayAnimationOnPreviewCharacter(const FString& Animation) {
}











void UPreMissionPlanning::LoadWeaponPresets() {
}

void UPreMissionPlanning::LoadWeaponDefaultFireModes() {
}

void UPreMissionPlanning::LoadWeaponAttachments() {
}

void UPreMissionPlanning::LoadLoadoutPresets() {
}

EItemType UPreMissionPlanning::ItemClassToItemType(EItemClass InItemClass) const {
    return EItemType::IT_None;
}

bool UPreMissionPlanning::IsInLobby() {
    return false;
}

bool UPreMissionPlanning::IsAnyWeaponVisible() {
    return false;
}

void UPreMissionPlanning::Init(bool bReadOnly, FSavedLoadout PreviewLoadout) {
}

void UPreMissionPlanning::HideWeapons(bool bHidePrimary, bool bHideSecondary, float Delay) {
}

void UPreMissionPlanning::HideSecondary(bool bIsHidden) {
}

void UPreMissionPlanning::HidePrimary(bool bIsHidden) {
}

FSavedWeaponPreset UPreMissionPlanning::GetWeaponPresetsData(TSubclassOf<ABaseItem> Weapon) {
    return FSavedWeaponPreset{};
}

FWeaponPreset UPreMissionPlanning::GetWeaponPresetData(TSubclassOf<ABaseItem> Weapon, int32 Index) {
    return FWeaponPreset{};
}

TArray<FWeaponData> UPreMissionPlanning::GetWeaponData(EItemType ItemType) {
    return TArray<FWeaponData>();
}

EPreMissionSubCategory UPreMissionPlanning::GetSubcategory() {
    return EPreMissionSubCategory::None;
}

UPreMissionPlanning* UPreMissionPlanning::GetPremissionPlanning() {
    return NULL;
}

TSubclassOf<ABaseItem> UPreMissionPlanning::GetLastItemInSlot(EItemType ItemType) {
    return NULL;
}

FSavedWeaponAttachmentData UPreMissionPlanning::GetItemAttachmentData(TSubclassOf<ABaseItem> Weapon) {
    return FSavedWeaponAttachmentData{};
}

bool UPreMissionPlanning::GetInputLocked() {
    return false;
}

void UPreMissionPlanning::GetEquippingSwatMember(EEquippingSwat& EquippingSwat) {
}

TArray<FDeviceData> UPreMissionPlanning::GetDeviceData(EItemType ItemType) {
    return TArray<FDeviceData>();
}

AReadyOrNotCharacter* UPreMissionPlanning::GetDefaultPreviewCharacter() {
    return NULL;
}

TArray<TSubclassOf<USkinComponent>> UPreMissionPlanning::GetAvailablePlayerSkins() {
    return TArray<TSubclassOf<USkinComponent>>();
}

TArray<FArmourData> UPreMissionPlanning::GetArmourData(EItemType ItemType) {
    return TArray<FArmourData>();
}

void UPreMissionPlanning::EquipSecondary() {
}

void UPreMissionPlanning::EquipPrimary() {
}

void UPreMissionPlanning::DoSaveLoadout(EEquippingSwat SwatMember, FSavedLoadout Loadout) {
}

void UPreMissionPlanning::DoPrimaryWeaponPreviewBlend() {
}

void UPreMissionPlanning::ClearPreviewWeaponSkin(bool IsSecondary) {
}

void UPreMissionPlanning::CleanSecondaryGun() {
}

void UPreMissionPlanning::CleanPrimaryGun() {
}

void UPreMissionPlanning::AttachSecondaryToSocket(FName Socket) {
}

void UPreMissionPlanning::AttachPrimaryToSocket(FName Socket) {
}

UPreMissionPlanning::UPreMissionPlanning() {
    this->bIsWeaponCustomization = false;
    this->bOpenInQuartermaster = false;
    this->bIsCustomizingPrimary = false;
    this->CustomizeItemClass = NULL;
    this->gs = NULL;
    this->PC = NULL;
    this->ps = NULL;
    this->PreMissionStreamedLevel = NULL;
    this->PreviewPlayerState = NULL;
    this->EquippingSwatMember = EEquippingSwat::ES_None;
    this->bLoadedLoadout = false;
    this->EquippingPlayerState = NULL;
    this->LastSetItemType = EItemType::IT_None;
    this->LastSetItemClass = EItemClass::IC_NoClass;
    this->LastSetItemObjectClass = NULL;
    this->bCanUpdateWithUI = true;
}

