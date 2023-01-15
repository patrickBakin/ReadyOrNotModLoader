#pragma once
#include "CoreMinimal.h"
#include "CoopGM.h"
#include "SingleplayerGM.generated.h"

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ASingleplayerGM : public ACoopGM {
    GENERATED_BODY()
public:
    ASingleplayerGM();
};

