#pragma once
#include "CoreMinimal.h"
#include "DeployItemAtLocationActivity.h"
#include "DeployChemlightActivity.generated.h"

class ABaseItem;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDeployChemlightActivity : public UDeployItemAtLocationActivity {
    GENERATED_BODY()
public:
    UDeployChemlightActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnChemlightThrown(ABaseItem* Item);
    
};

