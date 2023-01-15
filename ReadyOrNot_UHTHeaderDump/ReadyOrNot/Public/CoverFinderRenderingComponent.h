#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "CoverFinderRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UCoverFinderRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UCoverFinderRenderingComponent();
};

