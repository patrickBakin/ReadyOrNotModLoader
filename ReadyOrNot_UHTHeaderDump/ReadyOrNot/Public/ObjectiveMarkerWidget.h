#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ObjectiveMarkerWidget.generated.h"

class UObjectiveMarkerComponent;
class UImage;
class UCanvasPanel;
class USizeBox;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API UObjectiveMarkerWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* ParentComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RootCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* Icon_SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Icon_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DirectionalArrow_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DistanceInMeters_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MarkerName_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideDistance: 1;
    
public:
    UObjectiveMarkerWidget();
    UFUNCTION(BlueprintCallable)
    void ShowMarkerText();
    
    UFUNCTION(BlueprintCallable)
    void ShowIcon();
    
    UFUNCTION(BlueprintCallable)
    void ShowAll();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerNameTextFontSize(int32 NewFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerNameTextColorAndOpacity(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerNameText(FText NewMarkerNameText);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSize(FVector2D NewIconSize);
    
    UFUNCTION(BlueprintCallable)
    void SetIconImage(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetIconColorAndOpacity(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionAngle(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMarkerVisibilityEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMarkerVisibilityDisabled();
    
    UFUNCTION(BlueprintCallable)
    void HideMarkerText();
    
    UFUNCTION(BlueprintCallable)
    void HideIcon();
    
    UFUNCTION(BlueprintCallable)
    void HideAll();
    
};

