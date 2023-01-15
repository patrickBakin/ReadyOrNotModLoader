#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ActivityManager.generated.h"

class UActivityManager;
class UBaseActivity;
class ACyberneticCharacter;

UCLASS(Blueprintable, Transient)
class READYORNOT_API UActivityManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalStartDelay;
    
public:
    UActivityManager();
    UFUNCTION(BlueprintCallable)
    void SetStartDelay(float NewDelayTime);
    
    UFUNCTION(BlueprintCallable)
    static bool GiveActivityTo(UBaseActivity* InActivity, ACyberneticCharacter* InCharacter, bool bOverrideCurrentActivity, bool bClearActivityList);
    
    UFUNCTION(BlueprintCallable)
    static bool GiveActivitiesTo(const TArray<UBaseActivity*>& InActivities, ACyberneticCharacter* InCharacter, bool bOverrideCurrentActivity, bool bClearActivityList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartDelay() const;
    
    UFUNCTION(BlueprintCallable)
    static UActivityManager* Get();
    
    UFUNCTION(BlueprintCallable)
    static UBaseActivity* CreateActivity(UObject* ContextObject, TSubclassOf<UBaseActivity> InActivityClass, const FString& InActivityName, float InActivityStartDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanGiveActivityTo(UBaseActivity* InActivity, ACyberneticCharacter* InCharacter);
    
};

