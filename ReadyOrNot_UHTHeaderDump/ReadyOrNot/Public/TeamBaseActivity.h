#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESquadPosition.h"
#include "ETeamType.h"
#include "TeamBaseActivity.generated.h"

class AReadyOrNotCharacter;
class ACyberneticCharacter;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTeamBaseActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UTeamBaseActivity();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTeamReachedPosition(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSquadmateReachedLocation(ESquadPosition SquadPosition, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnySquadmateGotLocation(FVector TestLocation, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSquadPositionHasReachedDestination(ESquadPosition SquadPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESquadPosition GetSquadPosition(bool bOnlyOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetSquadLeader();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationOfCharacterAtSquadPosition(ESquadPosition A) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToDestinationForSquadPosition(ESquadPosition SquadPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToCommandLocationForSquadPosition(ESquadPosition A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToCommandLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceBetweenSquadmates(ESquadPosition A, ESquadPosition B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDestinationLocationAtSquadPosition(ESquadPosition A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetCommandTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCommandNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCommandLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacterClosestToLocation(const FVector& TestLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacterClosestToCharacter(ACyberneticCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacterAtSquadPosition(ESquadPosition SquadPosition) const;
    
};

