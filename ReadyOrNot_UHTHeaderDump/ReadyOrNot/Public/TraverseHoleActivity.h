#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "TraverseHoleActivity.generated.h"

class AWallHoleTraversal;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTraverseHoleActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWallHoleTraversal* WallHoleTraversalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreCooldown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFromNavLink: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EntryAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ExitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopAnim;
    
public:
    UTraverseHoleActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void Tick_MoveToHole_State(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_Move_State(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_ExitHole_State(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void Tick_EnterHole_State(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldMove() const;
    
    UFUNCTION(BlueprintCallable)
    void Enter_MoveToHole_State();
    
    UFUNCTION(BlueprintCallable)
    void Enter_Move_State();
    
    UFUNCTION(BlueprintCallable)
    void Enter_ExitHole_State();
    
    UFUNCTION(BlueprintCallable)
    void Enter_EnterHole_State();
    
    UFUNCTION(BlueprintCallable)
    bool CanExitHole() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEnterHole() const;
    
};

