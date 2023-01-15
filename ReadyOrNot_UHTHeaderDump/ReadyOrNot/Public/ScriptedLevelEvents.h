#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ScriptedLevelEvents.generated.h"

class UBaseActivity;
class ACyberneticController;
class ACyberneticCharacter;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API UScriptedLevelEvents : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScriptedLevelEvents();
    UFUNCTION(BlueprintCallable)
    static void ScriptedStopAimingAtEvent(ACyberneticController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static UBaseActivity* ScriptedShootAtEvent(ACyberneticController* Controller, APlayerCharacter* ForcedShootAtTarget);
    
    UFUNCTION(BlueprintCallable)
    static UBaseActivity* ScriptedAimAtEvent(ACyberneticController* Controller, APlayerCharacter* ForcedLookAtTarget);
    
    UFUNCTION(BlueprintCallable)
    static void GiveWorldBuildingActivityByTag(ACyberneticController* Controller, FName Tag, float TimeDoingActivity);
    
    UFUNCTION(BlueprintCallable)
    static APlayerCharacter* GetPlayerCharacterByTag(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static ACyberneticController* GetCyberneticsControllerByTag(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static ACyberneticCharacter* GetCyberneticsCharacterByTag(FName Tag);
    
};

