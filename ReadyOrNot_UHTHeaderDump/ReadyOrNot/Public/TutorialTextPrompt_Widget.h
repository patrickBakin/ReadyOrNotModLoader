#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TutorialTextPrompt_Widget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UTutorialTextPrompt_Widget : public UUserWidget {
    GENERATED_BODY()
public:
    UTutorialTextPrompt_Widget();
};

