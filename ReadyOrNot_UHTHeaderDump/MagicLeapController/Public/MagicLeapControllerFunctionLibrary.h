#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMagicLeapControllerType.h"
#include "EMagicLeapControllerLEDPattern.h"
#include "EMagicLeapControllerLEDColor.h"
#include "EMagicLeapControllerLEDEffect.h"
#include "EMagicLeapControllerLEDSpeed.h"
#include "EMagicLeapControllerHapticPattern.h"
#include "EMagicLeapControllerHapticIntensity.h"
#include "EMagicLeapControllerTrackingMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "MagicLeapControllerFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPCONTROLLER_API UMagicLeapControllerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapControllerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SetMotionSourceForHand(EControllerHand hand, FName MotionSource);
    
    UFUNCTION(BlueprintCallable)
    static bool SetControllerTrackingMode(EMagicLeapControllerTrackingMode TrackingMode);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayLEDPattern(FName MotionSource, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayLEDEffect(FName MotionSource, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayHapticPattern(FName MotionSource, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayControllerLEDEffect(EControllerHand hand, EMagicLeapControllerLEDEffect LEDEffect, EMagicLeapControllerLEDSpeed LEDSpeed, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayControllerLED(EControllerHand hand, EMagicLeapControllerLEDPattern LEDPattern, EMagicLeapControllerLEDColor LEDColor, float DurationInSec);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayControllerHapticFeedback(EControllerHand hand, EMagicLeapControllerHapticPattern HapticPattern, EMagicLeapControllerHapticIntensity Intensity);
    
    UFUNCTION(BlueprintCallable)
    static int32 MaxSupportedMagicLeapControllers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMLControllerConnected(FName MotionSource);
    
    UFUNCTION(BlueprintCallable)
    static void InvertControllerMapping();
    
    UFUNCTION(BlueprintCallable)
    static FName GetMotionSourceForHand(EControllerHand hand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMagicLeapControllerType GetMLControllerType(EControllerHand hand);
    
    UFUNCTION(BlueprintCallable)
    static EControllerHand GetHandForMotionSource(FName MotionSource);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EMagicLeapControllerType GetControllerType(FName MotionSource);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapControllerTrackingMode GetControllerTrackingMode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetControllerMapping(int32 ControllerIndex, EControllerHand& hand);
    
};

