#pragma once
#include "CoreMinimal.h"
#include "CoverFirePoseTable.generated.h"

class UAnimSequence;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FCoverFirePoseTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimSequence*> Left_ExposedFire_CoverMontageToCoverPoseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimSequence*> Left_BlindFire_CoverMontageToCoverPoseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimSequence*> Right_ExposedFire_CoverMontageToCoverPoseMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimSequence*> Right_BlindFire_CoverMontageToCoverPoseMap;
    
    READYORNOT_API FCoverFirePoseTable();
};

