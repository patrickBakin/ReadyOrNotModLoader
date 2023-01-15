#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Magazine.h"
#include "Hm_InventoryInformation.generated.h"

class ABaseItem;

USTRUCT(BlueprintType)
struct FHm_InventoryInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMagazine> Magazines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagIndex;
    
    READYORNOT_API FHm_InventoryInformation();
};

