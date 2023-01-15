#include "AnimatedIconWidget_Imprint.h"

class UTexture2D;

void UAnimatedIconWidget_Imprint::SetIconImage(UTexture2D* NewIconImage) {
}

void UAnimatedIconWidget_Imprint::Init(FVector InWorldLocation, UTexture2D* InIconImage) {
}

UAnimatedIconWidget_Imprint::UAnimatedIconWidget_Imprint() : UUserWidget(FObjectInitializer::Get()) {
    this->Icon_Image = NULL;
}

