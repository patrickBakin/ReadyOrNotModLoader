#include "AIActionConsideration.h"

float UAIActionConsideration::Score_Implementation(const FAIActionDecisionContext& Context, bool& bSuccess) const {
    return 0.0f;
}

float UAIActionConsideration::EvaluateResponseCurve(float NewScore) const {
    return 0.0f;
}

float UAIActionConsideration::CalculateCurve_Implementation(float X) const {
    return 0.0f;
}

UAIActionConsideration::UAIActionConsideration() {
    this->bManualCurveEdit = false;
    this->bCustomCurveFunction = false;
    this->CurveType = EEasingFunc::Linear;
    this->bInverseX = false;
    this->bInverseY = false;
    this->bClamp = false;
    this->bCustomRange = false;
    this->MinRange = 0.00f;
    this->MaxRange = 1.00f;
    this->OffsetX = 0.00f;
    this->OffsetY = 0.00f;
    this->Exponent = 1.00f;
    this->SubStep = 20;
    this->InterpMode = RCIM_Linear;
    this->TangentMode = RCTM_Auto;
}

