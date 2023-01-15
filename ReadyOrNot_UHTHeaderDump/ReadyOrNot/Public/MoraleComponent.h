#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETeamType.h"
#include "MoraleComponent.generated.h"

class AReadyOrNotCharacter;
class ACyberneticCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UMoraleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Morale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingMorale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastYelledAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggeredYellAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenYelledAt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* OwnerCharacter;
    
public:
    UMoraleComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillGiveUp(AReadyOrNotCharacter* Yeller) const;
    
    UFUNCTION(BlueprintCallable)
    static void ResetMoraleOnCharacter(ACyberneticCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    static void LowerMoraleOnCharacter(ACyberneticCharacter* Character, float MoraleValue);
    
    UFUNCTION(BlueprintCallable)
    static void IncreaseMoraleOnCharacter(ACyberneticCharacter* Character, float MoraleValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenYelledAt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastYelledAt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMorale() const;
    
    UFUNCTION(BlueprintCallable)
    static void ChangeMoraleOnCharacter(ACyberneticCharacter* Character, float MoraleValue);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeMoraleInArea(FVector Location, float MoraleValue, float Range, bool bLOSOnly, TArray<ETeamType> Teams);
    
};

