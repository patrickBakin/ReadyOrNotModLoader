#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "NavSplinePathRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UNavSplinePathRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UNavSplinePathRenderingComponent();
};

