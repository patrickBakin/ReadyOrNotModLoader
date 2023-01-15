#include "ReadyOrNotAISense_Sight.h"

UReadyOrNotAISense_Sight::UReadyOrNotAISense_Sight() {
    this->MaxTracesPerTick = 9;
    this->MinQueriesPerTimeSliceCheck = 40;
    this->MaxTimeSlicePerTick = 0.01f;
    this->HighImportanceQueryDistanceThreshold = 300.00f;
    this->MaxQueryImportance = 60.00f;
    this->SightLimitQueryImportance = 10.00f;
}

