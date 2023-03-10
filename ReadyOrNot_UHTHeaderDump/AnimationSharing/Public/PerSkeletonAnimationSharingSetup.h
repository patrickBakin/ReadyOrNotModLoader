#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimationStateEntry.h"
#include "PerSkeletonAnimationSharingSetup.generated.h"

class USkeletalMesh;
class UAnimationSharingStateProcessor;
class UAnimSharingAdditiveInstance;
class UAnimSharingTransitionInstance;
class USkeleton;

USTRUCT(BlueprintType)
struct FPerSkeletonAnimationSharingSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimSharingTransitionInstance> BlendAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimationSharingStateProcessor> StateProcessorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationStateEntry> AnimationStates;
    
    ANIMATIONSHARING_API FPerSkeletonAnimationSharingSetup();
};

