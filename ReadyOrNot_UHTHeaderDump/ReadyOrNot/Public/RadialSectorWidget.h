#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RadialSectorWidget.generated.h"

class UPanelWidget;
class UMaterialInterface;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API URadialSectorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SectorImagePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SectorImage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectorInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectorOuterRadius;
    
public:
    URadialSectorWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetSectorColor(const FLinearColor& NewColor, UImage* InSectorImage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeSectorWidget(float Angle, float Percentage, float InSectorInnerRadius, float InSectorOuterRadius, UMaterialInterface* InSectorMaterial, const FLinearColor& UnselectedColor, UImage* InSectorImage);
    
};

