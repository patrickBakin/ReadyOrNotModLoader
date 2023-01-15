#include "ZeuzSafetyLimits.h"

FZeuzSafetyLimits::FZeuzSafetyLimits() {
    this->CoreMaxUsageThreshold = 0.00f;
    this->CpuRemainingCores = 0;
    this->MemoryMBFree = 0;
    this->StorageGBFree = 0;
    this->IOMBpsFree = 0;
    this->InetMBpsFree = 0;
}

