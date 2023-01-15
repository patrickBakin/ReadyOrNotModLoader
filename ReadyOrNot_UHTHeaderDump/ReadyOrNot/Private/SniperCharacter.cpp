#include "SniperCharacter.h"

void ASniperCharacter::ExitControl() {
}

ASniperCharacter::ASniperCharacter() {
    this->Designation = 0;
    this->bADSLocked = false;
    this->PrimaryScopeAttachment = NULL;
    this->PrimaryMuzzleAttachment = NULL;
    this->PrimaryUnderbarrelAttachment = NULL;
    this->SecondaryScopeAttachment = NULL;
    this->SecondaryMuzzleAttachment = NULL;
    this->SecondaryUnderbarrelAttachment = NULL;
}

