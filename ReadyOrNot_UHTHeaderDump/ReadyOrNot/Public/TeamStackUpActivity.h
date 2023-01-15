#pragma once
#include "CoreMinimal.h"
#include "TeamBaseActivity.h"
#include "ESquadPosition.h"
#include "EStackupGenArea.h"
#include "EDoorCheckResult.h"
#include "TeamStackUpActivity.generated.h"

class ACyberneticCharacter;
class ADoor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTeamStackUpActivity : public UTeamBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* DoorChecker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* StackUpDoor;
    
public:
    UTeamStackUpActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void PerformStackUpStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void PerformCheckStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void OnDoorOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorChecked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADoor* GetStackUpDoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDoorCheckResult GetDoorCheckResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacterAtSquadPositionInStackUpArea(ESquadPosition SquadPosition, EStackupGenArea StackupArea) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitStackupStage();
    
    UFUNCTION(BlueprintCallable)
    void ExitCheckStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterStackupStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterCheckStage();
    
    UFUNCTION(BlueprintCallable)
    bool CanPerformCheck() const;
    
};

