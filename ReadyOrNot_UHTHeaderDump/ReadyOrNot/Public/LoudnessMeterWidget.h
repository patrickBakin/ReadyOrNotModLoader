#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "LoudnessMeterWidget.generated.h"

class APlayerCharacter;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API ULoudnessMeterWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* MovementSound_WidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlayerCharacter;
    
public:
    ULoudnessMeterWidget();
};

