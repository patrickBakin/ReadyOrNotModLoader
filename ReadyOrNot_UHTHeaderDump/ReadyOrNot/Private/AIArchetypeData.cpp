#include "AIArchetypeData.h"

void UAIArchetypeData::AssignActionPreset() {
}

UAIArchetypeData::UAIArchetypeData() {
    this->bEnableAlertActions = false;
    this->bEnableUnalertActions = false;
    this->bEnableSuspiciousActions = false;
    this->bEnableContinuousActions = false;
    this->bEnableCombatMoveActions = false;
    this->bOverrideAimSpeed = false;
    this->FocalPointInterpSpeed = 30.00f;
    this->ActorRotationInterpStandingSpeed = 8.50f;
    this->ActorRotationInterpMovingSpeed = 10.00f;
    this->AimOffsetInterpSpeed = 10.00f;
    this->bIgnoreDamageHitReactions = false;
    this->bOnlyAllowCombatMovesWhilstAlert = false;
    this->bAccuracyOverride = false;
    this->Accuracy = 1.00f;
}

