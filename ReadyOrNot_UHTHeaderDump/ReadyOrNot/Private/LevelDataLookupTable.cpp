#include "LevelDataLookupTable.h"

FLevelDataLookupTable::FLevelDataLookupTable() {
    this->bHasDesignerNotes = false;
    this->bIsTestLevel = false;
    this->bVisible = false;
    this->BaseSquadPts = 0;
    this->MusicSequencerClass = NULL;
    this->bUseMissionDispatch = false;
    this->bUnskippableDispatch = false;
    this->DispatchWidget = NULL;
}

