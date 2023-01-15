#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReadyOrNotGameMode_PVP.h"
#include "ETeamType.h"
#include "VIPEscortGM.generated.h"

class ACharacter;
class APlayerController;
class AReadyOrNotCharacter;
class APlayerCharacter;
class APlayerStart_VIP_Spawn;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API AVIPEscortGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVIPKilledSignature, AReadyOrNotCharacter*, InstigatorCharacter, AReadyOrNotCharacter*, KilledCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVIPFreedSignature, ACharacter*, Freed, ACharacter*, Freer);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVIPKilledSignature OnVIPKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVIPFreedSignature OnVIPFreed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* VIPPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerStart_VIP_Spawn* ChosenVIPSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerCharacter> VIPCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VIPSpawnTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDeliverVIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostageHoldTime;
    
    AVIPEscortGM();
protected:
    UFUNCTION(BlueprintCallable)
    void VIPKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void VIPFreed(ACharacter* Freed, ACharacter* Freer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVIPDead();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVIPArrested();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVIPAlive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetVIPCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetCurrentVIPTeam() const;
    
};

