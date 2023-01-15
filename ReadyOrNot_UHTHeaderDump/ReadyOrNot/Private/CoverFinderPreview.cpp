#include "CoverFinderPreview.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ACoverFinderPreview::ACoverFinderPreview() {
    this->SearchExtent = 1250.00f;
    this->SearchDangerZone = 700.00f;
    this->SearchMode = ECoverSearchMode::NonWallOnly;
    this->CoverStance = ECoverStance::Both;
    this->NumCoverPointsFound = 0;
    this->CoverSearchTimeMs = 0.00f;
    this->bDrawLabels = true;
    this->bDrawScore = true;
    this->bDrawPass = true;
    this->bDrawFail = true;
    this->bDrawFailReason = true;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
}

