#include "DebugDisplayActor.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

class UDebugDisplayWidget;

void ADebugDisplayActor::SetWidgetClass(TSubclassOf<UDebugDisplayWidget> NewWidgetClass) {
}

void ADebugDisplayActor::SetTitle(const FString& TextTitle) {
}

void ADebugDisplayActor::SetText(int32 TextLine, const FString& Text) {
}

int32 ADebugDisplayActor::AddText(const FString& Text) {
    return 0;
}

ADebugDisplayActor::ADebugDisplayActor() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
    this->LifeSpan = 30.00f;
    this->bBillboarding = false;
}

