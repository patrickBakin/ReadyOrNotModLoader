#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RoNWeaponAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API URoNWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator OptiwandBoneModify;
    
    URoNWeaponAnimInstance();
    UFUNCTION(BlueprintCallable)
    void OnSpeedReloadMagazineEjected();
    
    UFUNCTION(BlueprintCallable)
    void OnDisassembleMagazineEjected();
    
};

