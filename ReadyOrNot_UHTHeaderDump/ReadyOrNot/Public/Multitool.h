#pragma once
#include "CoreMinimal.h"
#include "Tool.h"
#include "EMultitoolFunctions.h"
#include "Multitool.generated.h"

class UFMODEvent;
class UInteractionsData;
class APlayerCharacter;
class UReadyOrNotWeaponAnimData;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API AMultitool : public ATool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMultitoolFunctions, UReadyOrNotWeaponAnimData*> MultitoolAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* PvPFreeInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMultitoolFunctions CurrentToolKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAudioBasedProgress: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODLockpickingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODKnifeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODWirecutterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODFreeingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PendingFreeCharacter;
    
    AMultitool();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultitoolOperatingTimeFromToolkit(EMultitoolFunctions MultitoolFunction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultitoolOperatingTimeFromAudioLength(UFMODEvent* Event) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMultitoolOperatingTimeFromActiveToolkit() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopMultitoolAudio();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PlayMultitoolAudio();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ChangeToolkit(EMultitoolFunctions MultitoolFunction, bool bPlayAnimation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeToolkit(EMultitoolFunctions MultitoolFunction, bool bPlayAnimation);
    
};

