#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ETeamType.h"
#include "TeamProgressScoreWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UTeamProgressScoreWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_LeftAligned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Score_Text_LeftAligned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_RightAligned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Score_Text_RightAligned;
    
public:
    UTeamProgressScoreWidget();
};

