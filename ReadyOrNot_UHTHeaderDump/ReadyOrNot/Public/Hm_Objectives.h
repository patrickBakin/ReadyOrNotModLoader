#pragma once
#include "CoreMinimal.h"
#include "EObjectiveStatus.h"
#include "Hm_Objectives.generated.h"

USTRUCT(BlueprintType)
struct FHm_Objectives {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveStatus ObjectiveStatus;
    
    READYORNOT_API FHm_Objectives();
};

