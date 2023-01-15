#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "MedicalHealWidget.generated.h"

class UProgressBar;
class UTextBlock;
class UWidgetSwitcher;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UMedicalHealWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrefixHealerString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PostfixHealeeString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PostfixHealeeMortallyWoundedString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PostfixNoBrokenLimbsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HealerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HealeeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* HealingWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* HealingProgressBar_Healer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* HealingProgressBar_Healee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HealerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HealeeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HealeeMortallyWoundedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HealeeNoBrokenLimbsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HealerHealthValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HealeeHealthValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HealeeMortallyWoundedHealthValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HealComplete;
    
public:
    UMedicalHealWidget();
    UFUNCTION(BlueprintCallable)
    void StartHealCompleteAnim();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeOutAnim();
    
    UFUNCTION(BlueprintCallable)
    void StartFadeInAnim();
    
    UFUNCTION(BlueprintCallable)
    void ShowNoBrokenLimbsWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowMortallyWoundedWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowHealerWidget();
    
    UFUNCTION(BlueprintCallable)
    void ShowHealeeWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void InitializeWidget(const FName& InHealerName, const FName& InHealeeName, float InCurrentHealth, float InMinHealth, float InMaxHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetSwitcher* GetWidgetSwitcher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProgressBar* GetHealerHealingProgressBar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UProgressBar* GetHealeeHealingProgressBar() const;
    
};

