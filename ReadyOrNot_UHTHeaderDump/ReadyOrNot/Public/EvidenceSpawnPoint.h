#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorSpawnPoint.h"
#include "EvidenceSpawnPoint.generated.h"

class ABuildingTrigger_Incrimination;
class AEvidenceActor;
class ASplineTrigger_Incrimination;

UCLASS(Blueprintable)
class READYORNOT_API AEvidenceSpawnPoint : public AActorSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEvidenceActor> EvidenceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineTrigger_Incrimination* EvidenceSearchArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingTrigger_Incrimination* EvidenceBuilding;
    
    AEvidenceSpawnPoint();
};

