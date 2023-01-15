#include "MagMaskingAnimNotify.h"

UMagMaskingAnimNotify::UMagMaskingAnimNotify() {
    this->bIsFirstPerson = false;
    this->MaskMag = EMaskMag::Mag01;
    this->MagState = EMaskMagState::Show;
    this->bDummyCopyMag02 = false;
}

