#include "CollectEvidenceActivity.h"

void UCollectEvidenceActivity::OnEvidenceCollected() {
}

void UCollectEvidenceActivity::OnCollectEvidenceEnd() {
}

void UCollectEvidenceActivity::OnCollectEvidenceBegin() {
}

void UCollectEvidenceActivity::EnterMoveToStage() {
}

void UCollectEvidenceActivity::EnterCollectStage() {
}

bool UCollectEvidenceActivity::CanCollectEvidence() const {
    return false;
}

UCollectEvidenceActivity::UCollectEvidenceActivity() {
    this->EvidenceItem = NULL;
}

