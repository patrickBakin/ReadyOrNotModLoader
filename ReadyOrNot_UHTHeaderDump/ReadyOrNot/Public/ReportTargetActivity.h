#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "ReportTargetActivity.generated.h"

class AIncapacitatedHuman;
class APlayerCharacter;
class UReportable;
class IReportable;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UReportTargetActivity : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IReportable> ReportTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* ReportCharacterTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIncapacitatedHuman* ReportIncapacitatedTarget;
    
public:
    UReportTargetActivity();
};

