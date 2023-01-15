#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WeaponCacheActor.generated.h"

class USceneComponent;
class ABaseMagazineWeapon;
class UArrowComponent;

UCLASS(Blueprintable)
class READYORNOT_API AWeaponCacheActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABaseMagazineWeapon>> AvailableWeapons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    AWeaponCacheActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ABaseMagazineWeapon> GetRandomAvailableWeapon() const;
    
};

