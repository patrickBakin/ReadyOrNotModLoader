#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "PlayerHUD.generated.h"

class UUserWidget;
class APlayerController;
class UCanvasPanel;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API APlayerHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PlayerHUD;
    
    APlayerHUD();
private:
    UFUNCTION(BlueprintCallable)
    static void SetWidgetTranslationByMouseDelta(APlayerController* Controller, UUserWidget* Widget, float DeltaSeconds, float InterpSpeed, float InputScale, float ClampAt);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanvasTranslationByMouseDelta(APlayerController* Controller, UCanvasPanel* Widget, float DeltaSeconds, float InterpSpeed, float InputScale, float ClampAt);
    
};

