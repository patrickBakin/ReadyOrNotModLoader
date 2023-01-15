#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EFireMode.h"
#include "EMedicalHealScreen.h"
#include "ECompletedActionType.h"
#include "HumanCharacterHUD.generated.h"

class APlayerCharacter;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UHumanCharacterHUD : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LastImpulse;
    
    UHumanCharacterHUD();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMedicalHealWidget(float CurrentHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMagBeforeReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeamChatPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopShowingScopeMask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartShowingScopeMask(UTexture2D* ScopeReticle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowNewMagazine();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMedicalHealWidget(const EMedicalHealScreen& HealScreen, const FName& InHealerName, const FName& InHealeeName, float InCurrentHealth, float InMinHealth, float InMaxHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMagDiscarded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMagCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMagAfterReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFireModeChanged(EFireMode newFireMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowBatteringRamIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHudAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedHit(bool bHeadHit, bool bTorsoHit, bool bLeftArmHit, bool bRightArmHit, bool bLeftLegHit, bool bRightLegHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerHealed(bool bHeadHealed, bool bTorsoHealed, bool bLeftArmHealed, bool bRightArmHealed, bool bLeftLegHealed, bool bRightLegHealed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLimbBroken(bool bHeadBroken, bool bLeftArmBroken, bool bRightArmBroken, bool bLeftLegBroken, bool bRightLegBroken);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionCompleted(ECompletedActionType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideMedicalHealWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideMagCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideBatteringRamIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeHudAlpha(float FadeFrom, float FadeTo, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompleteMedicalHealWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChatPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterPrint(FName MessageType, float Duration, APlayerCharacter* Other);
    
};

