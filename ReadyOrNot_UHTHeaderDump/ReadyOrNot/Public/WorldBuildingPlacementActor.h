#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WorldBuildingPlacementActor.generated.h"

class USceneComponent;
class AAISpawn;
class UBaseActivity;
class ACyberneticController;
class UWorldBuildingActivity;

UCLASS(Blueprintable)
class READYORNOT_API AWorldBuildingPlacementActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWorldBuildingActivity> Activity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropGunBeforeActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawn* LinkedToSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticController* InUseByController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultScene;
    
public:
    AWorldBuildingPlacementActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnWorldBuildingActivityFinished(UBaseActivity* InActivity, ACyberneticController* CyberneticController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInUseByController() const;
    
};

