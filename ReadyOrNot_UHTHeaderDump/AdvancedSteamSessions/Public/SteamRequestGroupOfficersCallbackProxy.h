#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "BlueprintGroupOfficerDetailsDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AdvancedSessions -ObjectName=BPUniqueNetId -FallbackName=BPUniqueNetId
#include "SteamRequestGroupOfficersCallbackProxy.generated.h"

class UObject;
class USteamRequestGroupOfficersCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGroupOfficerDetailsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGroupOfficerDetailsDelegate OnFailure;
    
    USteamRequestGroupOfficersCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(UObject* WorldContextObject, FBPUniqueNetId GroupUniqueNetID);
    
};

