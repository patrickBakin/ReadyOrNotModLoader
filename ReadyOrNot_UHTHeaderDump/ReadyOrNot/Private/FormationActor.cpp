#include "FormationActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

AFormationActor::AFormationActor() {
    this->FollowActor = NULL;
    this->MaxPositions = 7;
    this->MaxRange = 750.00f;
    this->AlphaCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AlphaCapsule"));
    this->Positions.AddDefaulted(7);
}

