#include "ZeuzMachineScalingRules.h"

FZeuzMachineScalingRules::FZeuzMachineScalingRules() {
    this->EnableScaling = false;
    this->MaxCloudMachines = 0;
    this->UseAllBareMetalMachines = false;
    this->MaxBareMetalMachines = 0;
    this->MinFreePayloadCapacity = 0;
    this->MaxFreePayloadCapacity = 0;
    this->UseMetrics = false;
    this->CapEvalTimeFrame = 0;
}

