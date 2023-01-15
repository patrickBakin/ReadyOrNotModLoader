#pragma once
#include "CoreMinimal.h"
#include "ZeuzIDType.generated.h"

UENUM(BlueprintType)
enum class ZeuzIDType : uint8 {
    Invalid,
    Account,
    Proj = 0x10,
    Env,
    User,
    Developer,
    Team,
    Session = 0x20,
    TempFile = 0x31,
    Lobby,
    MatchMaking,
    Message,
    Inbox,
    ConfigRule = 0x40,
    APIKey = 0x63,
};

