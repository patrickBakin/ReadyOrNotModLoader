#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CanUse.generated.h"

class USceneComponent;
class APlayerCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UCanUse : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API ICanUse : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UsesHoldButtonPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartUse(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlaysUseIconComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OverridesUseButtonPromptText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAvailableForUse();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<USceneComponent*> GetUseViewComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetUseIconBoltComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetUseButtonPromptText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndUse(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUse(APlayerCharacter* User);
    
};

