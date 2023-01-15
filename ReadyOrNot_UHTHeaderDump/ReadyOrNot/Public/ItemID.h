#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemID.generated.h"

class ABaseItem;

USTRUCT(BlueprintType)
struct FItemID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> Item;
    
    READYORNOT_API FItemID();
};

