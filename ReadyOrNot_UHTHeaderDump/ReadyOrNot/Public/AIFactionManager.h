#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FactionSuspectTeam.h"
#include "FactionTeamTactics.h"
#include "EAITeamTactic.h"
#include "AIFactionManager.generated.h"

class AReadyOrNotCharacter;
class ACyberneticCharacter;
class ACivilianCharacter;
class ASuspectCharacter;

UCLASS(Abstract, Blueprintable, NotPlaceable, Transient)
class READYORNOT_API AAIFactionManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGroupIntoTeams: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamsOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAssignRandomTeamTactics: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactionTeamTactics> TacticsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactionSuspectTeam> SuspectTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> Leaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamBehaviourStrengthReductionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamBehaviourOverrideStrength;
    
public:
    AAIFactionManager();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllAISpawned_Blueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAISpottedNeutral_Blueprint(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Neutral);
    
    UFUNCTION(BlueprintCallable)
    void OnAISpottedNeutral(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Neutral);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAISpottedFriendly_Blueprint(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Friendly);
    
    UFUNCTION(BlueprintCallable)
    void OnAISpottedFriendly(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Friendly);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAISpottedEnemy_Blueprint(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void OnAISpottedEnemy(ACyberneticCharacter* Spotter, AReadyOrNotCharacter* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAIAdded_Blueprint(ACyberneticCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamFull(const FFactionSuspectTeam& InTeam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuspectInTeam(ASuspectCharacter* InSuspect, FFactionSuspectTeam& OutTeam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTeamTacticFor(ASuspectCharacter* InSuspect, EAITeamTactic& OutTactic) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamIndex(ASuspectCharacter* InSuspect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSuspectsInTeam(ASuspectCharacter* InSuspect, TArray<ASuspectCharacter*>& OutSuspects, bool bIncludeSelf);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASuspectCharacter*> GetAllSuspects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACyberneticCharacter*> GetAllLeaders() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACivilianCharacter*> GetAllCivilians() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ACyberneticCharacter*> GetAllCharacters() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASuspectCharacter* FindClosestSuspect(const TArray<ASuspectCharacter*>& OtherSuspects, ASuspectCharacter* Suspect, float MaxDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreTeamSpotsAvailable(int32& OutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlertOtherSuspectsInTeam_Blueprint(ASuspectCharacter* Suspect, AReadyOrNotCharacter* Enemy);
    
};

