#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "AnimatedIconWidget.generated.h"

class UInteractableComponent;
class UMaterialInterface;
class UImage;
class USizeBox;
class UOverlay;
class UWidgetSwitcher;
class UWidgetAnimation;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API UAnimatedIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> IconImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPaused: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* InteractCircle_Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USizeBox* InteractIcon_SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* IconSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ProgressCircle_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Interact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Focus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InteractionInvalidTintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ProgressCircleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* ParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MID_ProgressCircle;
    
public:
    UAnimatedIconWidget();
    UFUNCTION(BlueprintCallable)
    void UnPauseIconAnim();
    
    UFUNCTION(BlueprintCallable)
    void StopInteractAnim();
    
    UFUNCTION(BlueprintCallable)
    void StopFocusAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInteractState(bool bValid);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractIconSize(float InInteractCircleSize, float InInteractIconSize);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentProgress(float Percent);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveIcon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void PlayInteractAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayFocusAnim(bool bReverse);
    
    UFUNCTION(BlueprintCallable)
    void PauseIconAnim();
    
};

