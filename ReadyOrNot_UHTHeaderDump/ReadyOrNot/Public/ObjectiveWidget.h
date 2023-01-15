#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ETeamType.h"
#include "EPlayerObjectiveMarkerType.h"
#include "ObjectiveWidget.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UObjectiveWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* OwningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType ObjectiveTeam;
    
    UObjectiveWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjectiveType(EPlayerObjectiveMarkerType NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetObjectiveText(const FText& NewText);
    
};

