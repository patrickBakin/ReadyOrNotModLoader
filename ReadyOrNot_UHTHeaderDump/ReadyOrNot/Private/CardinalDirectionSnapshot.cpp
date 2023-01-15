#include "CardinalDirectionSnapshot.h"

FCardinalDirectionSnapshot::FCardinalDirectionSnapshot() {
    this->CardinalDirection = EAnimCardinalDirection::North;
    this->YawAngle = 0.00f;
    this->YawAngleDeltaNorth = 0.00f;
    this->YawAngleDeltaEast = 0.00f;
    this->YawAngleDeltaSouth = 0.00f;
    this->YawAngleDeltaWest = 0.00f;
}

