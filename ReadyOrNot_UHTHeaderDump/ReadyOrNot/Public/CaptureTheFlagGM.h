#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReadyOrNotGameMode_PVP.h"
#include "ETeamType.h"
#include "CaptureTheFlagGM.generated.h"

class AReadyOrNotCharacter;
class ACTF_FlagSpawnPoint;
class ACTF_Flag;
class APlayerCharacter;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API ACaptureTheFlagGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFlagDroppedSignature, APlayerCharacter*, DroppedByCharacter, ETeamType, DroppedByTeam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFlagCapturedSignature, APlayerCharacter*, CapturedByCharacter, ETeamType, CpaturedByTeam);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlagCapturedSignature OnFlagCaptured;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlagDroppedSignature OnFlagDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACTF_Flag> FlagClassToSpawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTF_Flag* Flag;
    
public:
    ACaptureTheFlagGM();
private:
    UFUNCTION(BlueprintCallable)
    void OnFlagBearerKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
public:
    UFUNCTION(BlueprintCallable)
    void DropFlag();
    
    UFUNCTION(BlueprintCallable)
    ACTF_FlagSpawnPoint* ChooseFlagSpawnPoint();
    
    UFUNCTION(BlueprintCallable)
    void CaptureFlag(ACTF_Flag* CapturedFlag, APlayerCharacter* NewFlagBearer);
    
};

