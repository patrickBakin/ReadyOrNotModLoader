#include "EndTurnCallbackProxy.h"

class UObject;
class UEndTurnCallbackProxy;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class APlayerController;

UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
    return NULL;
}

UEndTurnCallbackProxy::UEndTurnCallbackProxy() {
}

