#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzIDType.h"
#include "ZeuzID.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzID : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UZeuzID();
    UFUNCTION(BlueprintCallable)
    static bool IsValid(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsType(const FString& ID, ZeuzIDType typ);
    
    UFUNCTION(BlueprintCallable)
    static ZeuzIDType GetType(const FString& ID);
    
};

