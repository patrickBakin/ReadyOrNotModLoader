#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TrapSpawnType.generated.h"

class ATrapActor;

USTRUCT(BlueprintType)
struct FTrapSpawnType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrapActor> SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    READYORNOT_API FTrapSpawnType();
};

