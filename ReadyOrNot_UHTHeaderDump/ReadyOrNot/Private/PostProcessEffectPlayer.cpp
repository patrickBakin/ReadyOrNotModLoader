#include "PostProcessEffectPlayer.h"

FPostProcessEffectPlayer::FPostProcessEffectPlayer() {
    this->bEnabled = false;
    this->bDebug = false;
    this->bRestartIfAlreadyPlaying = false;
    this->bWantsFadeOut = false;
    this->FadeOutSpeed = 0.00f;
    this->PostProcess_Data = NULL;
    this->PostProcess_MID = NULL;
    this->bStarted = false;
}

