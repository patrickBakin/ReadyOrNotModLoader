#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NavGenerationParameters.h"
#include "BaseCombatMoveActivity.generated.h"

class UBaseCombatActivity;

UCLASS(Abstract, Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UBaseCombatMoveActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseCombatActivity* OwningCombatActivity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseActivity* InterruptActivity;
    
public:
    UBaseCombatMoveActivity();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCombatMove_Blueprint(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLOSToEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyOtherCombatMoveGotLocation(const FVector& TestLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseActivity* GetInterruptActivity() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateNavigablePoints(const FVector& GenAroundLoc, const FNavGenerationParameters& NavGenerationParameters, TArray<FVector>& OutLocations);
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishCombatMove(bool bSuccess);
    
};

