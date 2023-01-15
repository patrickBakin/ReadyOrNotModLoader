#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
#include "PickupItemActivity.generated.h"

class ABaseItem;
class AWeaponCacheActor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UPickupItemActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeaponCacheActor* WeaponCacheActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* PickupItem;
    
    UPickupItemActivity();
    UFUNCTION(BlueprintCallable)
    void SetPickupItem(ABaseItem* NewPickupItem);
    
    UFUNCTION(BlueprintCallable)
    void OnPickupItemComplete();
    
};

