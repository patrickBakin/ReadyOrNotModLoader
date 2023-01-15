#include "RepGearAttach.h"

FRepGearAttach::FRepGearAttach() {
    this->bEquipped = false;
    this->bMeshVisibleTo1P = false;
    this->bMeshVisibleTo3P = false;
    this->Attach1P = NULL;
    this->Attach3P = NULL;
    this->ScopeAttach = NULL;
}

