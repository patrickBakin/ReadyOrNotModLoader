#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "DeployAtLocationCommand.generated.h"

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDeployAtLocationCommand : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UDeployAtLocationCommand();
};

