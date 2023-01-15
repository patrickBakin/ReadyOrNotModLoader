#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "ForceAimAtActivity.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UForceAimAtActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNoShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAimAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNoMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* ForcedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFinishActivity;
    
    UForceAimAtActivity();
};

