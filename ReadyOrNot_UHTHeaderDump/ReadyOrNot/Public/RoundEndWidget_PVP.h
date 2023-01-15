#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "RoundEndWidget_PVP.generated.h"

class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API URoundEndWidget_PVP : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_FadeIn;
    
public:
    URoundEndWidget_PVP();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameModeRoundEnded();
    
};

