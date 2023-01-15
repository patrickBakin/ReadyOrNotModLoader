#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActivityStateTransition.h"
#include "ActivityState.generated.h"

class UActivityFiniteStateMachine;
class UActivityState;

UCLASS(Blueprintable, Transient)
class READYORNOT_API UActivityState : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FActivityStateUpdate, float, DeltaTime, float, Uptime);
    DECLARE_DYNAMIC_DELEGATE(FActivityStateEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivityStateEvent OnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivityStateEvent OnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivityStateUpdate OnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Uptime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityFiniteStateMachine* StateMachineOwner;
    
    UActivityState();
    UFUNCTION(BlueprintCallable)
    UActivityState* CreateTransition(const FActivityStateTransition& InStateTransition);
    
protected:
    UFUNCTION(BlueprintCallable)
    UActivityState* BindEventTick(const UActivityState::FActivityStateUpdate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    UActivityState* BindEventExit(const UActivityState::FActivityStateEvent& Delegate);
    
    UFUNCTION(BlueprintCallable)
    UActivityState* BindEventEnter(const UActivityState::FActivityStateEvent& Delegate);
    
};

