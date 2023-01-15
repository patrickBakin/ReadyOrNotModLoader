#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "FreeArrestedActivity.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UFreeArrestedActivity : public UBaseActivity {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Target;
    
public:
    UFreeArrestedActivity();
};

