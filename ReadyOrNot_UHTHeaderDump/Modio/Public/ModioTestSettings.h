#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModioTestSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=ModioTest)
class MODIO_API UModioTestSettings : public UObject {
    GENERATED_BODY()
public:
    UModioTestSettings();
};

