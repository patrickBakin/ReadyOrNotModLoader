#pragma once
#include "CoreMinimal.h"
#include "EItemAttachment.generated.h"

UENUM(BlueprintType)
enum class EItemAttachment : uint8 {
    IA_None,
    IA_Flashlight,
    IA_NVG,
    IA_MAX UMETA(Hidden),
};

