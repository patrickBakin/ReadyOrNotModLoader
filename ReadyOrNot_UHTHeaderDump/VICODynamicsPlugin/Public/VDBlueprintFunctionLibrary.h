#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VDBlueprintFunctionLibrary.generated.h"

class UVDSimulation;

UCLASS(Blueprintable)
class VICODYNAMICSPLUGIN_API UVDBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVDBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UVDSimulation* GetVICODynamicsSimulationInstance();
    
};

