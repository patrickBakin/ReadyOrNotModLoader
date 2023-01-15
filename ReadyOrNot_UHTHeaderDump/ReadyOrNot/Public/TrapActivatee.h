#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TrapActivatee.generated.h"

class ATrapActivator;

UCLASS(Blueprintable)
class READYORNOT_API ATrapActivatee : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisarmed;
    
    ATrapActivatee();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrapFired(AActor* Triggerer, ATrapActivator* Activator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrapDisarmed(AActor* Disarmer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivatorDisarmed(AActor* Disarmer, ATrapActivator* Activator);
    
    UFUNCTION(BlueprintCallable)
    void FireTrap(AActor* ActivatingActor, ATrapActivator* Activator);
    
    UFUNCTION(BlueprintCallable)
    void DisarmTrap(AActor* Disarmer);
    
    UFUNCTION(BlueprintCallable)
    void DisarmedActivator(AActor* Disarmer, ATrapActivator* Activator);
    
};

