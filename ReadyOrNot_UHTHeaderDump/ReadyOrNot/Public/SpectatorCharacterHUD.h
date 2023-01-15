#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SpectatorCharacterHUD.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API USpectatorCharacterHUD : public UBaseWidget {
    GENERATED_BODY()
public:
    USpectatorCharacterHUD();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeamChatPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewCharacterViewed(APlayerCharacter* NewViewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChatPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterPrint(FName MessageType, float Duration, APlayerCharacter* Other);
    
};

