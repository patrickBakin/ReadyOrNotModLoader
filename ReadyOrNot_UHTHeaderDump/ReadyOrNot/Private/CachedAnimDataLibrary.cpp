#include "CachedAnimDataLibrary.h"

class UAnimInstance;

bool UCachedAnimDataLibrary::StateMachine_IsStateRelevant(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData) {
    return false;
}

float UCachedAnimDataLibrary::StateMachine_GetLocalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetGlobalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData) {
    return 0.0f;
}

UCachedAnimDataLibrary::UCachedAnimDataLibrary() {
}

