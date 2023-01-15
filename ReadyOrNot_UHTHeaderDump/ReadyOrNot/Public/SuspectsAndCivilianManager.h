#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "SuspectsAndCivilianManager.generated.h"

class ACyberneticCharacter;
class UWorld;
class ASuspectsAndCivilianManager;
class ATrapActor;

UCLASS(Blueprintable)
class READYORNOT_API ASuspectsAndCivilianManager : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATrapActor*> InvestigatedTrap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> Suspects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> Civilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspectPushCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspectInvestigationCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuspectFlankCooldown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> SpeechCooldownMap;
    
public:
    ASuspectsAndCivilianManager();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PlaySharedBarkOrStartConversation(const FString& SpeechRow, ACyberneticCharacter* Speaker, float Cooldown);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveSuspects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveCivilians() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASuspectsAndCivilianManager* Get(UWorld* World);
    
};

