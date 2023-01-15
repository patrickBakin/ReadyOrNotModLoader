#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotPlayerController.h"
#include "ReplayController.generated.h"

class UUserWidget;
class AReplayCameraPawn;

UCLASS(Blueprintable)
class READYORNOT_API AReplayController : public AReadyOrNotPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReplayCameraPawn* ReplayCameraPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ReplayControls;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* EscapeWidgetInstance;
    
public:
    AReplayController();
    UFUNCTION(BlueprintCallable)
    void SetViewOverride();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayTimeToSeconds(int32 Seconds);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentReplayPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentReplayPausedState(bool bDoPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReplayTotalTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReplayCurrentTimeInSeconds() const;
    
};

