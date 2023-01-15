#pragma once
#include "CoreMinimal.h"
#include "ECharacterEmotion.generated.h"

UENUM(BlueprintType)
enum class ECharacterEmotion : uint8 {
    None,
    Angry,
    Wince,
    Sad,
    Afraid,
    Alert,
};

