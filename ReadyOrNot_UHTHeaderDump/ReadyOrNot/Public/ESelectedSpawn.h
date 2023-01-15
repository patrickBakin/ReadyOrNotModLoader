#pragma once
#include "CoreMinimal.h"
#include "ESelectedSpawn.generated.h"

UENUM(BlueprintType)
enum class ESelectedSpawn : uint8 {
    SS_None,
    SS_FirstSpawn,
    SS_SecondSpawn,
    SS_ThirdSpawn,
    SS_FourthSpawn,
    SS_MAX UMETA(Hidden),
};

