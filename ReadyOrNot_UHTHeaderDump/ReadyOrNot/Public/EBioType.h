#pragma once
#include "CoreMinimal.h"
#include "EBioType.generated.h"

UENUM(BlueprintType)
enum class EBioType : uint8 {
    BT_None,
    BT_Suspect,
    BT_Civilian,
    BT_MAX UMETA(Hidden),
};

