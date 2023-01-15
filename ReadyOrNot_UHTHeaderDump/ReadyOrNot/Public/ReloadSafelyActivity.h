#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "ReloadSafelyActivity.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UReloadSafelyActivity : public UBaseActivity {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ReloadMontage;
    
public:
    UReloadSafelyActivity();
private:
    UFUNCTION(BlueprintCallable)
    void ReloadFinished();
    
};

