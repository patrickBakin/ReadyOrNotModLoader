#include "DeviceData.h"

FDeviceData::FDeviceData() {
    this->ItemClass = EItemClass::IC_NoClass;
    this->MaxInInventory = 0;
    this->ItemsPerSlot = 0;
    this->Blueprint = NULL;
}

