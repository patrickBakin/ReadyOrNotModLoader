#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "VDWindDirectionalSourceActor.generated.h"

class UVDWindDirectionalSourceComponent;

UCLASS(Blueprintable)
class VICODYNAMICSPLUGIN_API AVDWindDirectionalSourceActor : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVDWindDirectionalSourceComponent* Component;
    
public:
    AVDWindDirectionalSourceActor();
};

