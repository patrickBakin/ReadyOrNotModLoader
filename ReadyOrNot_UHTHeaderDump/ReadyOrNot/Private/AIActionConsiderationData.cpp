#include "AIActionConsiderationData.h"

FAIActionConsiderationData::FAIActionConsiderationData() {
    this->Weight = 0.00f;
    this->ScoringMethod = EAIConsiderationScoringMethod::Additive;
    this->Type = NULL;
}

