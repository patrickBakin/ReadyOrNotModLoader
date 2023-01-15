#pragma once
#include "CoreMinimal.h"
#include "EvidenceExtractionDevice.h"
#include "EvidenceExtractionDevice_Incrim.generated.h"

class UMapActorComponent;
class UObjectiveMarkerComponent;

UCLASS(Blueprintable)
class READYORNOT_API AEvidenceExtractionDevice_Incrim : public AEvidenceExtractionDevice {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* ObjectiveMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* ObjectiveMarkerComponent_WayPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapActorComponent* MapActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapSectionName;
    
public:
    AEvidenceExtractionDevice_Incrim();
};

