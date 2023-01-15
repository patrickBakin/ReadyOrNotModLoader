#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "MatchTimeRemainingWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UMatchTimeRemainingWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MatchTimeRemaining_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundTimeRemaining;
    
public:
    UMatchTimeRemainingWidget();
};

