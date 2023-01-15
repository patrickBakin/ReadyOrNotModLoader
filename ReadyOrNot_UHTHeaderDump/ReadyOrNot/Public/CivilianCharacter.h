#pragma once
#include "CoreMinimal.h"
#include "CyberneticCharacter.h"
#include "CivilianCharacter.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ACivilianCharacter : public ACyberneticCharacter {
    GENERATED_BODY()
public:
    ACivilianCharacter();
};

