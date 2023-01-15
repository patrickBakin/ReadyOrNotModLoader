#pragma once
#include "CoreMinimal.h"
#include "CyberneticController.h"
#include "CivilianController.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ACivilianController : public ACyberneticController {
    GENERATED_BODY()
public:
    ACivilianController();
};

