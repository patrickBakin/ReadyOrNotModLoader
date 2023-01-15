#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CachedAnimStateData -FallbackName=CachedAnimStateData
#include "CachedAnimDataLibrary.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class UCachedAnimDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCachedAnimDataLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StateMachine_IsStateRelevant(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetLocalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetGlobalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
};

