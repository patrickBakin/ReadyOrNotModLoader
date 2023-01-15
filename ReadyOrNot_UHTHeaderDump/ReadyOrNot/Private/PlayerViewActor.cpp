#include "PlayerViewActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D

class AActor;
class UPrimitiveComponent;
class AReadyOrNotCharacter;
class APlayerCharacter;

void APlayerViewActor::UpdateViewTarget(const FVector& NewLocation, const FRotator& NewRotation) {
}

void APlayerViewActor::TryNextView(bool bRequestClose, const bool bIncludeDeadViews) {
}

void APlayerViewActor::SetViewPlayer(AReadyOrNotCharacter* NewViewCharacter) {
}

void APlayerViewActor::SetOwningPlayer(APlayerCharacter* NewOwnerCharacter) {
}

bool APlayerViewActor::IsSwitchingView() const {
    return false;
}

void APlayerViewActor::HideComponent(UPrimitiveComponent* ComponentToHide) const {
}

void APlayerViewActor::HideActor(AActor* ActorToHide, const bool bIncludeChildActors) const {
}

void APlayerViewActor::ClearHiddenComponents() const {
}

APlayerViewActor::APlayerViewActor() {
    this->bShouldCaptureScene = false;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));
    this->CameraCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Camera Capture Component"));
    this->SwitchViewEvent = NULL;
    this->DeathViewTime = 3.00f;
    this->DeathViewEvent = NULL;
    this->CloseViewEvent = NULL;
    this->CameraRenderTarget = NULL;
    this->OwningPlayerCharacter = NULL;
    this->ViewCharacter = NULL;
    this->bDeathEffectsApplied = false;
    this->bSwitchViewEffectsApplied = false;
}

