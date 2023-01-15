#include "SplineTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

class AActor;
class APlayerCharacter;

void ASplineTrigger::ToggleDrawDebug() {
}

void ASplineTrigger::OnSplineEnclosureExited_Implementation(APlayerCharacter* PlayerCharacter) {
}

void ASplineTrigger::OnSplineEnclosureEntered_Implementation(APlayerCharacter* PlayerCharacter) {
}

bool ASplineTrigger::IsOutsideSplineEnclosure() const {
    return false;
}

bool ASplineTrigger::IsInsideSplineEnclosure() const {
    return false;
}

bool ASplineTrigger::IsActorOutsideSplineEnclosure(AActor* InActor) const {
    return false;
}

bool ASplineTrigger::IsActorInsideSplineEnclosure(AActor* InActor) const {
    return false;
}

void ASplineTrigger::EnableTrigger() {
}

void ASplineTrigger::DisableTrigger() {
}

ASplineTrigger::ASplineTrigger() {
    this->bEnabled = true;
    this->bDrawDebugElements = false;
    this->bIsOutsideSplineEnclosure = false;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
}

