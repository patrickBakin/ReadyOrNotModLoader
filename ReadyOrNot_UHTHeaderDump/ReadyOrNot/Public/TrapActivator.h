#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TrapActivator.generated.h"

class ATrapActivatee;

UCLASS(Blueprintable)
class READYORNOT_API ATrapActivator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATrapActivatee*> Activatees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisarmed;
    
    ATrapActivator();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldFireTrap(float DeltaTime, AActor*& OutTrapActivator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrapDisarmed(AActor* Disarmer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrapActivated(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void FireTrap(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void DisarmTrap(AActor* Disarmer);
    
};

