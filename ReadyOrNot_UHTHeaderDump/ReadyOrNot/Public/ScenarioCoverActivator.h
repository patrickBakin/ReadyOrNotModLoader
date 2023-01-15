#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "ScenarioCoverActivator.generated.h"

class AScenarioGenerator;

UCLASS(Blueprintable)
class READYORNOT_API AScenarioCoverActivator : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScenarioGenerator* ScenarioGenerator;
    
    AScenarioCoverActivator();
};

