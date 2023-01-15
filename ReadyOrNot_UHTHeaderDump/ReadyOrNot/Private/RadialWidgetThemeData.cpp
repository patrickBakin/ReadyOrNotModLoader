#include "RadialWidgetThemeData.h"

URadialWidgetThemeData::URadialWidgetThemeData() {
    this->StartingSectorIndex = -1;
    this->StartingSectorAngle = 0.00f;
    this->IconSize = 60.00f;
    this->IconPadding = 70.00f;
    this->SectorInnerRadius = 0.20f;
    this->SectorOuterRadius = 0.50f;
    this->GapSize = 0.00f;
    this->WheelSize = 800.00f;
    this->WheelCursorDistanceFromCenterWheel = 160.00f;
    this->bHideRadialWheelCursorOnMenuOpened = true;
}

