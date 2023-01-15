#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TeamStackUpActivity.h"
#include "TeamBreachAndClearActivity.generated.h"

class ABaseItem;
class UBaseActivity;
class ABaseGrenade;
class ACyberneticController;
class ACyberneticCharacter;
class UCustomDoorBreachActivity;
class UDoorBreachActivity;
class AThreatAwarenessActor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UTeamBreachAndClearActivity : public UTeamStackUpActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AThreatAwarenessActor* UsedClearPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseGrenade* LeaderLastEquippedGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseGrenade* ThrownGrenade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreachStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* DoorUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* DoorBreacher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> DoorBreachItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> DoorUseItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDoorBreachActivity* DoorUseActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDoorBreachActivity* DoorBreachActivity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCustomDoorBreachActivity> CustomDoorUseActivityClass;
    
public:
    UTeamBreachAndClearActivity();
private:
    UFUNCTION(BlueprintCallable)
    void PerformClearStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void PerformBreachStage(float DeltaTime, float Uptime);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDoorBreachFinished(UBaseActivity* InActivity, ACyberneticController* InController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDoorBreacherReady();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorBreacherBreaching();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsFinishedClearing() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EnterClearStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterClearedStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterBreachStage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeployChemlight();
    
    UFUNCTION(BlueprintCallable)
    bool CanPerformClear() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanPerformBreach() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenDoor() const;
    
};

