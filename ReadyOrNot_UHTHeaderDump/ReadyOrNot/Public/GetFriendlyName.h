#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GetFriendlyName.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class READYORNOT_API UGetFriendlyName : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IGetFriendlyName : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetFriendlyName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* GetFriendlyIcon();
    
};

