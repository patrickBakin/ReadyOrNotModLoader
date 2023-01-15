#include "CreateSessionCallbackProxyAdvanced.h"

class UObject;
class UCreateSessionCallbackProxyAdvanced;
class APlayerController;

UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise) {
    return NULL;
}

UCreateSessionCallbackProxyAdvanced::UCreateSessionCallbackProxyAdvanced() {
}

