#pragma once
#include "CoreMinimal.h"
#include "EAITeamTactic.h"
#include "FactionSuspectTeam.generated.h"

class ASuspectCharacter;

USTRUCT(BlueprintType)
struct FFactionSuspectTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASuspectCharacter*> Suspects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAITeamTactic> Tactics;
    
    READYORNOT_API FFactionSuspectTeam();
};

