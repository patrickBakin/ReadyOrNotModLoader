#pragma once
#include "CoreMinimal.h"
#include "SavedWeaponAttachmentData.h"
#include "WeaponPreset.generated.h"

USTRUCT(BlueprintType)
struct FWeaponPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasSavedData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedWeaponAttachmentData AttachmentData;
    
    READYORNOT_API FWeaponPreset();
};

