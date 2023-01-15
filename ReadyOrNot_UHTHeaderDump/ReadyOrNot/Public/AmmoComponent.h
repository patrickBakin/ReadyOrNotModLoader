#pragma once
#include "CoreMinimal.h"
#include "ResourceComponent.h"
#include "AmmoComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UAmmoComponent : public UResourceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoUsagePerSecond;
    
public:
    UAmmoComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmmoUsagePerSecond() const;
    
};

