#include "InputEntry.h"

FInputEntry::FInputEntry() {
    this->MappingType = EMapType::Axis;
    this->AxisScale = 0.00f;
    this->bDisplayOnScreen = false;
    this->ShowWithEquippedItem = NULL;
}

