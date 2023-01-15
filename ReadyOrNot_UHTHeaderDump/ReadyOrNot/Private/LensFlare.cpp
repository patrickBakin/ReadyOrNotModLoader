#include "LensFlare.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialBillboardComponent -FallbackName=MaterialBillboardComponent

ALensFlare::ALensFlare() {
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->LensFlare = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("LensFlare"));
    this->OwningCharacter = NULL;
    this->FlareMat = NULL;
    this->MinimumRotationDeltaToBeVisible = 0.20f;
    this->FlareMatInstance = NULL;
    this->GlobalBrightness = 1.00f;
    this->GhostsBrightness = 1.00f;
    this->FlickerIntensity = 1.00f;
    this->FlickerTime = 2.00f;
    this->FadeDistance = 2048.00f;
    this->bUseFadeDistance = false;
    this->IncreasingBloomByDistance = 2.00f;
    this->bUseDistanceBloom = false;
    this->HaloOpacity = 0.25f;
    this->HaloInnerRadius = 1.00f;
    this->HaloBrightness = 2.00f;
    this->HaloTexture = NULL;
    this->HaloTextureSize = 1.43f;
    this->HaloContrast = 2.00f;
    this->CentreFlareBrightness = 40.24f;
    this->CentreFlareTexture = NULL;
    this->CentreFlareSize = 1.43f;
    this->CentreFlareContrast = 2.00f;
    this->MainFlareBrightness = 0.05f;
    this->MainFlare = NULL;
    this->MainFlareInnerRadius = 0.30f;
    this->MainFlareSize = 1.00f;
    this->MainFlareContrast = 5.00f;
    this->ReflectionSize = 2.38f;
    this->ReflectionCentreTexture = NULL;
    this->ReflectionBrightness = 10.00f;
    this->ReflectionContrast = 4.00f;
    this->OppositeFlaresAxisProjection = 0.80f;
    this->FlareOppositeSize01 = 44.76f;
    this->FlareOppositeSize02 = 16.19f;
    this->FlareOppositeBrightness01 = 10.00f;
    this->FlareOppositeBrightness02 = 10.00f;
    this->FlareOppositeContrast01 = 2.00f;
    this->FlareOppositeContrast02 = 2.00f;
    this->FlareOpposite01 = NULL;
    this->FlareOpposite02 = NULL;
    this->FrontFlaresAxisProjection = 0.60f;
    this->FlareFrontSize01 = 17.48f;
    this->FlareFrontSize02 = 7.95f;
    this->FlareFrontProximityCentre01 = 0.62f;
    this->FlareFrontProximityCentre02 = 0.80f;
    this->FlareFront01 = NULL;
    this->FlareFront02 = NULL;
    this->FlareFrontContrast01 = 2.00f;
    this->FlareFrontContrast02 = 2.00f;
    this->FlareFrontBrightness01 = 1.00f;
    this->FlareFrontBrightness02 = 1.00f;
    this->ReflectedFlareSize01 = 7.00f;
    this->ReflectedFlareSize02 = 6.00f;
    this->ReflectedFlareProximityCentre01 = 0.60f;
    this->ReflectedFlareProximityCentre02 = 0.74f;
    this->ReflectedFlare01 = NULL;
    this->ReflectedFlare02 = NULL;
    this->ReflectedFlareContrast01 = 2.00f;
    this->ReflectedFlareContrast02 = 2.00f;
    this->ReflectedFlareBrightness01 = 100.00f;
    this->ReflectedFlareBrightness02 = 13.33f;
    this->MinorFlareProximityCentre01 = 0.60f;
    this->MinorFlareSize01 = 7.00f;
    this->MinorFlareSizeRandom01 = 7.00f;
    this->MinorFlare01 = NULL;
    this->MinorFlareContrast01 = 4.00f;
    this->MinorFlareBrightness01 = 100.00f;
    this->MinorFlareContrast02 = 4.00f;
    this->MinorFlareBrightness02 = 100.00f;
    this->MinorFlareProximityCentre02 = 0.60f;
    this->MinorFlareSize02 = 7.00f;
    this->MinorFlareSizeRandom02 = 7.00f;
    this->MinorFlare02 = NULL;
    this->Iris = NULL;
    this->IrisSize = 1.00f;
    this->IrisProximityCentre = 0.60f;
    this->IrisBrightness = 1.00f;
    this->IrisContrast = 1.00f;
    this->AdditionalFlare = NULL;
    this->AdditionalFlareSize = 5.00f;
    this->AdditionalFlareContrast = 1.00f;
    this->AdditionalFlareBrightness = 1.00f;
}

