#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "WorldBuildingActivity.generated.h"

class UWorldBuildingActivityData;
class UAnimSequence;
class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UWorldBuildingActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHolsterWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSurrenderFromActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbortDueToAggressiveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireRotationMatch;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FinalRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShotAnimationDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TableMontageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageAbruptEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartActivitySpeech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FinishActivitySpeech;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TableMontageAnim;
    
public:
    UWorldBuildingActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void TickMoveToState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickLoopState(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldStart() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldLoop() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldEndAbruptly() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldEnd() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldComplete() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRotation(FRotator NewRotator);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityData(UWorldBuildingActivityData* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetupCorrectly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationOffset() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnterStartState();
    
    UFUNCTION(BlueprintCallable)
    void EnterMoveToState();
    
    UFUNCTION(BlueprintCallable)
    void EnterLoopState();
    
    UFUNCTION(BlueprintCallable)
    void EnterEndState();
    
    UFUNCTION(BlueprintCallable)
    void EnterCompleteState();
    
    UFUNCTION(BlueprintCallable)
    void EnterAbruptEndState();
    
};

