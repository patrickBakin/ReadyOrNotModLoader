#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "LoadingScreen.generated.h"

class UTextBlock;
class ULevelStreaming;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API ULoadingScreen : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* StreamedLevel;
    
public:
    ULoadingScreen();
    UFUNCTION(BlueprintCallable)
    void UpdateTip(UTextBlock* TipBlock);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingScreen(const FString& InMap, const FString& InMode, const FString& InSessionName, bool bSeamlessTravel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMapName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLoadingScreenDetails(FString& OutMap, FString& OutMode, FString& OutSessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoadingPercentage();
    
};

