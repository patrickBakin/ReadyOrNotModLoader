#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "DebugData.h"
#include "GatherDebugInterface.generated.h"

UINTERFACE(Blueprintable)
class READYORNOT_API UGatherDebugInterface : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IGatherDebugInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GatherDebugText(FString& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GatherDebugData(TArray<FDebugData>& OutDebugData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DrawVisualDebug();
    
};

