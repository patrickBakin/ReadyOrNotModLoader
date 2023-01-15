#include "ZeuzMachineResourceInfo.h"

FZeuzMachineResourceInfo::FZeuzMachineResourceInfo() {
    this->IgnoreOnAlloc = false;
    this->Bound = false;
    this->TierLevel = 0;
    this->AllocatingDisabled = false;
}

