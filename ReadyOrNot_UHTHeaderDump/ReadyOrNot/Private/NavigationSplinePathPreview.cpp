#include "NavigationSplinePathPreview.h"

ANavigationSplinePathPreview::ANavigationSplinePathPreview() {
    this->PathPointDistanceThreshold = 50.00f;
    this->PathPointSubStep = 20;
    this->bDrawRawPath = true;
    this->bDrawRawPathPoints = false;
    this->bDrawSmoothedPath = true;
    this->bDrawSmoothedPathPoints = false;
    this->bDrawSmoothedPathPointsDetail = false;
    this->PathLineThickness = 5.00f;
}

