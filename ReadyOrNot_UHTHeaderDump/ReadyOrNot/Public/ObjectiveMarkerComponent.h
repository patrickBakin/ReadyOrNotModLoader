#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ObjectiveMarkerComponent.generated.h"

class UObjectiveMarkerWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UObjectiveMarkerComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCustomLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFadeOffscreen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDistanceScaleIcon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideIconOffscreen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCompletelyFadeWhenOverlappingOtherWidgets: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCompletelyFadeWhenClose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeAtDistance_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCompletelyFadeWhenFar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeAtDistance_Far;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideDistanceInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideDistanceInfoAtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideDirectionalArrow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayMarkerText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MarkerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UObjectiveMarkerWidget> MarkerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebug: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerWidget* ObjectiveMarkerWidget_Offscreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerWidget* ObjectiveMarkerWidget_Onscreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOffscreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestingFadeOut;
    
public:
    UObjectiveMarkerComponent();
    UFUNCTION(BlueprintCallable)
    void ToggleObjectiveMarkerVisibility();
    
    UFUNCTION(BlueprintCallable)
    void ShowObjectiveMarker();
    
    UFUNCTION(BlueprintCallable)
    void ShowMarkerText();
    
    UFUNCTION(BlueprintCallable)
    void ShowIcon();
    
    UFUNCTION(BlueprintCallable)
    void SetNewFadeDistance(float NewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerTextFontSize(int32 NewFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerTextColor(FLinearColor InIconColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerText(FText NewMarkerText);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSize(FVector2D NewIconSize);
    
    UFUNCTION(BlueprintCallable)
    void SetIconColor(FLinearColor InIconColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetIconBrush(FSlateBrush NewIconBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveMarkerOffscreen() const;
    
    UFUNCTION(BlueprintCallable)
    void HideObjectiveMarker(bool bFadeOut);
    
    UFUNCTION(BlueprintCallable)
    void HideMarkerText();
    
    UFUNCTION(BlueprintCallable)
    void HideIcon();
    
    UFUNCTION(BlueprintCallable)
    void EnableObjectiveMarker();
    
    UFUNCTION(BlueprintCallable)
    void DisableObjectiveMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowObjectiveMarker() const;
    
};

