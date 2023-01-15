#pragma once
#include "CoreMinimal.h"
#include "BaseMagazineWeapon.h"
#include "PepperballGun.generated.h"

class ACyberneticCharacter;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API APepperballGun : public ABaseMagazineWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ShootTrailComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleShootTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeadshotsUntilAbuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHeadshotCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StunShotsUntilAbuse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStunShotCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBallsInHopper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BallsInHopper;
    
    APepperballGun();
    UFUNCTION(BlueprintCallable)
    void IncrementStunShotCounter(ACyberneticCharacter* StunnedPerson);
    
    UFUNCTION(BlueprintCallable)
    void IncrementHeadshotCounter(ACyberneticCharacter* HeadshottedPerson);
    
};

