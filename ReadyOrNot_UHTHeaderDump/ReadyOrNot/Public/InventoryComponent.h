#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SpawnedGear.h"
#include "ItemSelectionGroup.h"
#include "ItemChangeRequest.h"
#include "Loadout.h"
#include "SavedLoadout.h"
#include "EItemClass.h"
#include "EItemCategory.h"
#include "InventoryComponent.generated.h"

class AActor;
class ABaseArmour;
class ABaseItem;
class ABaseWeapon;
class AHeadwear;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerItemChanged, ABaseItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemRemoved, ABaseItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemEquipped, ABaseItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEquippedItemChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClientOnItemAddedToInventory, ABaseItem*, Item);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquippedItemChanged OnEquippedItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClientOnItemAddedToInventory OnClientItemAddedToInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemEquipped OnItemAddedToInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemRemoved OnItemRemovedFromInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerItemChanged OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerItemChanged OnItemHolstered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemChangeRequest, meta=(AllowPrivateAccess=true))
    FItemChangeRequest LatestItemChangeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemChangeRequest LastReceivedItemChangeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* QueuedItemSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABaseItem* LastEquippedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABaseWeapon* LastEquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InventoryItemsChanged, meta=(AllowPrivateAccess=true))
    TArray<ABaseItem*> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InventoryItemsChanged, meta=(AllowPrivateAccess=true))
    TArray<ABaseItem*> RemovedInventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpawnedGear, meta=(AllowPrivateAccess=true))
    FSpawnedGear SpawnedGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSavedLoadout LastEquippedLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABaseItem* SelectedDevice;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemSelectionGroup> ItemSelectionGroups;
    
    UInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ThrowSpecificItem(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void ThrowEquippedItem();
    
    UFUNCTION(BlueprintCallable)
    void ThrowAllWeapons();
    
    UFUNCTION(BlueprintCallable)
    void ThrowAllItems();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PlayTPHolster(FItemChangeRequest ItemChangeRequest);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ChangeEquippedItem(FItemChangeRequest ItemChangeRequest);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AttemptEquipNewLoadout(FSavedLoadout Loadout);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInventoryItem(ABaseItem* Item, bool bNullOwner);
    
    UFUNCTION(BlueprintCallable)
    bool PutItemInHands(ABaseItem* Item, bool bInstant, bool bForce);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayTPDraw(FItemChangeRequest ItemChangeRequest);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PlayLocalHolster(FItemChangeRequest ItemChangeRequest);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PlayLocalDraw(FItemChangeRequest ItemChangeRequest);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SpawnedGear();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemChangeRequest();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_InventoryItemsChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorRelevancyChanged(AActor* Actor, bool bIsRelevant);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_NotifyInventoryItemsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWearingHeadArmour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWearingExplosiveVest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWearingArmour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWearingAntiFlashGoggles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemEquipped_Class(TSubclassOf<ABaseItem> ItemClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemEquipped(EItemCategory ItemCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippingSpecificItem(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippingItemOfType(EItemCategory ItemCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippingItemOfClass(UClass* ClassType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippingItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippedWithShield(const ABaseItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyItemAttachedToHands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyItemAttachedToBody() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyBlockingAnimationPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    bool HolsterEquippedItem(bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    bool Holster(ABaseItem* Item, bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInventoryItem(ABaseItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyInventoryItemsOfType(EItemCategory ItemCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyInventoryItemsOfClass(TSubclassOf<ABaseItem> ItemClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyInventoryItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABaseItem*> GetRemovedInventoryItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSavedLoadout GetLastEquippedLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABaseItem*> GetInventoryItemsOfType(EItemCategory ItemCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ABaseItem*> GetInventoryItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseItem* GetInventoryItemOfType(EItemCategory ItemCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseItem* GetInventoryItemOfClassType(EItemClass ItemClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseItem* GetInventoryItemOfClass(UClass* Class, bool bCanEquipCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseItem* GetHolsteredItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeadwear* GetHeadwear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHeadwear* GetHeadArmour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABaseArmour* GetArmour() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipLoadout(FLoadout Loadout);
    
    UFUNCTION(BlueprintCallable)
    void EquipLastEquippedWeapon(bool bInstant, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void EquipLastEquippedItem(bool bInstant, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    ABaseItem* EquipItemOfType(const EItemCategory ItemCategory, const bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    ABaseItem* EquipItemOfClass(UClass* ClassType, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    ABaseItem* EquipItemFromGroup_Name(FName GroupName, int32 ItemCategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    ABaseItem* EquipItemFromGroup_Index(int32 GroupIndex, int32 ItemCategoryIndex);
    
    UFUNCTION(BlueprintCallable)
    bool EquipHolsteredItem(bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void EquipDefaultItems(bool bItemReplicates, bool bEquipToHands);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyInventoryItem(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllEquippedItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountInventoryItemType(EItemCategory ItemCategory) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyInventorySpawned();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyInventoryItemsDestroyed();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyInventoryItemsChanged();
    
    UFUNCTION(BlueprintCallable)
    bool CanEquip(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddInventoryItem(ABaseItem* Item);
    
};

