#include "BadAIAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

void ABadAIAction::ReportBadAIAction() {
}

void ABadAIAction::Report(bool bReportToLog, bool bDrawString) {
}

void ABadAIAction::RemoveReport(bool bReportToLog, bool bDrawString) {
}

void ABadAIAction::RemoveBadAIAction() {
}

void ABadAIAction::AddNote(const FText& InSummary, const FText& InDescription) {
}

ABadAIAction::ABadAIAction() {
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard Component"));
}

