#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SpinTestHeatmapVolume.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ASpinTestHeatmapVolume : public AVolume {
    GENERATED_BODY()
public:
    ASpinTestHeatmapVolume();
private:
    UFUNCTION(BlueprintCallable)
    void VisualizeHeatMapIfExists();
    
    UFUNCTION(BlueprintCallable)
    void FlushVisualization();
    
};

