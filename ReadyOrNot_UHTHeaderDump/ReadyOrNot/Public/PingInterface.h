#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "PingInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPingInterface : public UInterface {
    GENERATED_BODY()
};

class IPingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetPingText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPingLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSlateBrush GetPingIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPingDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPing();
    
};

