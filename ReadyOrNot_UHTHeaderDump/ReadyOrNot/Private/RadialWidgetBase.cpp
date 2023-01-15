#include "RadialWidgetBase.h"

class UWidget;
class UPanelWidget;
class UMaterialInterface;

bool URadialWidgetBase::WasForceClosed() const {
    return false;
}

void URadialWidgetBase::UseMouseControl() {
}

void URadialWidgetBase::UseGamepadControl() {
}

void URadialWidgetBase::UpdateSectorColor(int32 SectorIndex, FLinearColor SectorColor) {
}

void URadialWidgetBase::UpdateMouseSelectionLogic(UWidget* RadialCursorWidget) {
}

void URadialWidgetBase::UpdateGamepadSelectionLogic(UWidget* RadialCursorWidget) {
}

bool URadialWidgetBase::ShowWheel_Implementation() {
    return false;
}

void URadialWidgetBase::ShowMouseCursor() {
}

void URadialWidgetBase::Setup(const FRadialWidgetSpawnProperties& RadialWidgetSpawnProperties) {
}

void URadialWidgetBase::SetMouseWheelDelta(float InDelta) {
}

void URadialWidgetBase::SetMousePositionToCenterScreen() {
}

void URadialWidgetBase::SetMousePosition(const FVector2D& NewMousePosition) {
}

void URadialWidgetBase::SetGamepadYAxis(float InGamepadYAxis) {
}

void URadialWidgetBase::SetGamepadXYAxis(float InGamepadXAxis, float InGamepadYAxis) {
}

void URadialWidgetBase::SetGamepadXAxis(float InGamepadXAxis) {
}

void URadialWidgetBase::SetCloseDelay(float NewDelay) {
}

bool URadialWidgetBase::Select_Implementation(int32 Index) {
    return false;
}

void URadialWidgetBase::SaveMousePosition() {
}

void URadialWidgetBase::RestoreMousePosition() {
}

bool URadialWidgetBase::RefreshWheel_Implementation(int32 InStartingSectorIndex) {
    return false;
}

bool URadialWidgetBase::Previous_Implementation() {
    return false;
}

void URadialWidgetBase::OpenWheel_Internal(bool bForceRefresh) {
}

bool URadialWidgetBase::OpenWheel_Implementation(bool bForceRefresh) {
    return false;
}

void URadialWidgetBase::OnSectorSelected_Implementation(int32 SelectedIndex) {
}

void URadialWidgetBase::OnSectorDeselected_Implementation(int32 DeselectedIndex) {
}

bool URadialWidgetBase::OnRadialSectorCreated_Implementation(int32 Index, float InAngle) {
    return false;
}

void URadialWidgetBase::OnRadialMenuOpened_Implementation() {
}

bool URadialWidgetBase::OnRadialMenuInitialized_Implementation() {
    return false;
}

void URadialWidgetBase::OnRadialMenuCreated_Implementation() {
}

void URadialWidgetBase::OnRadialMenuClosed_Implementation() {
}

bool URadialWidgetBase::Next_Implementation() {
    return false;
}

bool URadialWidgetBase::IsWheelOpen_Implementation() {
    return false;
}

bool URadialWidgetBase::IsWheelCursorVisible_Implementation() {
    return false;
}

bool URadialWidgetBase::IsWheelClosed_Implementation() {
    return false;
}

bool URadialWidgetBase::IsMenuOpening() {
    return false;
}

bool URadialWidgetBase::IsMenuClosing() {
    return false;
}

bool URadialWidgetBase::InitializeMenuProperties_Implementation() {
    return false;
}

bool URadialWidgetBase::InitializeMenu_Implementation(int32 Index) {
    return false;
}

bool URadialWidgetBase::HideWheel_Implementation() {
    return false;
}

void URadialWidgetBase::HideMouseCursor() {
}

FVector2D URadialWidgetBase::GetViewportPositionOfWidgetCenter(UWidget* InWidget) {
    return FVector2D{};
}

FVector2D URadialWidgetBase::GetViewportPositionOfWidget(UWidget* InWidget, FVector2D InCoordinates) {
    return FVector2D{};
}

FVector2D URadialWidgetBase::GetPixelPositionOfWidgetCenter(UWidget* InWidget) {
    return FVector2D{};
}

FVector2D URadialWidgetBase::GetPixelPositionOfWidget(UWidget* InWidget, FVector2D InCoordinates) {
    return FVector2D{};
}

ERadialMenuCloseReason URadialWidgetBase::GetLastClosedReason() const {
    return ERadialMenuCloseReason::MCR_UserClosed;
}

float URadialWidgetBase::GetDirectionToMouse_Implementation(FVector2D MidWidgetCoordinates) {
    return 0.0f;
}

float URadialWidgetBase::GetDirectionToGamepadAxis_Implementation() {
    return 0.0f;
}

FLinearColor URadialWidgetBase::GetCorrectSelectionColor() {
    return FLinearColor{};
}

float URadialWidgetBase::GetCorrectAngle() {
    return 0.0f;
}

bool URadialWidgetBase::ExecuteRadial_Implementation() {
    return false;
}

bool URadialWidgetBase::DetermineSelectedSector_Implementation(float InAngle) {
    return false;
}

void URadialWidgetBase::DetermineInputDevice() {
}

bool URadialWidgetBase::DeselectAll_Implementation() {
    return false;
}

bool URadialWidgetBase::Deselect_Implementation(int32 Index) {
    return false;
}

bool URadialWidgetBase::CreateWheelSector_Implementation(UPanelWidget* PanelWidget, float InAngle, float InSectorInnerRadius, float InSectorOuterRadius, UMaterialInterface* InSectorMaterial, bool bCreateGap) {
    return false;
}

bool URadialWidgetBase::CreateWheel_Implementation() {
    return false;
}

void URadialWidgetBase::CloseWheel_Internal(bool bExecuteRadial, bool bRemoveFromParent, bool bHideMouseCursor, ERadialMenuCloseReason CloseReason) {
}

bool URadialWidgetBase::CloseWheel_Implementation(bool bExecuteRadial, bool bRemoveFromParent, bool bHideMouseCursor, ERadialMenuCloseReason CloseReason) {
    return false;
}

FVector2D URadialWidgetBase::CalculatePositionOnCircleFromWidget(UPanelWidget* PanelWidget, FVector2D Origin, FVector2D InPadding, float InAngle) {
    return FVector2D{};
}

void URadialWidgetBase::BeginOpenWheel_Implementation() {
}

void URadialWidgetBase::BeginCloseWheel_Implementation() {
}

URadialWidgetBase::URadialWidgetBase() {
    this->CurrentSelectionIndex = 0;
    this->PreviousSelectionIndex = 0;
    this->Angle = 0.00f;
    this->AngleSpread = 0.00f;
    this->PercentageWithoutGap = 0.00f;
    this->PercentageWithGap = 0.00f;
    this->bIsWheelCreated = false;
    this->bIsWheelRefreshed = false;
    this->bNavigatingWithGamepad = false;
    this->RadialWheel = NULL;
    this->RadialWheelCursor = NULL;
    this->OwningPlayer = NULL;
    this->OwningPawn = NULL;
    this->OwningPlayerCharacter = NULL;
    this->NumOfSectors = 4;
    this->OpenDelay = 0.00f;
    this->CloseDelay = 0.00f;
    this->MinWheelSize = 400.00f;
    this->MaxWheelSize = 800.00f;
    this->MinCursorAngle = 0.00f;
    this->MaxCursorAngle = 360.00f;
    this->RadialCursorBehaviour = ERadialCursorBehaviour::RCB_Continuous;
    this->bAlwaysHideRadialWheelCursor = false;
    this->bCanMoveWhileMenuIsOpened = false;
    this->bCanPerformActionsWhileMenuIsOpened = false;
    this->bCanAimWhileMenuIsOpened = false;
    this->bShowDebugMessages = false;
    this->bShowMouseCursor = false;
    this->StartingSectorIndex = -1;
    this->StartingSectorAngle = 0.00f;
    this->IconSize = 60.00f;
    this->IconPadding = 70.00f;
    this->SectorInnerRadius = 0.20f;
    this->SectorOuterRadius = 0.50f;
    this->GapSize = 0.00f;
    this->WheelSize = 800.00f;
    this->WheelCursorDistanceFromCenterWheel = 160.00f;
    this->bHideRadialWheelCursorOnMenuOpened = true;
    this->RadialWidgetTheme = NULL;
    this->MouseWheelDelta = 0.00f;
    this->MouseAngle = 0.00f;
    this->GamepadXAxis = 0.00f;
    this->GamepadYAxis = 0.00f;
    this->GamepadAngle = 0.00f;
    this->GlobalTimeDilation = 1.00f;
}

