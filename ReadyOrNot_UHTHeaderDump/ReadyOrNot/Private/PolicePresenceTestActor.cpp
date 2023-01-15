#include "PolicePresenceTestActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

APolicePresenceTestActor::APolicePresenceTestActor() {
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->Police = CreateDefaultSubobject<UBillboardComponent>(TEXT("Police"));
    this->Suspect = CreateDefaultSubobject<UBillboardComponent>(TEXT("Suspect"));
}

