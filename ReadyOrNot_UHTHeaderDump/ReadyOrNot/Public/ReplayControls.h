#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ReplayControls.generated.h"

class AReadyOrNotCharacter;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UReplayControls : public UUserWidget {
    GENERATED_BODY()
public:
    UReplayControls();
private:
    UFUNCTION(BlueprintCallable)
    AReadyOrNotCharacter* GetFollowCharacter(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    void GetAllFollowableCharacters(TArray<FString>& OutNames);
    
};

