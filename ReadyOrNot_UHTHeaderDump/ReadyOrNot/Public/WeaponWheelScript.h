#pragma once
#include "CoreMinimal.h"
#include "BaseRadialMenuScript.h"
#include "WeaponWheelScript.generated.h"

class APlayerCharacter;
class UWeaponWheelWidget;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API UWeaponWheelScript : public UBaseRadialMenuScript {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponWheelWidget* WeaponWheelOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlayerCharacter;
    
public:
    UWeaponWheelScript();
};

