#pragma once
#include "CoreMinimal.h"
#include "TutorialMissionData.h"
#include "CoopGS.h"
#include "SwatCommand.h"
#include "TutorialGS.generated.h"

class UWorld;
class USwatCommandWidget;
class ULevelStreaming;

UCLASS(Blueprintable)
class READYORNOT_API ATutorialGS : public ACoopGS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialMissionData CurrentTutorialData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> TutorialMenuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* TutorialMenuStreamedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* CurrentTutorialStreamedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ShootingRangeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> KillHouseLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> BasicControlsLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> MirrorgunLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> StackUpLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ArrestLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> GrenadesLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> MovementLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedUsingTutorialMenu;
    
    ATutorialGS();
    UFUNCTION(BlueprintCallable)
    void SetCurrentTutorialData(FTutorialMissionData TutorialData);
    
    UFUNCTION(BlueprintCallable)
    void OnPostUpdateSwatCommands(USwatCommandWidget* Widget, TArray<FSwatCommand>& SwatCommands);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UWorld> GetCurrentTutorialStreamedLevel();
    
};

