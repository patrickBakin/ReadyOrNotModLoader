#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelDataLookupTable.h"
#include "ChallengeManager.generated.h"

class AReadyOrNotGameState;
class UChallenge;
class UReadyOrNotProfile;

UCLASS(Blueprintable)
class READYORNOT_API UChallengeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UChallenge*> Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotProfile* Profile;
    
    UChallengeManager();
    UFUNCTION(BlueprintCallable)
    void SaveChallenges();
    
    UFUNCTION(BlueprintCallable)
    void InitChallenges(AReadyOrNotGameState* GameState, FLevelDataLookupTable LevelData);
    
};

