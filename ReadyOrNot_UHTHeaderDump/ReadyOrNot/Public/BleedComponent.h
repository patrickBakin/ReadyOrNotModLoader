#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BleedComponent.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UBleedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BleedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBleeding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTempStopBleeding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 HealCount;
    
public:
    UBleedComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopBleeding();
    
    UFUNCTION(BlueprintCallable)
    void StartBleeding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBleeding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBleedTime() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DoHeal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHeal() const;
    
};

