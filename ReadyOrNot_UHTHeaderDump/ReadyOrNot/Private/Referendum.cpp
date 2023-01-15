#include "Referendum.h"
#include "Net/UnrealNetwork.h"

class AReadyOrNotPlayerState;
class AReadyOrNotPlayerController;

void AReferendum::OnReferendumPassed_Implementation() {
}






void AReferendum::Multicast_AnnounceYesVote_Implementation(AReadyOrNotPlayerState* Voter) {
}

void AReferendum::Multicast_AnnounceVoteStarted_Implementation(AReadyOrNotPlayerState* CallingVoter) {
}

void AReferendum::Multicast_AnnounceVotePassed_Implementation() {
}

void AReferendum::Multicast_AnnounceVoteFailed_Implementation() {
}

void AReferendum::Multicast_AnnounceNoVote_Implementation(AReadyOrNotPlayerState* Voter) {
}

FText AReferendum::GetHudDescription_Implementation() {
    return FText::GetEmpty();
}

void AReferendum::CastedYesVote(AReadyOrNotPlayerController* Voter) {
}

void AReferendum::CastedNoVote(AReadyOrNotPlayerController* Voter) {
}

void AReferendum::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReferendum, YesVotes);
    DOREPLIFETIME(AReferendum, NoVotes);
    DOREPLIFETIME(AReferendum, ReferendumTimeRemaining);
    DOREPLIFETIME(AReferendum, ReferendumHoldingTimeRemaining);
    DOREPLIFETIME(AReferendum, bReferendumRunning);
    DOREPLIFETIME(AReferendum, ReferendumCaller);
}

AReferendum::AReferendum() {
    this->ReferendumTime = 30.00f;
    this->ReferendumHoldingTime = 3.00f;
    this->YesVotes = 0;
    this->NoVotes = 0;
    this->ReferendumTimeRemaining = 0.00f;
    this->ReferendumHoldingTimeRemaining = 3.00f;
    this->bReferendumRunning = false;
    this->bReferendumWaitingToTakeEffect = false;
    this->ReferendumCaller = NULL;
}

