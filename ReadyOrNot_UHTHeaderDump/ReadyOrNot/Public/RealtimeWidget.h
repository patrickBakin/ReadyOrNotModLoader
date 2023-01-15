#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "RealtimeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API URealtimeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URealtimeWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSynchronizeProperties();
    
};

