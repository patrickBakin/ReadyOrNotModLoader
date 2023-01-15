#include "DynamicReportable.h"
#include "Net/UnrealNetwork.h"

void ADynamicReportable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADynamicReportable, bReportedToToc);
}

ADynamicReportable::ADynamicReportable() {
    this->DesiredTocReport = TEXT("TOCReportDOA");
    this->bReportedToToc = false;
}

