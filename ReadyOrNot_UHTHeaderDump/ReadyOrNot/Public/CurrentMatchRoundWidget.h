#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "CurrentMatchRoundWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UCurrentMatchRoundWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentRound_Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CurrentRound_Text_Style2;
    
public:
    UCurrentMatchRoundWidget();
};

