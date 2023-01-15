#include "WeaponWheelWidget.h"

bool UWeaponWheelWidget::RemoveNullItemsFromCategory_Implementation(const FName& WeaponWheelCategoryName) {
    return false;
}

bool UWeaponWheelWidget::RemoveNullItemsFromAllCategories_Implementation() {
    return false;
}

UWeaponWheelWidget::UWeaponWheelWidget() {
    this->Categories.AddDefaulted(6);
}

