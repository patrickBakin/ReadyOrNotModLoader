#pragma once
#include "CoreMinimal.h"
#include "TermsOfUse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ModioAuthenticatorWidget.generated.h"

class UModManagerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UModioAuthenticatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UModioAuthenticatorWidget();
    UFUNCTION(BlueprintCallable)
    void SubmitSecurityCode(const FString& SecurityCode);
    
    UFUNCTION(BlueprintCallable)
    void SubmitEmail(const FString& EmailAddress);
    
    UFUNCTION(BlueprintCallable)
    void SetupAuthenticator(UModManagerWidget* Parent);
    
    UFUNCTION(BlueprintCallable)
    void RequestSteamAuthentication();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTermsOfUseAcceptanceRequested(const FString& Terms, FTermsOfUse Localization);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecurityCodeRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnErrorSet(const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEmailRequested();
    
    UFUNCTION(BlueprintCallable)
    void AcceptTermsOfUse();
    
};

