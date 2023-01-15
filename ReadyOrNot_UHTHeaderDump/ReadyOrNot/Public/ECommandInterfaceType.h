#pragma once
#include "CoreMinimal.h"
#include "ECommandInterfaceType.generated.h"

UENUM(BlueprintType)
enum class ECommandInterfaceType : uint8 {
    CI_GraphicCommandInterface,
    CI_ClassicCommandInterface,
    CI_MAX UMETA(Hidden),
};

