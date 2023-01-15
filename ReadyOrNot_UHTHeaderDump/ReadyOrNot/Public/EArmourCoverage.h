#pragma once
#include "CoreMinimal.h"
#include "EArmourCoverage.generated.h"

UENUM(BlueprintType)
enum class EArmourCoverage : uint8 {
    AC_None,
    AC_FrontOnly,
    AC_FrontBack,
    AC_FrontBackSides,
    AC_MAX UMETA(Hidden),
};

