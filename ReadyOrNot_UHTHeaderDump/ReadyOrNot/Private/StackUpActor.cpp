#include "StackUpActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AStackUpActor::AStackUpActor() {
    this->DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultScene"));
    this->StackUpPosition = ESquadPosition::SP_Alpha;
    this->BreachLookAtPoint = NULL;
    this->StackupLookAtPoint = NULL;
    this->LinkedDoor = NULL;
    this->OppositeStackUpActor = NULL;
}

