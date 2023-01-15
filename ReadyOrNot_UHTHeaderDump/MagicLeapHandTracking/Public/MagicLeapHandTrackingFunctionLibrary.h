#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceHandle -FallbackName=LiveLinkSourceHandle
#include "EMagicLeapHandTrackingKeypoint.h"
#include "EMagicLeapHandTrackingGesture.h"
#include "EMagicLeapHandTrackingGestureFilterLevel.h"
#include "EMagicLeapHandTrackingKeypointFilterLevel.h"
#include "EMagicLeapGestureTransformSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=EControllerHand -FallbackName=EControllerHand
#include "MagicLeapHandTrackingFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPHANDTRACKING_API UMagicLeapHandTrackingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapHandTrackingFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence);
    
    UFUNCTION(BlueprintCallable)
    static bool SetConfiguration(const TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHoldingControl(EControllerHand hand);
    
    UFUNCTION(BlueprintCallable)
    static float GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMotionSourceForHandKeypoint(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, FName& OutMotionSource);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandThumbTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandKeypointForMotionSource(FName MotionSource, EMagicLeapHandTrackingKeypoint& OutKeyPoint);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandIndexFingerTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandCenterNormalized(EControllerHand hand, FVector& HandCenterNormalized);
    
    UFUNCTION(BlueprintCallable)
    static bool GetHandCenter(EControllerHand hand, FTransform& HandCenter);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGestureKeypointTransform(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGestureKeypoints(EControllerHand hand, TArray<FTransform>& Keypoints);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentGestureConfidence(EControllerHand hand, float& Confidence);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentGesture(EControllerHand hand, EMagicLeapHandTrackingGesture& Gesture);
    
    UFUNCTION(BlueprintCallable)
    static bool GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled);
    
};

