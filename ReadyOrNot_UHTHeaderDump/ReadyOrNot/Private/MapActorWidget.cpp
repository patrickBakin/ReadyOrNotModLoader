#include "MapActorWidget.h"

class AActor;

void UMapActorWidget::SetMapActorTextColor(FLinearColor InTextColor) {
}

void UMapActorWidget::SetMapActorText(FText InText) {
}

void UMapActorWidget::InitializeWidget(AActor* InActorToTrack, bool bInUseActorRotation, bool bInUseLocation, FVector InLocationToTrack, float InRotationOffset) {
}

UMapActorWidget::UMapActorWidget() {
    this->MapActor_Text = NULL;
    this->ActorToTrack = NULL;
    this->bUseActorRotation = true;
    this->bUseLocation = false;
    this->RotationOffset = 0.00f;
    this->MapSize = 5000.00f;
    this->MapTextureSize = 1024.00f;
}

