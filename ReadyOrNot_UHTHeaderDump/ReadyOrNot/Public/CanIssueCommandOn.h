#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "CanIssueCommandOn.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UCanIssueCommandOn : public UInterface {
    GENERATED_BODY()
};

class ICanIssueCommandOn : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetCommandActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanIssueCommand() const;
    
};

