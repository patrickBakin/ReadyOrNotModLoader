#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CursorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UCursorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCursorWidget();
};

