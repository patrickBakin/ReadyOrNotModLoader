#pragma once
#include "CoreMinimal.h"
#include "TrackedGeometryGroup.generated.h"

class UARComponent;
class AARActor;
class UARTrackedGeometry;

USTRUCT(BlueprintType)
struct AUGMENTEDREALITY_API FTrackedGeometryGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AARActor* ARActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UARComponent* ARComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UARTrackedGeometry* TrackedGeometry;
    
    FTrackedGeometryGroup();
};

