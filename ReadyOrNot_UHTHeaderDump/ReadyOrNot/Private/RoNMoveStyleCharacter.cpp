#include "RoNMoveStyleCharacter.h"
#include "RoNMoveStyleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

ARoNMoveStyleCharacter::ARoNMoveStyleCharacter() {
    this->CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    this->FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    this->MoveStyle = CreateDefaultSubobject<URoNMoveStyleComponent>(TEXT("MoveStyle"));
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
}

