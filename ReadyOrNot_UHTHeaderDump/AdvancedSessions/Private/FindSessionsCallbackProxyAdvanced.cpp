#include "FindSessionsCallbackProxyAdvanced.h"

class UObject;
class UFindSessionsCallbackProxyAdvanced;
class APlayerController;

UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, const TArray<FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable) {
    return NULL;
}

void UFindSessionsCallbackProxyAdvanced::FilterSessionResults(const TArray<FBlueprintSessionResult>& SessionResults, const TArray<FSessionsSearchSetting>& Filters, TArray<FBlueprintSessionResult>& FilteredResults) {
}

UFindSessionsCallbackProxyAdvanced::UFindSessionsCallbackProxyAdvanced() {
}

