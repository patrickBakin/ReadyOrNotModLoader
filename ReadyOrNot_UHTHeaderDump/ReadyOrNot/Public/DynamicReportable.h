#pragma once
#include "CoreMinimal.h"
#include "DynamicWorldActor.h"
#include "Reportable.h"
#include "DynamicReportable.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ADynamicReportable : public ADynamicWorldActor, public IReportable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DesiredTocReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReportedToToc;
    
    ADynamicReportable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

