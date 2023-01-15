#pragma once
#include "CoreMinimal.h"
#include "BaseActivityProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESquadPosition.h"
#include "ETeamType.h"
#include "TeamActivityProxy.generated.h"

class UTeamBaseActivity;
class ACyberneticCharacter;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API UTeamActivityProxy : public UBaseActivityProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType CommandTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CommandLocation;
    
    UTeamActivityProxy();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTeamReachedLocation(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSquadPositionReachedLocation(ESquadPosition InSquadPosition, float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSquadPositionReachedDestination(ESquadPosition InSquadPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnySquadSquadPositionGotLocation(UTeamBaseActivity* RequestingActivity, const FVector& InTestLocation, float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToDestinationForSquadPosition(ESquadPosition InSquadPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToCommandLocationForSquadPosition(ESquadPosition InSquadPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDestinationLocationAtSquadPosition(ESquadPosition InSquadPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacterClosestToLocation(const FVector& InTestLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacterAtSquadPosition(ESquadPosition InSquadPosition) const;
    
};

