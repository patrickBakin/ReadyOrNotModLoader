#pragma once
#include "CoreMinimal.h"
#include "EStunType.generated.h"

UENUM(BlueprintType)
enum class EStunType : uint8 {
    ST_None,
    ST_Tased,
    ST_Gassed,
    ST_Flash,
    ST_Stung,
    ST_Peppersprayed,
    ST_Beanbag,
    ST_MAX UMETA(Hidden),
};

