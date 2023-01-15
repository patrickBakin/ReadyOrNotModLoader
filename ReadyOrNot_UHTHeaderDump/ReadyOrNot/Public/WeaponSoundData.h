#pragma once
#include "CoreMinimal.h"
#include "WeaponSoundData.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FWeaponSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Gunshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Gunshot_Supressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GunTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GunTail_Supressed;
    
    READYORNOT_API FWeaponSoundData();
};

