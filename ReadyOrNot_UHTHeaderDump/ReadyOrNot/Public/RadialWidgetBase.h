#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ERadialMenuCloseReason.h"
#include "ERadialCursorBehaviour.h"
#include "RadialWidgetSpawnProperties.h"
#include "RadialWidgetBase.generated.h"

class UFMODEvent;
class UWidget;
class APawn;
class APlayerController;
class UPanelWidget;
class APlayerCharacter;
class URadialWidgetThemeData;
class URadialSectorWidget;
class UMaterialInterface;
class UImage;
class UFont;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API URadialWidgetBase : public UBaseWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRadialMenuOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRadialMenuClosed);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadialMenuOpened OnRadialMenuOpened_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadialMenuClosed OnRadialMenuClosed_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousSelectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageWithoutGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageWithGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsWheelCreated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsWheelRefreshed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNavigatingWithGamepad: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RadialCursorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Angles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URadialSectorWidget*> Sectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* RadialWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RadialWheelCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* OwningPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* OwningPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfSectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWheelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWheelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCursorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCursorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERadialCursorBehaviour RadialCursorBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URadialSectorWidget> RadialSectorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysHideRadialWheelCursor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanMoveWhileMenuIsOpened: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanPerformActionsWhileMenuIsOpened: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAimWhileMenuIsOpened: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDebugMessages: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowMouseCursor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingSectorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingSectorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectorInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SectorOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelCursorDistanceFromCenterWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideRadialWheelCursorOnMenuOpened: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnselectedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnselectableColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SelectionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MenuOpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MenuCloseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* MenuCloseSound_NoSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadialWidgetThemeData* RadialWidgetTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MousePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MouseAxisDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseWheelDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadYAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalTimeDilation;
    
public:
    URadialWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasForceClosed() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UseMouseControl();
    
    UFUNCTION(BlueprintCallable)
    void UseGamepadControl();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSectorColor(int32 SectorIndex, FLinearColor SectorColor);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMouseSelectionLogic(UWidget* RadialCursorWidget);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGamepadSelectionLogic(UWidget* RadialCursorWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowWheel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowMouseCursor();
    
public:
    UFUNCTION(BlueprintCallable)
    void Setup(const FRadialWidgetSpawnProperties& RadialWidgetSpawnProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseWheelDelta(float InDelta);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMousePositionToCenterScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetMousePosition(const FVector2D& NewMousePosition);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGamepadYAxis(float InGamepadYAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadXYAxis(float InGamepadXAxis, float InGamepadYAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadXAxis(float InGamepadXAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetCloseDelay(float NewDelay);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Select(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SaveMousePosition();
    
    UFUNCTION(BlueprintCallable)
    void RestoreMousePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RefreshWheel(int32 InStartingSectorIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Previous();
    
private:
    UFUNCTION(BlueprintCallable)
    void OpenWheel_Internal(bool bForceRefresh);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OpenWheel(bool bForceRefresh);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSectorSelected(int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSectorDeselected(int32 DeselectedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnRadialSectorCreated(int32 Index, float InAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRadialMenuOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnRadialMenuInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRadialMenuCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRadialMenuClosed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Next();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsWheelOpen();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWheelCursorVisible();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsWheelClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuOpening();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuClosing();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeMenuProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeMenu(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HideWheel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideMouseCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetViewportPositionOfWidgetCenter(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetViewportPositionOfWidget(UWidget* InWidget, FVector2D InCoordinates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPixelPositionOfWidgetCenter(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetPixelPositionOfWidget(UWidget* InWidget, FVector2D InCoordinates);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERadialMenuCloseReason GetLastClosedReason() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDirectionToMouse(FVector2D MidWidgetCoordinates);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDirectionToGamepadAxis();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCorrectSelectionColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCorrectAngle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ExecuteRadial();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DetermineSelectedSector(float InAngle);
    
    UFUNCTION(BlueprintCallable)
    void DetermineInputDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DeselectAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Deselect(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CreateWheelSector(UPanelWidget* PanelWidget, float InAngle, float InSectorInnerRadius, float InSectorOuterRadius, UMaterialInterface* InSectorMaterial, bool bCreateGap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CreateWheel();
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseWheel_Internal(bool bExecuteRadial, bool bRemoveFromParent, bool bHideMouseCursor, ERadialMenuCloseReason CloseReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CloseWheel(bool bExecuteRadial, bool bRemoveFromParent, bool bHideMouseCursor, ERadialMenuCloseReason CloseReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D CalculatePositionOnCircleFromWidget(UPanelWidget* PanelWidget, FVector2D Origin, FVector2D InPadding, float InAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginOpenWheel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginCloseWheel();
    
};

