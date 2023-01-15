#pragma once
#include "CoreMinimal.h"
#include "BuildingTrigger.h"
#include "BuildingTrigger_Incrimination.generated.h"

class AIncriminationClueSpawnPoint;

UCLASS(Blueprintable)
class READYORNOT_API ABuildingTrigger_Incrimination : public ABuildingTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIncriminationClueSpawnPoint*> ClueSpawnPoints;
    
    ABuildingTrigger_Incrimination();
};

