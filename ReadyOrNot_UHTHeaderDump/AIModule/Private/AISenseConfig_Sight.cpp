#include "AISenseConfig_Sight.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ReadyOrNot -ObjectName=ReadyOrNotAISense_Sight -FallbackName=ReadyOrNotAISense_Sight

UAISenseConfig_Sight::UAISenseConfig_Sight() {
    this->Implementation = UReadyOrNotAISense_Sight::StaticClass();
    this->SightRadius = 3000.00f;
    this->LoseSightRadius = 3500.00f;
    this->PeripheralVisionAngleDegrees = 90.00f;
    this->AutoSuccessRangeFromLastSeenLocation = -1.00f;
    this->PointOfViewBackwardOffset = 0.00f;
    this->NearClippingRadius = 0.00f;
}

