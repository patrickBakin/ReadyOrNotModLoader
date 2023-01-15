#include "ItemChangeRequest.h"

FItemChangeRequest::FItemChangeRequest() {
    this->FromItem = NULL;
    this->ToItem = NULL;
    this->bInstant = false;
    this->bNoDraw = false;
    this->bIsComplete = false;
}

