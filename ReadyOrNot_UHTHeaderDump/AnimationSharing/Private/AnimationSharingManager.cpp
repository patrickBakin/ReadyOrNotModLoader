#include "AnimationSharingManager.h"

class UObject;
class AActor;
class UAnimationSharingSetup;
class UAnimationSharingManager;
class USkeleton;

void UAnimationSharingManager::RegisterActorWithSkeletonBP(AActor* InActor, const USkeleton* SharingSkeleton) {
}

UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(UObject* WorldContextObject) {
    return NULL;
}

bool UAnimationSharingManager::CreateAnimationSharingManager(UObject* WorldContextObject, const UAnimationSharingSetup* Setup) {
    return false;
}

bool UAnimationSharingManager::AnimationSharingEnabled() {
    return false;
}

UAnimationSharingManager::UAnimationSharingManager() {
}

