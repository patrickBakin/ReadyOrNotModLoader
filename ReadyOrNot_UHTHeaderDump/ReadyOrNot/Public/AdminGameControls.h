#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "AdminGameControls.generated.h"

class APlayerState;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UAdminGameControls : public UUserWidget {
    GENERATED_BODY()
public:
    UAdminGameControls();
private:
    UFUNCTION(BlueprintCallable)
    void KickPlayer(APlayerState* KickingPlayerState, FText reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAdmin();
    
    UFUNCTION(BlueprintCallable)
    void GetKickablePlayers(TArray<APlayerState*>& KickablePlayers);
    
};

