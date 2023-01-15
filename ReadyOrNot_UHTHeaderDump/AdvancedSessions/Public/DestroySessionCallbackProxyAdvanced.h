#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "DestroySessionCallbackProxyAdvanced.generated.h"

class UDestroySessionCallbackProxyAdvanced;
class APlayerController;
class UWorld;

UCLASS(Blueprintable)
class ADVANCEDSESSIONS_API UDestroySessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UDestroySessionCallbackProxyAdvanced();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDestroySessionCallbackProxyAdvanced* DestroySession(UWorld* WorldContextObject, APlayerController* PlayerController);
    
};

