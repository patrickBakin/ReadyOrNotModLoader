#pragma once
#include "CoreMinimal.h"
#include "PTTKey.generated.h"

UENUM(BlueprintType)
enum class PTTKey : uint8 {
    PTTNoChannel,
    PTTAreaChannel,
    PTTTeamChannel,
};

