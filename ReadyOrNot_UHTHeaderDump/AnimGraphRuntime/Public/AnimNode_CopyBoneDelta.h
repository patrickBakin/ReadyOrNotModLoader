#pragma once
#include "CoreMinimal.h"
#include "CopyBoneDeltaMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimNode_SkeletalControlBase.h"
#include "AnimNode_CopyBoneDelta.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CopyBoneDeltaMode CopyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleMultiplier;
    
    FAnimNode_CopyBoneDelta();
};

