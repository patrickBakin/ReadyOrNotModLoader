#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameMode_PVP.h"
#include "SavedLoadout.h"
#include "GunGameGM.generated.h"

class ABaseItem;
class APlayerCharacter;
class AReadyOrNotPlayerState;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API AGunGameGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuddenDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ABaseItem>> Itemlist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLoadout DefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillsToProgress;
    
    AGunGameGM();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AReadyOrNotPlayerState*> FindTopKillers();
    
    UFUNCTION(BlueprintCallable)
    ABaseItem* EquipNextGun(APlayerCharacter* Player, bool bAdvanceGunIdx);
    
};

