#pragma once
#include "CoreMinimal.h"
#include "LevelDeployableData.generated.h"

class UDeployableData;

USTRUCT(BlueprintType)
struct FLevelDeployableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeployableData* DeployableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PtsCost;
    
    READYORNOT_API FLevelDeployableData();
};

