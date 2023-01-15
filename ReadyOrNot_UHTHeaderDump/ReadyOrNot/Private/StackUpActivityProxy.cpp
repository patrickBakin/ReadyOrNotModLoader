#include "StackUpActivityProxy.h"

class ACyberneticCharacter;

ACyberneticCharacter* UStackUpActivityProxy::FindDoorChecker() const {
    return NULL;
}

UStackUpActivityProxy::UStackUpActivityProxy() {
    this->StackUpDoor = NULL;
    this->StackUpActor = NULL;
}

