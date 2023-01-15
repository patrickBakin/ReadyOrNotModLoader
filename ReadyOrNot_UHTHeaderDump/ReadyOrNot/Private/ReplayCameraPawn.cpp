#include "ReplayCameraPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent

class AActor;

void AReplayCameraPawn::StopFollowingSpline() {
}

void AReplayCameraPawn::RemoveSplinePoint(int32 Index) {
}

TArray<FSplinePoint> AReplayCameraPawn::GetSplinePoints() {
    return TArray<FSplinePoint>();
}

TArray<FName> AReplayCameraPawn::GetBonesFromAttachableAction(AActor* Actor) {
    return TArray<FName>();
}

TArray<AActor*> AReplayCameraPawn::GetAttachableActors() {
    return TArray<AActor*>();
}

void AReplayCameraPawn::ClearSplinePoints() {
}

void AReplayCameraPawn::BeginFollowingSpline() {
}

void AReplayCameraPawn::AddSplinePoint(FVector Location, FRotator Rotation) {
}

AReplayCameraPawn::AReplayCameraPawn() {
    this->PawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));
    this->Sensitivity = 1.00f;
    this->ReplaySplineActor = NULL;
    this->TotalSplineTime = 5.00f;
    this->bIsFollowingSpline = false;
    this->DeltaSplineTime = 0.00f;
    this->bForceCameraRotation = true;
}

