#include "PostProcessSetting_Base.h"

FPostProcessSetting_Base::FPostProcessSetting_Base() {
    this->bEnabled = false;
    this->EffectEndOption = EPostProcessEndOptions::End;
    this->StartLoopAtCurveKey = 0;
    this->bReverseAtAnyTime = false;
    this->bUseCurve = false;
    this->EasingMethod = EEasingFunc::Linear;
    this->StartingState = EPostProcessStartingState::Forward;
    this->InterpSpeed = 0.00f;
    this->EffectLifetime = 0.00f;
    this->StartLoopAtTime = 0.00f;
}

