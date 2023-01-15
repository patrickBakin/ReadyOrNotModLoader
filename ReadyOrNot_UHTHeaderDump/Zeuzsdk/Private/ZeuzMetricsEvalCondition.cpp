#include "ZeuzMetricsEvalCondition.h"

FZeuzMetricsEvalCondition::FZeuzMetricsEvalCondition() {
    this->TimeFrame = 0;
    this->CoreUsageThreshold = 0.00f;
    this->MemoryUsageThreshold = 0.00f;
    this->IOBandwidthThreshold = 0.00f;
    this->InetBandwidthThreshold = 0.00f;
}

