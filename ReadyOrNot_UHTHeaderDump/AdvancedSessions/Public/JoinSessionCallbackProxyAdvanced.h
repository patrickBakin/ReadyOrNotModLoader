#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "JoinSessionCallbackProxyAdvanced.generated.h"

class UJoinSessionCallbackProxyAdvanced;
class APlayerController;
class UWorld;

UCLASS(Blueprintable)
class ADVANCEDSESSIONS_API UJoinSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UJoinSessionCallbackProxyAdvanced();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UJoinSessionCallbackProxyAdvanced* JoinSession(UWorld* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);
    
};

