#pragma once
#include "CoreMinimal.h"
#include "WeaponPreset.h"
#include "SavedWeaponPreset.generated.h"

USTRUCT(BlueprintType)
struct FSavedWeaponPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponPreset> Presets;
    
    READYORNOT_API FSavedWeaponPreset();
};

