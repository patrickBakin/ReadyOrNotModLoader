#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "MatchStatusCardWidget.generated.h"

class UCurrentMatchRoundWidget;
class UMatchTimeRemainingWidget;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UMatchStatusCardWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchTimeRemainingWidget* MatchTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCurrentMatchRoundWidget* CurrentMatchRound;
    
public:
    UMatchStatusCardWidget();
};

