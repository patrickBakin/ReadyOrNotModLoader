#pragma once
#include "CoreMinimal.h"
#include "EEquippingSwat.generated.h"

UENUM(BlueprintType)
enum class EEquippingSwat : uint8 {
    ES_None,
    ES_BlueOne,
    ES_BlueTwo,
    ES_RedOne,
    ES_RedTwo,
    ES_MAX UMETA(Hidden),
};

