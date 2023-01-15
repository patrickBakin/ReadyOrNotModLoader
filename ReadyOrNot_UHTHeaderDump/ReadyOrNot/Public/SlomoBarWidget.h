#pragma once
#include "CoreMinimal.h"
#include "BarEventSignatureDelegate.h"
#include "BaseWidget.h"
#include "SlomoBarWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API USlomoBarWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarEventSignature OnProgressBarStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarEventSignature OnProgressBarFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    USlomoBarWidget();
    UFUNCTION(BlueprintCallable)
    void SetDuration(float NewDuration);
    
    UFUNCTION(BlueprintCallable)
    void ProgressBarFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDuration() const;
    
};

