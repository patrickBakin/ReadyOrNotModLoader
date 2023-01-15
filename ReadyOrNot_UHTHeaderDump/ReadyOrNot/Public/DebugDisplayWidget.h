#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DebugDisplayWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UDebugDisplayWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDebugDisplayWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugTitle(const FString& NewTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugText(int32 ID, const FString& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 AddDebugText(const FString& NewText);
    
};

