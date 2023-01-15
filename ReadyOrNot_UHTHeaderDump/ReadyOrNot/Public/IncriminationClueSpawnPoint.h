#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActorSpawnPoint.h"
#include "IncriminationClueSpawnPoint.generated.h"

class AActor;
class AIncriminationClue;

UCLASS(Blueprintable)
class READYORNOT_API AIncriminationClueSpawnPoint : public AActorSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIncriminationClue> IncriminationClueClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ClueFlareClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ClueNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowObjectiveMarkerIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClueFoundMessage;
    
    AIncriminationClueSpawnPoint();
};

