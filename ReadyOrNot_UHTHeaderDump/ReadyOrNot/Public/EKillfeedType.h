#pragma once
#include "CoreMinimal.h"
#include "EKillfeedType.generated.h"

UENUM(BlueprintType)
enum class EKillfeedType : uint8 {
    KT_None,
    KT_Kill,
    KT_Arrest,
    KT_Free,
    KT_Recovered,
    KT_Death,
    KT_MAX UMETA(Hidden),
};

