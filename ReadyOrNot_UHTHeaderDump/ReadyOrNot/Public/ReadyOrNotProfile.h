#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECOOPMode.h"
#include "BasicLevelStats.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "ReadyOrNotProfile.generated.h"

class UReadyOrNotProfile;

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotProfile : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(EditAnywhere)
    uint32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FBasicLevelStats> LevelStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ChallengeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> CourseTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cash;
    
    UReadyOrNotProfile();
    UFUNCTION(BlueprintCallable)
    void SaveProfile();
    
    UFUNCTION(BlueprintCallable)
    static void SaveLevelStats(FBasicLevelStats InStats, bool& NewBestRating, bool& NewBestTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetProfile();
    
    UFUNCTION(BlueprintCallable)
    static void LoadLevelStats(FBasicLevelStats& OutStats, ECOOPMode Mode, const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    static UReadyOrNotProfile* CreateDefaultSavegame(TSubclassOf<UReadyOrNotProfile> ProfileClass, const FString& LoadSlotName);
    
};

