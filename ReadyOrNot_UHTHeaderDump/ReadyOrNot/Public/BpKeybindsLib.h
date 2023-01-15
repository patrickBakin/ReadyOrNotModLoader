#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BpKeybindsLib.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UBpKeybindsLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBpKeybindsLib();
    UFUNCTION(BlueprintCallable)
    static bool SaveKeybinds();
    
};

