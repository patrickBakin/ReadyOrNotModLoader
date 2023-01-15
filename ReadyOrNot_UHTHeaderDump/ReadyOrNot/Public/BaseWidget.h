#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BaseWidget.generated.h"

class UFMODEvent;
class AReadyOrNotGameState;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseAxisDeltaThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GamepadAxisDeltaThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotGameState* RONGS;
    
public:
    UBaseWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateDebugInfo();
    
    UFUNCTION(BlueprintCallable)
    void ToggleWidgetVisibility(bool bNotHitTestable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopWidgetAnimation_Internal(UWidgetAnimation* InWidgetAnimation);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowWidget(bool bNotHitTestable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayWidgetAnimation_Internal(UWidgetAnimation* InWidgetAnimation, bool bRestartIfAlreadyPlaying);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundEffect(UFMODEvent* SoundEffectToPlay);
    
    UFUNCTION(BlueprintCallable)
    void PauseWidgetAnimation_Internal(UWidgetAnimation* InWidgetAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseAxisBeyondThreshold(const FVector2D& InMouseDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadAxisBeyondThreshold(const FVector2D& InGamepadAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsBlockingAnimationPlaying();
    
public:
    UFUNCTION(BlueprintCallable)
    void HideWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMouseMoved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMousePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMouseDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCenterScreenPosition();
    
};

