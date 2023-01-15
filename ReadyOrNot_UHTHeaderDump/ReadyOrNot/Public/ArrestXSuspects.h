#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ArrestXSuspects.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AArrestXSuspects : public AObjective {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredArrests;
    
public:
    AArrestXSuspects();
};

