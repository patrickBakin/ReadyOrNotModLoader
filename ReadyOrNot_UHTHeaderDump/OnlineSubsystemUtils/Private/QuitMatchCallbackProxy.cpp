#include "QuitMatchCallbackProxy.h"

class UObject;
class UQuitMatchCallbackProxy;
class APlayerController;

UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TEnumAsByte<EMPMatchOutcome::Type> Outcome, int32 TurnTimeoutInSeconds) {
    return NULL;
}

UQuitMatchCallbackProxy::UQuitMatchCallbackProxy() {
}

