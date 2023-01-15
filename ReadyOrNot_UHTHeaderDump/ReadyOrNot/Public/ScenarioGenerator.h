#pragma once
#include "CoreMinimal.h"
#include "ScenarioDataArray.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "EScenarioImportance.h"
#include "ScenarioGenerator.generated.h"

class ACyberneticCharacter;
class AScenarioCoverActivator;
class AThreatAwarenessActor;

UCLASS(Blueprintable)
class READYORNOT_API AScenarioGenerator : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FScenarioDataArray> ScenarioMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScenarioName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnWhenEntered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScenarioCoverActivator* CurrentScenarioCoverActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScenarioImportance ScenarioImportance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> ScenarioThreats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AScenarioCoverActivator*> ScenarioCoverActivators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> SpawnedCharacters;
    
    AScenarioGenerator();
    UFUNCTION(BlueprintCallable)
    void SaveScenario();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadScenario();
    
public:
    UFUNCTION(BlueprintCallable)
    FString LoadRandomScenario();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLoadedScenarioList(TArray<FString>& OutScenarios);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeleteScenario();
    
};

