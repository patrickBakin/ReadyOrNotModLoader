#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioInitializeOptions.h"
#include "ModioInstallationOverride.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioInstallationOverride : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioInstallationOverride();
    UFUNCTION(BlueprintCallable)
    static bool OverrideModInstallationDirectory(const FString& NewInstallPath, FModioInitializeOptions InitParams);
    
};

