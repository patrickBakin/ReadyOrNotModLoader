#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnRoNGameplayEffectExpiredDelegate.h"
#include "ReadyOrNotGameplayEffect.generated.h"

class AActor;
class UWorld;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API UReadyOrNotGameplayEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoNGameplayEffectExpired OnGameplayEffectExpired;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    UReadyOrNotGameplayEffect();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ResetEffect(bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Initialize(AActor* InActor, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ApplyEffectFor(float Seconds, bool bMulticast);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ApplyEffect(bool bMulticast);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetEffect();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectExpired();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ResetEffect();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Initialize(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyEffectFor(float Seconds);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffectFor(float Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyEffect();
    
};

