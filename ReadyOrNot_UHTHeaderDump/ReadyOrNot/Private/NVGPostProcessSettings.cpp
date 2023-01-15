#include "NVGPostProcessSettings.h"

FNVGPostProcessSettings::FNVGPostProcessSettings() {
    this->DepthOfFieldMethod = DOFM_BokehDOF;
    this->BloomIntensity = 0.00f;
    this->BloomThreshold = 0.00f;
    this->AutoExposureMethod = AEM_Histogram;
    this->BloomDirtMaskIntensity = 0.00f;
    this->DepthOfFieldFstop = 0.00f;
    this->LensFlareIntensity = 0.00f;
    this->LensFlareBokehSize = 0.00f;
    this->AmbientOcclusionIntensity = 0.00f;
    this->IndirectLightingIntensity = 0.00f;
    this->FilmSlope = 0.00f;
    this->FilmToe = 0.00f;
}

