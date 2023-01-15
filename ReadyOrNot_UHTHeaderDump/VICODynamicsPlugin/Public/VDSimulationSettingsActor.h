#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "VDSettings.h"
#include "VDSimulationSettingsActor.generated.h"

UCLASS(Blueprintable)
class VICODYNAMICSPLUGIN_API AVDSimulationSettingsActor : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVDSettings Settings;
    
public:
    AVDSimulationSettingsActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVDSettings GetSettings() const;
    
};

