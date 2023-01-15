#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "ReadyOrNotMathLibrary.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotMathLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReadyOrNotMathLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float WrapAngleIfOutOfBounds(float Angle, float MinBounds, float MaxBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float KeepAngleBelow360(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float KeepAngleAbove0(float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLastKeyTime_FloatCurve(const FRuntimeFloatCurve& InCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GenerateRandomLocationOnSphere(FVector Origin, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D CalculatePositionOnEllipse(FVector2D Origin, float RadiusX, float RadiusY, float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D CalculatePositionOnCircle(FVector2D Origin, float Radius, float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector CalculateLocationOnSphere(FVector Origin, float Radius, float Angle, float Phi);
    
};

