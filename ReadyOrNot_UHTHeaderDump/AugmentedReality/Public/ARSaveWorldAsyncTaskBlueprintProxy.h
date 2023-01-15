#pragma once
#include "CoreMinimal.h"
#include "ARSaveWorldPinDelegate.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
#include "ARSaveWorldAsyncTaskBlueprintProxy.generated.h"

class UObject;
class UARSaveWorldAsyncTaskBlueprintProxy;

UCLASS(Blueprintable)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FARSaveWorldPin OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FARSaveWorldPin OnFailed;
    
    UARSaveWorldAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);
    
};

