#pragma once
#include "CoreMinimal.h"
#include "ESteamUserOverlayType.generated.h"

UENUM(BlueprintType)
enum class ESteamUserOverlayType : uint8 {
    steamid,
    chat,
    jointrade,
    stats,
    achievements,
    friendadd,
    friendremove,
    friendrequestaccept,
    friendrequestignore,
};

