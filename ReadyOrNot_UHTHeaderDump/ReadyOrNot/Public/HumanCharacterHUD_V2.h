#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BuildingFloor.h"
#include "BaseWidget.h"
#include "HudWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
#include "EHUDStyle.h"
#include "HumanCharacterHUD_V2.generated.h"

class UMapActorWidget;
class UMapActorComponent;
class APlayerCharacter;
class UPlayerActionPromptWidget;
class AReadyOrNotPlayerController;
class UCanvasPanel;
class URetainerBox;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UHumanCharacterHUD_V2 : public UBaseWidget, public IHudWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URetainerBox* RetainerBox_SwayableElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerActionPromptWidget* PlayerActionText_Slot_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerActionPromptWidget* PlayerActionText_Slot_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerActionPromptWidget* PlayerActionText_Slot_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerActionPromptWidget* PlayerActionText_Slot_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerActionPromptWidget* PlayerActionText_Slot_Reserved_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerActionPromptWidget* PlayerActionText_Slot_Reserved_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDStyle HUDStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ObjectiveMarker_WidgetFadeZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableHUDSway: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxHUDSwayMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SwayStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SwaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableCurvedHUD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurvedHUDStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AccumulatedMouseDelta;
    
public:
    UHumanCharacterHUD_V2();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMapFloors(const TArray<FBuildingFloor>& Floors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TeamChatPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowTutorialPrompt(const FString& MessageID, bool bFirstShowing, const FText& MessageTitle, const TArray<FText>& MessageContent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowTutorialOverview(const FString& MessageID, const FText& MessageTitle, const TArray<FText>& MessageContent);
    
    UFUNCTION(BlueprintCallable)
    void ShowHUD();
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerActionPrompt_Reserved(int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerActionPrompt(int32 InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveMapActor(UMapActorComponent* MapActorComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReflectHUDSettings();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInventoryItemsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionSlotInUse_Reserved(int32 InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionSlotInUse(int32 InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideTutorialPrompt(const FString& MessageID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideTutorialOverview(const FString& MessageID);
    
    UFUNCTION(BlueprintCallable)
    void HideHUD();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllPlayerActionPrompts();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChatPressed();
    
    UFUNCTION(BlueprintCallable)
    int32 AssignPlayerActionPromptToFreeSlot_Reserved(FKey InputKey, TEnumAsByte<EInputEvent> InputEvent, FText InActionText, const FString& InColorLabel, bool bAnimate, bool bLoopAnimation);
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerActionPromptToFreeSlot(FKey InputKey, TEnumAsByte<EInputEvent> InputEvent, FText InActionText, const FString& InColorLabel, bool bAnimate, bool bLoopAnimation);
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerActionPrompt_Reserved(int32 InSlot, FKey InputKey, TEnumAsByte<EInputEvent> InputEvent, FText InActionText, const FString& InColorLabel, bool bAnimate, bool bLoopAnimation);
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerActionPrompt_Custom(int32 InSlot, FText InCustomPromptText, bool bAnimate, bool bLoopAnimation);
    
    UFUNCTION(BlueprintCallable)
    void AssignPlayerActionPrompt(int32 InSlot, FKey InputKey, TEnumAsByte<EInputEvent> InputEvent, FText InActionText, const FString& InColorLabel, bool bAnimate, bool bLoopAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddScorePopup(const FText& ScoreText, int32 ScoreValue, bool bGive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMapActorWidget* AddMapActor(UMapActorComponent* MapActorComponent, TSubclassOf<UMapActorWidget> MapActorIconWidgetClass, const FSlateBrush& IconBrush, const FLinearColor& IconColor, const FLinearColor& IconTextColor, float RotationOffset);
    
    
    // Fix for true pure virtual functions not being implemented
};

