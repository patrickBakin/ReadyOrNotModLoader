#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ProgressionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UProgressionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UProgressionComponent();
    UFUNCTION(BlueprintCallable)
    void AddExperience(float XP);
    
};

