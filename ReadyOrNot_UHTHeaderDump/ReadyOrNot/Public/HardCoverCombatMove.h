#pragma once
#include "CoreMinimal.h"
#include "BaseCombatMoveActivity.h"
#include "CoverInstigatorStimulus.h"
#include "HardCoverCombatMove.generated.h"

class UBaseActivity;
class ACyberneticController;
class AReadyOrNotCharacter;
class UTakeCoverAtLandmarkActivity;
class UTakeCoverActivity;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UHardCoverCombatMove : public UBaseCombatMoveActivity {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoverFoundDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCoverEventDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTakeCoverActivity* TakeCoverActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTakeCoverAtLandmarkActivity* TakeCoverAtLandmarkActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastTrackedEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverInstigatorStimulus LastCoverInstigatorStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverInstigatorStimulus PendingCoverInstigatorStimulus;
    
public:
    UHardCoverCombatMove();
protected:
    UFUNCTION(BlueprintCallable)
    void TrackNewEnemy(AReadyOrNotCharacter* NewTrackedEnemy);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeCoverAtLandmarkActivityFinished(UBaseActivity* Activity, ACyberneticController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeCoverActivityFinished(UBaseActivity* Activity, ACyberneticController* Controller);
    
};

