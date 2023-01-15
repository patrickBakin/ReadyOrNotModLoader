#pragma once
#include "CoreMinimal.h"
#include "SteamAvatarSize.generated.h"

UENUM(BlueprintType)
enum class SteamAvatarSize : uint8 {
    SteamAvatar_INVALID,
    SteamAvatar_Small,
    SteamAvatar_Medium,
    SteamAvatar_Large,
    SteamAvatar_MAX UMETA(Hidden),
};

