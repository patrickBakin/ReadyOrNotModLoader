#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_SpawnWeapon.generated.h"

class ABaseWeapon;

UCLASS(Blueprintable, CollapseCategories)
class READYORNOT_API UAnimNotify_SpawnWeapon : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABaseWeapon>> PotentialWeapons;
    
public:
    UAnimNotify_SpawnWeapon();
};

