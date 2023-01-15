#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CardinalDirectionAnimSet.h"
#include "AnimCharacterMovementPredictionSnapshot.h"
#include "AnimCharacterMovementSnapshot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EAnimCardinalDirection.h"
#include "AnimCharacterMovementLibrary.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimCharacterMovementLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateCharacterMovementSnapshot(const FTransform& WorldTransform, const FVector& WorldVelocity, const FVector& WorldAcceleration, bool bIsOnGround, float RootYawOffset, UPARAM(Ref) FAnimCharacterMovementSnapshot& Snapshot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAnimSequence* SelectAnimForCardinalDirection(EAnimCardinalDirection CardinalDirection, const FCardinalDirectionAnimSet& AnimSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PredictGroundMovementStopLocation(const FAnimCharacterMovementSnapshot& MovementSnapshot, const FAnimCharacterMovementPredictionSnapshot& PredictionSnapshot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector PredictGroundMovementPivotLocation(const FAnimCharacterMovementSnapshot& MovementSnapshot, float GroundFriction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAnimCardinalDirection GetCardinalDirectionFromAngle(EAnimCardinalDirection PreviousCardinalDirection, float DirectionAngleInDegrees, float DeadZoneAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateDirAngle(FVector CurVel, FRotator CurActorRotation, FRotator DirRotation, float ClampMin, float ClampMax, float CurDirAngle);
    
};

