#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "OrientationWarpingSpineBoneSettings.generated.h"

USTRUCT(BlueprintType)
struct FOrientationWarpingSpineBoneSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone;
    
    CUSTOMANIMNODE_API FOrientationWarpingSpineBoneSettings();
};

