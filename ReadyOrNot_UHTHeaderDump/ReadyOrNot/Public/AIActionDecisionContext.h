#pragma once
#include "CoreMinimal.h"
#include "AIActionDecisionContext.generated.h"

class ACyberneticController;
class UWorld;

USTRUCT(BlueprintType)
struct FAIActionDecisionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    READYORNOT_API FAIActionDecisionContext();
};

