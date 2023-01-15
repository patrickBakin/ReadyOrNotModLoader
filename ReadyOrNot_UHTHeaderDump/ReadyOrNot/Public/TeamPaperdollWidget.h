#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ETeamType.h"
#include "TeamPaperdollWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UTeamPaperdollWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Paperdoll_Image;
    
public:
    UTeamPaperdollWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeWidget(ETeamType InTeam);
    
};

