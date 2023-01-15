#include "AnimCharacterMovementLibrary.h"

class UAnimSequence;

void UAnimCharacterMovementLibrary::UpdateCharacterMovementSnapshot(const FTransform& WorldTransform, const FVector& WorldVelocity, const FVector& WorldAcceleration, bool bIsOnGround, float RootYawOffset, FAnimCharacterMovementSnapshot& Snapshot) {
}

UAnimSequence* UAnimCharacterMovementLibrary::SelectAnimForCardinalDirection(EAnimCardinalDirection CardinalDirection, const FCardinalDirectionAnimSet& AnimSet) {
    return NULL;
}

FVector UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(const FAnimCharacterMovementSnapshot& MovementSnapshot, const FAnimCharacterMovementPredictionSnapshot& PredictionSnapshot) {
    return FVector{};
}

FVector UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(const FAnimCharacterMovementSnapshot& MovementSnapshot, float GroundFriction) {
    return FVector{};
}

EAnimCardinalDirection UAnimCharacterMovementLibrary::GetCardinalDirectionFromAngle(EAnimCardinalDirection PreviousCardinalDirection, float DirectionAngleInDegrees, float DeadZoneAngle) {
    return EAnimCardinalDirection::North;
}

float UAnimCharacterMovementLibrary::CalculateDirAngle(FVector CurVel, FRotator CurActorRotation, FRotator DirRotation, float ClampMin, float ClampMax, float CurDirAngle) {
    return 0.0f;
}

UAnimCharacterMovementLibrary::UAnimCharacterMovementLibrary() {
}

