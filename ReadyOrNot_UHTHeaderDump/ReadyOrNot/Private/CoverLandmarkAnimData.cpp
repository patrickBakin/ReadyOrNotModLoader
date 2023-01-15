#include "CoverLandmarkAnimData.h"

FCoverLandmarkAnimData::FCoverLandmarkAnimData() {
    this->bForwardOnly = false;
    this->bFromTable = false;
    this->ForwardAnim = NULL;
    this->LeftAnim = NULL;
    this->RightAnim = NULL;
    this->AnimYawOffset = 0.00f;
}

