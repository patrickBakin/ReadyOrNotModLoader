#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Challenge.generated.h"

class AReadyOrNotGameState;
class UReadyOrNotProfile;

UCLASS(Blueprintable)
class READYORNOT_API UChallenge : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChallengeProgressName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChallengeProgressCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChallengeProgressMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChallengeComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelSpecificChallenge;
    
    UChallenge();
    UFUNCTION(BlueprintCallable)
    void UpdateFromProfile(UReadyOrNotProfile* Profile);
    
    UFUNCTION(BlueprintCallable)
    void ResetChallengeProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeInit(AReadyOrNotGameState* gs);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeAchieved();
    
    UFUNCTION(BlueprintCallable)
    void IncrementChallengeProgress(int32 IncrementBy);
    
    UFUNCTION(BlueprintCallable)
    void DecrementChallengeProgress(int32 DecrementBy);
    
};

