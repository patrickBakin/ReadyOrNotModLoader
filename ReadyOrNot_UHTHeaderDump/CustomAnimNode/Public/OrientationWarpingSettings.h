#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "OrientationWarpingSpineBoneSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "OrientationWarpingSettings.generated.h"

USTRUCT(BlueprintType)
struct FOrientationWarpingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> YawRotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyOrientationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrientationWarpingSpineBoneSettings> SpineBones;
    
    UPROPERTY(EditAnywhere)
    FBoneReference IKFootRootBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> IKFootBones;
    
    CUSTOMANIMNODE_API FOrientationWarpingSettings();
};

