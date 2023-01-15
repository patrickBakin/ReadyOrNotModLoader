#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzApiContext.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiContext : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UZeuzApiContext();
    UFUNCTION(BlueprintCallable)
    static void SetDefaultContext(const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FZeuzContext GetDefaultContext();
    
};

