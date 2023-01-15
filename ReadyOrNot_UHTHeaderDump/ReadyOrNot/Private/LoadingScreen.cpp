#include "LoadingScreen.h"

class UTextBlock;

void ULoadingScreen::UpdateTip(UTextBlock* TipBlock) {
}

void ULoadingScreen::SetLoadingScreen(const FString& InMap, const FString& InMode, const FString& InSessionName, bool bSeamlessTravel) {
}

FString ULoadingScreen::GetMapName() {
    return TEXT("");
}

void ULoadingScreen::GetLoadingScreenDetails(FString& OutMap, FString& OutMode, FString& OutSessionName) {
}

float ULoadingScreen::GetLoadingPercentage() {
    return 0.0f;
}

ULoadingScreen::ULoadingScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->StreamedLevel = NULL;
}

