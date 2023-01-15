#pragma once
#include "CoreMinimal.h"
#include "TrapRoster.generated.h"

USTRUCT(BlueprintType)
struct FTrapRoster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnGroup;
    
    READYORNOT_API FTrapRoster();
};

