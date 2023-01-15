#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=PhysicalMaterial -FallbackName=PhysicalMaterial
#include "CustomPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UCustomPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullOcclusionDepth;
    
    UCustomPhysicalMaterial();
};

