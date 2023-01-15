#include "SkinnedDecalInstance.h"

class USkinnedDecalSampler;

void USkinnedDecalInstance::UpdateDecal() {
}

USkinnedDecalSampler* USkinnedDecalInstance::GetSampler() {
    return NULL;
}

USkinnedDecalInstance::USkinnedDecalInstance() {
    this->Index = 0;
    this->SubUV = 0;
    this->Size = 10.00f;
}

