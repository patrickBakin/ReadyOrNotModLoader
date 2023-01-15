#include "AnimDistanceMatchingLibrary.h"

class AActor;
class ACharacter;
class UCharacterMovementComponent;
class UWorld;

void UAnimDistanceMatchingLibrary::CalculateDistanceMatchingStates(float DeltaTime, ACharacter* CurrentCharacter, UCharacterMovementComponent* CurrentMovementComponent, EDistanceMatchingType& DistanceMatchingCurrentState, const FAnimCharacterMovementSnapshot& MovementSnapshot, const FAnimCharacterMovementPredictionSnapshot& PredictionSnapshot, UWorld* TargetWorld, float MinPivotAngle, TArray<AActor*> ActorsToIgnore, FVector& LastActorLocation, FCardinalDirectionSnapshot& PivotingCardinalDirSnapShot, FPredictionResult& StartMarker, FPredictionResult& StopMarker, FPredictionResult& PivotMarker, FPredictionResult& TakeOffMarker, FPredictionResult& ApexMarker, FPredictionResult& LandingMarker, bool& bSMStartRuleset, bool& bSMStopRuleset, bool bIsAICharacter, bool bShowDebug) {
}

UAnimDistanceMatchingLibrary::UAnimDistanceMatchingLibrary() {
}

