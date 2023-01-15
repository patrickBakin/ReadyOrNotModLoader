#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ModProgressWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UModProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UModProgressWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueueProgressUpdated(int32 CompletedMods, int32 TotalMods);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModNameUpdated(const FString& ModName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDownloadProgressUpdated(float DownloadPercent, float ExtractionPercent, const FText& PercentText, const FText& RemainingText);
    
};

