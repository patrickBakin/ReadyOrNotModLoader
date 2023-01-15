#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "StrideWarpingLibrary.generated.h"

UCLASS(Blueprintable)
class UStrideWarpingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStrideWarpingLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateStrideWarping(float DeltaTime, const FVector& Velocity, const float& VelocityInterpTime, const float& CurrentAnimationSpeed, const float& PlayrateMaxAdjustment, UPARAM(Ref) float& StrideScaling, UPARAM(Ref) float& PlayRate, UPARAM(Ref) FVector& VelocitySmoothed);
    
};

