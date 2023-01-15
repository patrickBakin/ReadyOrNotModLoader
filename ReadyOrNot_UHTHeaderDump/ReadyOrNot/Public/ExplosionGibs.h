#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ExplosionGibs.generated.h"

class USkeletalMeshComponent;
class UBloodData;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API AExplosionGibs : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBloodData* BloodData;
    
public:
    AExplosionGibs();
private:
    UFUNCTION(BlueprintCallable)
    void SpawnBloodDecal(const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGibsForSkeletalMesh(const USkeletalMeshComponent* Mesh);
    
};

