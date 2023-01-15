#pragma once
#include "CoreMinimal.h"
#include "EAITeamTactic.h"
#include "FactionTeamTactics.generated.h"

USTRUCT(BlueprintType)
struct FFactionTeamTactics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAITeamTactic> Tactics;
    
    READYORNOT_API FFactionTeamTactics();
};

