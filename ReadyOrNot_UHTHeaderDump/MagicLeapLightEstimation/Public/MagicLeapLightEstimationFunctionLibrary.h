#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapLightEstimationAmbientGlobalState.h"
#include "MagicLeapLightEstimationColorTemperatureState.h"
#include "MagicLeapLightEstimationFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPLIGHTESTIMATION_API UMagicLeapLightEstimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapLightEstimationFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTrackerValid();
    
    UFUNCTION(BlueprintCallable)
    static bool GetColorTemperatureState(FMagicLeapLightEstimationColorTemperatureState& ColorTemperatureState);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAmbientGlobalState(FMagicLeapLightEstimationAmbientGlobalState& GlobalAmbientState);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyTracker();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateTracker();
    
};

