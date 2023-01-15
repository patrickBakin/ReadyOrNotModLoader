#pragma once
#include "CoreMinimal.h"
#include "ResourceComponent.h"
#include "ArmourResourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UArmourResourceComponent : public UResourceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Resistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RemainingTickets;
    
public:
    UArmourResourceComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetResistance(float NewResistancePercentage);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxTickets(int32 NewMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResistancePercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingTickets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxTickets() const;
    
};

