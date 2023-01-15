#include "HumanCharacterHUD_V2.h"
#include "Templates/SubclassOf.h"

class UMapActorWidget;
class UMapActorComponent;

void UHumanCharacterHUD_V2::UpdateMapFloors_Implementation(const TArray<FBuildingFloor>& Floors) {
}

void UHumanCharacterHUD_V2::TeamChatPressed_Implementation() {
}

void UHumanCharacterHUD_V2::ShowTutorialPrompt_Implementation(const FString& MessageID, bool bFirstShowing, const FText& MessageTitle, const TArray<FText>& MessageContent) {
}

void UHumanCharacterHUD_V2::ShowTutorialOverview_Implementation(const FString& MessageID, const FText& MessageTitle, const TArray<FText>& MessageContent) {
}

void UHumanCharacterHUD_V2::ShowHUD() {
}

void UHumanCharacterHUD_V2::RemovePlayerActionPrompt_Reserved(int32 InSlot) {
}

void UHumanCharacterHUD_V2::RemovePlayerActionPrompt(int32 InSlot) {
}

void UHumanCharacterHUD_V2::RemoveMapActor_Implementation(UMapActorComponent* MapActorComponent) {
}

void UHumanCharacterHUD_V2::ReflectHUDSettings_Implementation() {
}


bool UHumanCharacterHUD_V2::IsActionSlotInUse_Reserved(int32 InSlot) const {
    return false;
}

bool UHumanCharacterHUD_V2::IsActionSlotInUse(int32 InSlot) const {
    return false;
}

void UHumanCharacterHUD_V2::HideTutorialPrompt_Implementation(const FString& MessageID) {
}

void UHumanCharacterHUD_V2::HideTutorialOverview_Implementation(const FString& MessageID) {
}

void UHumanCharacterHUD_V2::HideHUD() {
}

void UHumanCharacterHUD_V2::ClearAllPlayerActionPrompts() {
}

void UHumanCharacterHUD_V2::ChatPressed_Implementation() {
}

int32 UHumanCharacterHUD_V2::AssignPlayerActionPromptToFreeSlot_Reserved(FKey InputKey, TEnumAsByte<EInputEvent> InputEvent, FText InActionText, const FString& InColorLabel, bool bAnimate, bool bLoopAnimation) {
    return 0;
}

void UHumanCharacterHUD_V2::AssignPlayerActionPromptToFreeSlot(FKey InputKey, TEnumAsByte<EInputEvent> InputEvent, FText InActionText, const FString& InColorLabel, bool bAnimate, bool bLoopAnimation) {
}

void UHumanCharacterHUD_V2::AssignPlayerActionPrompt_Reserved(int32 InSlot, FKey InputKey, TEnumAsByte<EInputEvent> InputEvent, FText InActionText, const FString& InColorLabel, bool bAnimate, bool bLoopAnimation) {
}

void UHumanCharacterHUD_V2::AssignPlayerActionPrompt_Custom(int32 InSlot, FText InCustomPromptText, bool bAnimate, bool bLoopAnimation) {
}

void UHumanCharacterHUD_V2::AssignPlayerActionPrompt(int32 InSlot, FKey InputKey, TEnumAsByte<EInputEvent> InputEvent, FText InActionText, const FString& InColorLabel, bool bAnimate, bool bLoopAnimation) {
}

void UHumanCharacterHUD_V2::AddScorePopup_Implementation(const FText& ScoreText, int32 ScoreValue, bool bGive) {
}

UMapActorWidget* UHumanCharacterHUD_V2::AddMapActor_Implementation(UMapActorComponent* MapActorComponent, TSubclassOf<UMapActorWidget> MapActorIconWidgetClass, const FSlateBrush& IconBrush, const FLinearColor& IconColor, const FLinearColor& IconTextColor, float RotationOffset) {
    return NULL;
}

UHumanCharacterHUD_V2::UHumanCharacterHUD_V2() {
    this->CanvasPanel_Main = NULL;
    this->RetainerBox_SwayableElements = NULL;
    this->PlayerActionText_Slot_1 = NULL;
    this->PlayerActionText_Slot_2 = NULL;
    this->PlayerActionText_Slot_3 = NULL;
    this->PlayerActionText_Slot_4 = NULL;
    this->PlayerActionText_Slot_Reserved_1 = NULL;
    this->PlayerActionText_Slot_Reserved_2 = NULL;
    this->HUDStyle = EHUDStyle::Default;
    this->bEnableHUDSway = true;
    this->bEnableCurvedHUD = true;
    this->CurvedHUDStrength = 0.20f;
    this->PlayerCharacter = NULL;
    this->PlayerController = NULL;
}

