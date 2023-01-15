#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpawnData.h"
#include "AIDataLookupTable.h"
#include "ETeamType.h"
#include "AISpawn.generated.h"

class USceneComponent;
class ACyberneticCharacter;
class UArrowComponent;

UCLASS(Blueprintable)
class READYORNOT_API AAISpawn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnData SpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnData> RosterSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExplosiveVestSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRoamerSpawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SpawnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataLookupTable SavedAIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticCharacter* SpawnedCharacterDeffered;
    
public:
    AAISpawn();
protected:
    UFUNCTION(BlueprintCallable)
    void TransferSpawnDataToRosterSpawnData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSuspectSpawnData(TArray<FSpawnData>& OutSpawnData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetSpawningTeamType(FSpawnData Sd) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetSpawnedCharacterDeffered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetDefaultSpawningTeamType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCivilianSpawnData(TArray<FSpawnData>& OutSpawnData) const;
    
    UFUNCTION(BlueprintCallable)
    bool DoSpawn();
    
};

