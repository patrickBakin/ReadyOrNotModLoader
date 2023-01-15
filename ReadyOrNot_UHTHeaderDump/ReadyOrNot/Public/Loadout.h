#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Loadout.generated.h"

class ABaseItem;

USTRUCT(BlueprintType)
struct FLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABaseItem>> Items;
    
    READYORNOT_API FLoadout();
};

