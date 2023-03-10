#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VictoryBPHTML.generated.h"

UCLASS(Blueprintable)
class VICTORYBPLIBRARY_API UVictoryBPHTML : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVictoryBPHTML();
    UFUNCTION(BlueprintCallable)
    static void VictoryHTML5_SetCursorVisible(bool MakeVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHTML();
    
};

