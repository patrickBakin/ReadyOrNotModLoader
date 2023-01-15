#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimCharacterMovementPredictionSnapshot.h"
#include "CardinalDirectionSnapshot.h"
#include "AnimCharacterMovementSnapshot.h"
#include "PredictionResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDistanceMatchingType.h"
#include "AnimDistanceMatchingLibrary.generated.h"

class AActor;
class ACharacter;
class UCharacterMovementComponent;
class UWorld;

UCLASS(Blueprintable)
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimDistanceMatchingLibrary();
    UFUNCTION(BlueprintCallable)
    static void CalculateDistanceMatchingStates(float DeltaTime, ACharacter* CurrentCharacter, UCharacterMovementComponent* CurrentMovementComponent, EDistanceMatchingType& DistanceMatchingCurrentState, const FAnimCharacterMovementSnapshot& MovementSnapshot, const FAnimCharacterMovementPredictionSnapshot& PredictionSnapshot, UWorld* TargetWorld, float MinPivotAngle, TArray<AActor*> ActorsToIgnore, FVector& LastActorLocation, FCardinalDirectionSnapshot& PivotingCardinalDirSnapShot, FPredictionResult& StartMarker, FPredictionResult& StopMarker, FPredictionResult& PivotMarker, FPredictionResult& TakeOffMarker, FPredictionResult& ApexMarker, FPredictionResult& LandingMarker, bool& bSMStartRuleset, bool& bSMStopRuleset, bool bIsAICharacter, bool bShowDebug);
    
};

