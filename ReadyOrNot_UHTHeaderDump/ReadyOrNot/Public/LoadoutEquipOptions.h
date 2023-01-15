#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.h"
#include "LoadoutEquipOptions.generated.h"

class AReadyOrNotPlayerState;

USTRUCT(BlueprintType)
struct FLoadoutEquipOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemCategory EquipItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* OverridePlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSanitizeLoadout;
    
    READYORNOT_API FLoadoutEquipOptions();
};

