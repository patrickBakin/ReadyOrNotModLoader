#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BrainComponent.h"
#include "BehaviorTreeComponent.generated.h"

class UBehaviorTree;
class UBTNode;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AIMODULE_API UBehaviorTreeComponent : public UBrainComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBTNode*> NodeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultBehaviorTreeAsset;
    
public:
    UBehaviorTreeComponent();
    UFUNCTION(BlueprintCallable)
    void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTagCooldownEndTime(FGameplayTag CooldownTag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
    
};

