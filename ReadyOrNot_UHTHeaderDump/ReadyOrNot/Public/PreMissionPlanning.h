#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SavedLoadout.h"
#include "EFireMode.h"
#include "EItemClass.h"
#include "EPreMissionSubCategory.h"
#include "EItemType.h"
#include "EEquippingSwat.h"
#include "LoadoutPreset.h"
#include "SavedWeaponPreset.h"
#include "WeaponPreset.h"
#include "WeaponData.h"
#include "SavedWeaponAttachmentData.h"
#include "DeviceData.h"
#include "ArmourData.h"
#include "PreMissionPlanning.generated.h"

class UFMODEvent;
class ABaseItem;
class AReadyOrNotGameState;
class ABaseWeapon;
class AReadyOrNotCharacter;
class UWeaponAttachment;
class APlayerCharacter;
class UPreMissionPlanning;
class AReadyOrNotPlayerState;
class AReadyOrNotPlayerController;
class USkinComponent;
class ULevelStreaming;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UPreMissionPlanning : public UBaseWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestRefresh);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWeaponCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenInQuartermaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCustomizingPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> CustomizeItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotGameState* gs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerController* PC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* ps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* PreMissionStreamedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* LoadoutMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* PreviewPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquippingSwat EquippingSwatMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquippingSwat, FSavedLoadout> LastSavedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLoadout ActiveLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLoadoutPreset> LoadoutPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* EquippingPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseItem>, FSavedWeaponPreset> WeaponToWeaponPresetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseItem>, FSavedWeaponAttachmentData> WeaponToAttachmentsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseWeapon>, EFireMode> WeaponClassToDefaultFireModeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveCameraTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestRefresh OnRequestRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerCharacter> RedTeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerCharacter> BlueTeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerCharacter> VIPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AReadyOrNotCharacter*, AReadyOrNotPlayerState*> PlayerStatePreviewMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ABaseItem*> WorkBenchItemPtrMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType LastSetItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemClass LastSetItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> LastSetItemObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUpdateWithUI;
    
    UPreMissionPlanning();
    UFUNCTION(BlueprintCallable)
    void UpdateWorkbenchItemAttachments();
    
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponPresets(TSubclassOf<ABaseItem> Weapon, FSavedWeaponPreset Presets);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponPreset(TSubclassOf<ABaseItem> Weapon, FWeaponPreset PresetData, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponDefaultFireMode(TSubclassOf<ABaseWeapon> Weapon, EFireMode NewDefaultFireMode);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewWeaponSkin(bool IsSecondary, TSubclassOf<USkinComponent> SkinAttachment);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewWeaponAttachments(bool IsSecondary, TSubclassOf<UWeaponAttachment> Attachment);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewCharacterSecondary();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewCharacterPrimary();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewCharacterLongTactical();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewCharacterHeadwear();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewCharacterArmour();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePreviewCharacter(AReadyOrNotPlayerState* InPreviewPlayerState, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetWorkbenchItemClass(TSubclassOf<ABaseItem> Item, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetSubcategory(EPreMissionSubCategory NewSubCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryWeapon(FWeaponData WeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryUnderbarrelAttachment(TSubclassOf<UWeaponAttachment> UnderbarrelAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryStockAttachment(TSubclassOf<UWeaponAttachment> StockAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondarySkinAttachment(TSubclassOf<USkinComponent> SkinAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryScopeAttachment(TSubclassOf<UWeaponAttachment> ScopeAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryOverbarrelAttachment(TSubclassOf<UWeaponAttachment> OverbarrelAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryMuzzleAttachment(TSubclassOf<UWeaponAttachment> MuzzleAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryIlluminatorAttachment(TSubclassOf<UWeaponAttachment> IlluminatorAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryGripAttachment(TSubclassOf<UWeaponAttachment> GripAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryAmmunitionAttachment(TSubclassOf<UWeaponAttachment> AmmunitionAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryWeapon(FWeaponData WeaponData);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryUnderbarrelAttachment(TSubclassOf<UWeaponAttachment> UnderbarrelAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryStockAttachment(TSubclassOf<UWeaponAttachment> StockAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimarySkinAttachment(TSubclassOf<USkinComponent> SkinAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryScopeAttachment(TSubclassOf<UWeaponAttachment> ScopeAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryOverbarrelAttachment(TSubclassOf<UWeaponAttachment> OverbarrelAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryMuzzleAttachment(TSubclassOf<UWeaponAttachment> MuzzleAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryIlluminatorAttachment(TSubclassOf<UWeaponAttachment> IlluminatorAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryGripAttachment(TSubclassOf<UWeaponAttachment> GripAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryAmmunitionAttachment(TSubclassOf<UWeaponAttachment> AmmunitionAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSkin(TSubclassOf<USkinComponent> SkinCompClass);
    
    UFUNCTION(BlueprintCallable)
    void SetLongTactical(TSubclassOf<ABaseItem> LongTactical);
    
    UFUNCTION(BlueprintCallable)
    void SetLockInput(bool bShouldLockInput);
    
    UFUNCTION(BlueprintCallable)
    void SetLightColorByTag(FName Tag, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetItem_V2(EItemClass ItemClass, TSubclassOf<ABaseItem> ItemObjectClass);
    
    UFUNCTION(BlueprintCallable)
    void SetItem(EItemType ItemType, TSubclassOf<ABaseItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void SetHeadwear(TSubclassOf<ABaseItem> Headwear);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippingSwatMember(EEquippingSwat NewEquippingSwat, AReadyOrNotPlayerState* NewEquippingPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyArmour(TSubclassOf<ABaseItem> BodyArmour);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCameraByTag(FName Tag, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SaveWeaponPresets();
    
    UFUNCTION(BlueprintCallable)
    void SaveWeaponDefaultFireMode();
    
    UFUNCTION(BlueprintCallable)
    void SaveWeaponAttachments();
    
    UFUNCTION(BlueprintCallable)
    void SaveLoadoutPresets();
    
    UFUNCTION(BlueprintCallable)
    void SaveItemClassAsSlot(EItemType ItemType, TSubclassOf<ABaseItem> Class);
    
    UFUNCTION(BlueprintCallable)
    void SaveActiveLoadout();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationOnQuartermaster(const FString& Animation);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationOnPreviewCharacter(const FString& Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponDefaultFireModesLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwatCharacterChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutPresetsSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutPresetsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutItemPresetsSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutItemPresetsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutItemAttachmentsSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadoutItemAttachmentsLoaded();
    
    UFUNCTION(BlueprintCallable)
    void LoadWeaponPresets();
    
    UFUNCTION(BlueprintCallable)
    void LoadWeaponDefaultFireModes();
    
    UFUNCTION(BlueprintCallable)
    void LoadWeaponAttachments();
    
    UFUNCTION(BlueprintCallable)
    void LoadLoadoutPresets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemType ItemClassToItemType(EItemClass InItemClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInLobby();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyWeaponVisible();
    
    UFUNCTION(BlueprintCallable)
    void Init(bool bReadOnly, FSavedLoadout PreviewLoadout);
    
    UFUNCTION(BlueprintCallable)
    void HideWeapons(bool bHidePrimary, bool bHideSecondary, float Delay);
    
    UFUNCTION(BlueprintCallable)
    void HideSecondary(bool bIsHidden);
    
    UFUNCTION(BlueprintCallable)
    void HidePrimary(bool bIsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSavedWeaponPreset GetWeaponPresetsData(TSubclassOf<ABaseItem> Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWeaponPreset GetWeaponPresetData(TSubclassOf<ABaseItem> Weapon, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    TArray<FWeaponData> GetWeaponData(EItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPreMissionSubCategory GetSubcategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPreMissionPlanning* GetPremissionPlanning();
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABaseItem> GetLastItemInSlot(EItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSavedWeaponAttachmentData GetItemAttachmentData(TSubclassOf<ABaseItem> Weapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquippingSwatMember(EEquippingSwat& EquippingSwat);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDeviceData> GetDeviceData(EItemType ItemType);
    
    UFUNCTION(BlueprintCallable)
    AReadyOrNotCharacter* GetDefaultPreviewCharacter();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<USkinComponent>> GetAvailablePlayerSkins();
    
    UFUNCTION(BlueprintCallable)
    TArray<FArmourData> GetArmourData(EItemType ItemType);
    
    UFUNCTION(BlueprintCallable)
    void EquipSecondary();
    
    UFUNCTION(BlueprintCallable)
    void EquipPrimary();
    
    UFUNCTION(BlueprintCallable)
    void DoSaveLoadout(EEquippingSwat SwatMember, FSavedLoadout Loadout);
    
    UFUNCTION(BlueprintCallable)
    void DoPrimaryWeaponPreviewBlend();
    
    UFUNCTION(BlueprintCallable)
    void ClearPreviewWeaponSkin(bool IsSecondary);
    
    UFUNCTION(BlueprintCallable)
    void CleanSecondaryGun();
    
    UFUNCTION(BlueprintCallable)
    void CleanPrimaryGun();
    
    UFUNCTION(BlueprintCallable)
    void AttachSecondaryToSocket(FName Socket);
    
    UFUNCTION(BlueprintCallable)
    void AttachPrimaryToSocket(FName Socket);
    
};

