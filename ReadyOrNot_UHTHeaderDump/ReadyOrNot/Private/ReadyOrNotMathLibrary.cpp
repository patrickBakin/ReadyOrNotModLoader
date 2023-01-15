#include "ReadyOrNotMathLibrary.h"

float UReadyOrNotMathLibrary::WrapAngleIfOutOfBounds(float Angle, float MinBounds, float MaxBounds) {
    return 0.0f;
}

float UReadyOrNotMathLibrary::KeepAngleBelow360(float Angle) {
    return 0.0f;
}

float UReadyOrNotMathLibrary::KeepAngleAbove0(float Angle) {
    return 0.0f;
}

float UReadyOrNotMathLibrary::GetLastKeyTime_FloatCurve(const FRuntimeFloatCurve& InCurve) {
    return 0.0f;
}

FVector UReadyOrNotMathLibrary::GenerateRandomLocationOnSphere(FVector Origin, float Radius) {
    return FVector{};
}

FVector2D UReadyOrNotMathLibrary::CalculatePositionOnEllipse(FVector2D Origin, float RadiusX, float RadiusY, float Angle) {
    return FVector2D{};
}

FVector2D UReadyOrNotMathLibrary::CalculatePositionOnCircle(FVector2D Origin, float Radius, float Angle) {
    return FVector2D{};
}

FVector UReadyOrNotMathLibrary::CalculateLocationOnSphere(FVector Origin, float Radius, float Angle, float Phi) {
    return FVector{};
}

UReadyOrNotMathLibrary::UReadyOrNotMathLibrary() {
}

