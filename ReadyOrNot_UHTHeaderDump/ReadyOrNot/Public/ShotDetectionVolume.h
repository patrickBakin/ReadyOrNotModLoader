#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ShotDetectionVolume.generated.h"

class ABaseWeapon;
class ABaseGrenade;
class AReadyOrNotCharacter;
class UBoxComponent;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API AShotDetectionVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Bounds;
    
    AShotDetectionVolume();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShotFired(ABaseWeapon* FiringWeapon, APlayerCharacter* FiringPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGrenadeDetonated(FHitResult Hit, ABaseGrenade* TriggeringGrenade, AReadyOrNotCharacter* OwningPlayer);
    
};

