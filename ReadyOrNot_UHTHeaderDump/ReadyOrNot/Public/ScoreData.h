#pragma once
#include "CoreMinimal.h"
#include "ScoreBonus.h"
#include "ScorePenalty.h"
#include "ScoreData.generated.h"

class UScoringComponent;

USTRUCT(BlueprintType)
struct FScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScoreBonus> Bonuses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScorePenalty> Penalties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHiddenScore: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoringComponent* FromScoringComponent;
    
    READYORNOT_API FScoreData();
};

