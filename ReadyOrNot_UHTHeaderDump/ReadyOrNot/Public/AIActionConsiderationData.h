#pragma once
#include "CoreMinimal.h"
#include "EAIConsiderationScoringMethod.h"
#include "AIActionConsiderationData.generated.h"

class UAIActionConsideration;
class ACyberneticController;

USTRUCT(BlueprintType)
struct FAIActionConsiderationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIConsiderationScoringMethod ScoringMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIActionConsideration* Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Transient, meta=(AllowPrivateAccess=true))
    TMap<ACyberneticController*, float> Scores;
    
    READYORNOT_API FAIActionConsiderationData();
};

