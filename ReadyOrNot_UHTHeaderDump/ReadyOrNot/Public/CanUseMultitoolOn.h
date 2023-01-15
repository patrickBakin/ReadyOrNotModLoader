#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EMultitoolFunctions.h"
#include "CanUseMultitoolOn.generated.h"

class AReadyOrNotCharacter;
class AMultitool;

UINTERFACE(Blueprintable)
class READYORNOT_API UCanUseMultitoolOn : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API ICanUseMultitoolOn : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOperate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Server_FinishedUsingMultitool(AReadyOrNotCharacter* ToolOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMultitoolFunctions GetMultitoolUseType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMultitoolUseTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Client_FinishedUsingMultitool(AReadyOrNotCharacter* ToolOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUseMultitoolNow(AReadyOrNotCharacter* ToolOwner, AMultitool* Tool, FHitResult TraceHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanCancelMultitoolAction();
    
};

