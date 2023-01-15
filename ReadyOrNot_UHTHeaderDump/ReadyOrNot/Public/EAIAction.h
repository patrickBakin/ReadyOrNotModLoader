#pragma once
#include "CoreMinimal.h"
#include "EAIAction.generated.h"

UENUM(BlueprintType)
enum class EAIAction : uint8 {
    None,
    FireWeapon,
    Melee,
    HardCover,
    Hide,
    Surrender,
    FakeSurrender,
    PlayDead,
    Flee,
    Rush,
    Flank,
    Duel,
    Suppress,
    Push,
    Investigate,
    PickUpItem,
    Suicide,
    NeverFakeSuicide,
    Custom,
};

