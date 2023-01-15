#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "VisualEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UVisualEffect : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Impact;
    
    UVisualEffect();
};

