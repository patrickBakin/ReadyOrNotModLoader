#include "RadialSectorWidget.h"

class UMaterialInterface;
class UImage;

bool URadialSectorWidget::SetSectorColor_Implementation(const FLinearColor& NewColor, UImage* InSectorImage) {
    return false;
}

bool URadialSectorWidget::InitializeSectorWidget_Implementation(float Angle, float Percentage, float InSectorInnerRadius, float InSectorOuterRadius, UMaterialInterface* InSectorMaterial, const FLinearColor& UnselectedColor, UImage* InSectorImage) {
    return false;
}

URadialSectorWidget::URadialSectorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SectorImagePanel = NULL;
    this->SectorImage = NULL;
    this->SectorInnerRadius = 0.49f;
    this->SectorOuterRadius = 0.50f;
}

