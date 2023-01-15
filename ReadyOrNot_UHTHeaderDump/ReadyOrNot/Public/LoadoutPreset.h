#pragma once
#include "CoreMinimal.h"
#include "SavedLoadout.h"
#include "LoadoutPreset.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLoadout Loadout;
    
    READYORNOT_API FLoadoutPreset();
};

