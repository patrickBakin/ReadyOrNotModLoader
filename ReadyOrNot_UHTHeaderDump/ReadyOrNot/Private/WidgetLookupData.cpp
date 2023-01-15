#include "WidgetLookupData.h"

FWidgetLookupData::FWidgetLookupData() {
    this->WidgetClass = NULL;
    this->bShowMouseCursor = false;
    this->bMouseUIOnly = false;
    this->bAddToWidgetStack = false;
    this->bCloseOnRespawn = false;
    this->VisibilityUponCreation = ESlateVisibility::Visible;
    this->ZOrder = 0;
}

