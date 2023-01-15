#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "VDRopeComponent.h"
#include "VDSkinnedRopeComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VICODYNAMICSPLUGIN_API UVDSkinnedRopeComponent : public UVDRopeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference PoseableMeshRef;
    
public:
    UVDSkinnedRopeComponent();
};

