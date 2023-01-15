#include "MagicLeapHandTrackingFunctionLibrary.h"

void UMagicLeapHandTrackingFunctionLibrary::SetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture, float Confidence) {
}

bool UMagicLeapHandTrackingFunctionLibrary::SetConfiguration(const TArray<EMagicLeapHandTrackingGesture>& StaticGesturesToActivate, EMagicLeapHandTrackingKeypointFilterLevel KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel GestureFilterLevel, bool bTrackingEnabled) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::IsHoldingControl(EControllerHand hand) {
    return false;
}

float UMagicLeapHandTrackingFunctionLibrary::GetStaticGestureConfidenceThreshold(EMagicLeapHandTrackingGesture Gesture) {
    return 0.0f;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetMotionSourceForHandKeypoint(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, FName& OutMotionSource) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetMagicLeapHandTrackingLiveLinkSource(FLiveLinkSourceHandle& SourceHandle) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandThumbTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Secondary) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandKeypointForMotionSource(FName MotionSource, EMagicLeapHandTrackingKeypoint& OutKeyPoint) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandIndexFingerTip(EControllerHand hand, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Pointer) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenterNormalized(EControllerHand hand, FVector& HandCenterNormalized) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetHandCenter(EControllerHand hand, FTransform& HandCenter) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypointTransform(EControllerHand hand, EMagicLeapHandTrackingKeypoint Keypoint, EMagicLeapGestureTransformSpace TransformSpace, FTransform& Transform) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetGestureKeypoints(EControllerHand hand, TArray<FTransform>& Keypoints) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGestureConfidence(EControllerHand hand, float& Confidence) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetCurrentGesture(EControllerHand hand, EMagicLeapHandTrackingGesture& Gesture) {
    return false;
}

bool UMagicLeapHandTrackingFunctionLibrary::GetConfiguration(TArray<EMagicLeapHandTrackingGesture>& ActiveStaticGestures, EMagicLeapHandTrackingKeypointFilterLevel& KeypointsFilterLevel, EMagicLeapHandTrackingGestureFilterLevel& GestureFilterLevel, bool& bTrackingEnabled) {
    return false;
}

UMagicLeapHandTrackingFunctionLibrary::UMagicLeapHandTrackingFunctionLibrary() {
}

