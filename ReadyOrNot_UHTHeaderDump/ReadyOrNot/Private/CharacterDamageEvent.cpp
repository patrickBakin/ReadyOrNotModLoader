#include "CharacterDamageEvent.h"

FCharacterDamageEvent::FCharacterDamageEvent() {
    this->RawDamage = 0.00f;
    this->FinalDamage = 0.00f;
    this->Instigator = NULL;
    this->Causer = NULL;
}

