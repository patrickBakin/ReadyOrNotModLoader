#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerDetails.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "SavedLoadout.h"
#include "EFireMode.h"
#include "ETeamType.h"
#include "EItemType.h"
#include "LoadoutPreset.h"
#include "SavedWeaponPreset.h"
#include "SavedWeaponAttachmentData.h"
#include "ReadyOrNotSaveGame.generated.h"

class ABaseItem;
class UReadyOrNotSaveGame;
class ABaseWeapon;
class USkinComponent;

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(EditAnywhere)
    uint32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedLoadout> Loadouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDetails PlayerDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseItem>, FSavedWeaponAttachmentData> AttachmentSaveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETeamType, TSubclassOf<USkinComponent>> SkinSaveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemType, TSubclassOf<ABaseItem>> SavedWeaponClassOfTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseWeapon>, EFireMode> WeaponClassToDefaultFireModeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABaseItem>, FSavedWeaponPreset> WeaponToWeaponPresetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLoadoutPreset> LoadoutPresetMap;
    
    UPROPERTY(EditAnywhere)
    int64 PCDO;
    
    UReadyOrNotSaveGame();
    UFUNCTION(BlueprintCallable)
    static UReadyOrNotSaveGame* CreateDefaultSavegame(const FString& LoadSlotName);
    
};

