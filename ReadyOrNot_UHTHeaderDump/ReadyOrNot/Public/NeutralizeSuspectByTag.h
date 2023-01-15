#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "NeutralizeSuspectByTag.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ANeutralizeSuspectByTag : public AObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SuspectTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireArrest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowIncapacitation;
    
    ANeutralizeSuspectByTag();
};

