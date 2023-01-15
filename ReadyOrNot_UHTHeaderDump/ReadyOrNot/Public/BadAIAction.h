#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BadAIAction.generated.h"

class UBillboardComponent;

UCLASS(Blueprintable)
class READYORNOT_API ABadAIAction : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Summary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
public:
    ABadAIAction();
protected:
    UFUNCTION(BlueprintCallable)
    void ReportBadAIAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void Report(bool bReportToLog, bool bDrawString);
    
    UFUNCTION(BlueprintCallable)
    void RemoveReport(bool bReportToLog, bool bDrawString);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveBadAIAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddNote(const FText& InSummary, const FText& InDescription);
    
};

