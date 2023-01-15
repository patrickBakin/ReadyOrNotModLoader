#pragma once
#include "CoreMinimal.h"
#include "ELastMenuStateBeforeJoin.generated.h"

UENUM(BlueprintType)
enum class ELastMenuStateBeforeJoin : uint8 {
    LM_None,
    LM_ServerBrowser,
    LM_FromFriends,
    LM_SinglePlayer,
    LM_MAX UMETA(Hidden),
};

