#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "EStunType.h"
#include "TakeHostageActivity.generated.h"

class AActor;
class AReadyOrNotCharacter;
class ACyberneticCharacter;
class UInteractionsData;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTakeHostageActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* Hostage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToSurrenderHostage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastEnemySensed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UInteractionsData*> HostageInteractions;
    
public:
    UTakeHostageActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void TickTurnState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickTakingState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickMoveToState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickEndHostageTakeState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickBeginHostageTakeState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldTurn() const;
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* DamagedCharacter, AActor* DamageCauser, float Damage, float HealthRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnStunned(AReadyOrNotCharacter* StunnedCharacter, float Duration, EStunType StunType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnSensedCharacter(AReadyOrNotCharacter* SensedCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageTakeTurnComplete_Slave(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageTakeTurnComplete_Driver(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageTakeStartComplete_Slave(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageTakeStartComplete_Driver(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageTakeKillComplete_Slave(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageTakeKillComplete_Driver(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageTakeEndComplete_Slave(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageTakeEndComplete_Driver(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnHostageKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnHeardYell(AReadyOrNotCharacter* Shouter, bool bLOS);
    
    UFUNCTION(BlueprintCallable)
    void EnterTurnState();
    
    UFUNCTION(BlueprintCallable)
    void EnterTakingState();
    
    UFUNCTION(BlueprintCallable)
    void EnterMoveToState();
    
    UFUNCTION(BlueprintCallable)
    void EnterEndHostageTakeState();
    
    UFUNCTION(BlueprintCallable)
    void EnterBeginHostageTakeState();
    
    UFUNCTION(BlueprintCallable)
    void EndTakingState();
    
    UFUNCTION(BlueprintCallable)
    bool CanStartHostageTake() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanIdle() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEndHostageTake() const;
    
};

