#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "ReportReportableByTag.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AReportReportableByTag : public AObjective {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReportTag;
    
public:
    AReportReportableByTag();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasReportedReportableByTag(const FName& Tag);
    
};

