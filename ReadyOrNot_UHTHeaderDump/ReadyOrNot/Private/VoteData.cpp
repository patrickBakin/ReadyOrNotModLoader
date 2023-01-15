#include "VoteData.h"

FVoteData::FVoteData() {
    this->CurrentVoteState = EVoteState::Undecided;
    this->bVoteEnabled = false;
}

