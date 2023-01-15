#pragma once
#include "CoreMinimal.h"
#include "SuspectArmourData.h"
#include "BaseArmour.h"
#include "SuspectArmour.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class READYORNOT_API ASuspectArmour : public ABaseArmour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ArmourData, meta=(AllowPrivateAccess=true))
    FSuspectArmourData ArmourData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Durability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BlockedSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* PenetratedSoundEvent;
    
    ASuspectArmour();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ArmourData();
    
};

