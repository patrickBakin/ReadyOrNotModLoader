#include "PlayMontageCallbackProxy.h"

class USkeletalMeshComponent;
class UPlayMontageCallbackProxy;
class UAnimMontage;

void UPlayMontageCallbackProxy::OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UPlayMontageCallbackProxy::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UPlayMontageCallbackProxy::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection) {
    return NULL;
}

UPlayMontageCallbackProxy::UPlayMontageCallbackProxy() {
}

