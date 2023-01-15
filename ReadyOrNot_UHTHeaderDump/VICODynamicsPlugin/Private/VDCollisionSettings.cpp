#include "VDCollisionSettings.h"

FVDCollisionSettings::FVDCollisionSettings() {
    this->ObjectType = ECC_WorldStatic;
    this->CollisionEnabled = ECollisionEnabled::NoCollision;
}

