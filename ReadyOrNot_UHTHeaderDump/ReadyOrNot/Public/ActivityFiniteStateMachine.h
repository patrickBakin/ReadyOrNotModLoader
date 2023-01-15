#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActivityStateTransition.h"
#include "ActivityFiniteStateMachine.generated.h"

class UActivityState;

UCLASS(Blueprintable, Transient)
class READYORNOT_API UActivityFiniteStateMachine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UActivityState*> States;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityState* ActiveState;
    
public:
    UActivityFiniteStateMachine();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMachineInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActivityState* GetStateByName(const FString& InStateName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActivityState* GetStateByID(int32 InStateID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActivityState* GetActiveState();
    
    UFUNCTION(BlueprintCallable)
    UActivityState* AddState(const FString& NewStateName, TArray<FActivityStateTransition> Transitions);
    
};

