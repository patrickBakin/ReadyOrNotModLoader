#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "DeployableSpawnComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UDeployableSpawnComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeployableLabel;
    
    UDeployableSpawnComponent();
    UFUNCTION(BlueprintCallable)
    bool TrySpawnComponent(bool ShouldSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MutateSpawnedDeployable(AActor* SpawnedDeployable);
    
};

