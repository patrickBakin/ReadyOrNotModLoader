#include "StaticReportable.h"
#include "Net/UnrealNetwork.h"

void AStaticReportable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStaticReportable, bReportedToToc);
}

AStaticReportable::AStaticReportable() {
    this->DesiredTocReport = TEXT("TOCReportDOA");
    this->bReportedToToc = false;
}

