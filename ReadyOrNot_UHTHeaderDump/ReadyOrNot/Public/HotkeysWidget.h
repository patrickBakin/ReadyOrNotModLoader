#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "HotkeysWidget.generated.h"

class UWidget;
class UHotkeyWidget;
class APlayerCharacter;
class UHorizontalBox;
class UOverlay;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UHotkeysWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Hotkeys_Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* Hotkeys_Container;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHotkeyWidget* Hotkey_Grenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHotkeyWidget* Hotkey_Chemlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHotkeyWidget* Hotkey_NVG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHotkeyWidget* Hotkey_Scope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* IlluminatorAttachment_Switcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHotkeyWidget* Hotkey_Laser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHotkeyWidget* Hotkey_Flashlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlayerCharacter;
    
public:
    UHotkeysWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetHotkeyVisibility(UWidget* Widget, bool bCondition);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshHotkeyInput();
    
};

