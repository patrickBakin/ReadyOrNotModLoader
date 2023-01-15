#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ModManagerWidget.generated.h"

class UModioManager;
class UModData;
class UTexture2DDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UModManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UModioManager* ModioManager;
    
public:
    UModManagerWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUserAuthenticator();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowErrorDialog(const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void RequestSubscribedMods(const FString& Search);
    
    UFUNCTION(BlueprintCallable)
    void RequestSearch(const FString& Query);
    
    UFUNCTION(BlueprintCallable)
    void RequestRefresh();
    
    UFUNCTION(BlueprintCallable)
    void RequestProfilePicture();
    
    UFUNCTION(BlueprintCallable)
    void RequestAllMods(const FString& Search);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserAuthenticated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProfilePictureLoaded(UTexture2DDynamic* Image);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUsername() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearMods();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMod(UModData* ModData);
    
};

