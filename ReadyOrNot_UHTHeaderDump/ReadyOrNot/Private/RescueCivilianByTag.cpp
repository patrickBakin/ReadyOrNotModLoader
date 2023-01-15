#include "RescueCivilianByTag.h"

bool ARescueCivilianByTag::HasNeutralizedCivilianByTag(const FName& Tag, bool& bArrested) {
    return false;
}

ARescueCivilianByTag::ARescueCivilianByTag() {
    this->bAllowIncapacitation = true;
}

