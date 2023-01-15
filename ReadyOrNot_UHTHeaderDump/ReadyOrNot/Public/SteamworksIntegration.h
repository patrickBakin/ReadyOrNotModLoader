#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EDLC.h"
#include "SteamworksIntegration.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API USteamworksIntegration : public UObject {
    GENERATED_BODY()
public:
    USteamworksIntegration();
    UFUNCTION(BlueprintCallable)
    static bool IsDLCInstalledEnum(EDLC Dlc);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDLCInstalled(int32 AppId);
    
};

