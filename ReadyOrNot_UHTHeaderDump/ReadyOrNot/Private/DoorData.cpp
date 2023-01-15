#include "DoorData.h"

FDoorData::FDoorData() {
    this->DoorMaxOpenClose = 0.00f;
    this->bIsDestructible = false;
    this->bCanMirrorUnderDoor = false;
    this->DoorMesh = NULL;
    this->DoorHandle = NULL;
    this->bLockable = false;
    this->bCustomLockpickLocation = false;
    this->bCustomDoorPeekLocation = false;
    this->bDoorHandleFront = false;
    this->bDoorHandleBack = false;
    this->NumSuccessfulKicksToBreakDown = 0;
    this->DoorKickSuccessChance = 0.00f;
    this->C2ExplosionParticle = NULL;
    this->OpenSound = NULL;
    this->CloseSound = NULL;
    this->PushOpenSound = NULL;
    this->PushCloseSound = NULL;
    this->ManipulateSound = NULL;
    this->LockedSound = NULL;
    this->RamSound = NULL;
    this->KickSuccessSound = NULL;
    this->KickFailSound = NULL;
    this->AlarmSound = NULL;
    this->KeycardSound = NULL;
    this->KeycardDenySound = NULL;
}

