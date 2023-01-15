#include "TacticalAuthorityCommandWidget.h"

class AActor;

void UTacticalAuthorityCommandWidget::SetReportItem(AActor* NewReportItem) {
}

void UTacticalAuthorityCommandWidget::SetCommandActor(AActor* NewCommandActor) {
}



void UTacticalAuthorityCommandWidget::MapDeltaToTacticalAuthorityVoice(float DeltaX, float DeltaY) {
}

UTacticalAuthorityCommandWidget::UTacticalAuthorityCommandWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SelectedVoiceLine = ETacticalAuthorityVoice::TAV_None;
    this->ReportItem = NULL;
    this->CommandActor = NULL;
    this->CommandMoveToMesh = NULL;
}

