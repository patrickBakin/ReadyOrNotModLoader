#include "BriefingWidget.h"

class UTexture2D;

void UBriefingWidget::PlayMissionAudio(const FString& AudioName) {
}

void UBriefingWidget::MoveCameraToMouseCursor(FPointerEvent PointerEvent) {
}

void UBriefingWidget::GetWhiteboardTimelineAsString(FString& OutString) {
}

void UBriefingWidget::GetWhiteboardObjectiveText(FString& OutString) {
}

void UBriefingWidget::GetLevelNickname(FString& OutNickname) {
}

void UBriefingWidget::GetBriefing(FMissionAudio& OutBriefing) {
}

void UBriefingWidget::GetBios(EBioType BioType, TArray<FCharacterBio>& OutBios) {
}

void UBriefingWidget::GetBioDetails(FCharacterBio Bio, TArray<FCriminalRecord>& RapSheet, UTexture2D*& ProfileImage, FString& OutDescription, FString& OutBioText) {
}

void UBriefingWidget::DoesLevelHaveMissionAudio(const FString& AudioName, bool& bHasMissionAudio) {
}

UBriefingWidget::UBriefingWidget() {
}

