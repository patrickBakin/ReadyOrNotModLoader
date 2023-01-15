#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "SpawnerSavedData.h"
#include "SavedCullDistanceSettings.h"
#include "WorldDataGenerator.generated.h"

class ADoor;
class AThreatAwarenessActor;
class UWorldGenSave;

UCLASS(Blueprintable)
class READYORNOT_API AWorldDataGenerator : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADoor> DoorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> IgnoredExitThreats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoorwaysBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRedBlueClearDistanceApart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnlyOnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistanceMaxBoundsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CullDistanceSettingsSaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSavedCullDistanceSettings> SavedCullDistanceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasWorldEverBeenGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnerSavedData SpawnerSavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldGenSave* WorldGenSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* CurrentBrokenDoor;
    
    AWorldDataGenerator();
    UFUNCTION(BlueprintCallable)
    void VerifyWorldBuildingActivities();
    
    UFUNCTION(BlueprintCallable)
    void UnblockAllDoorways();
    
    UFUNCTION(BlueprintCallable)
    void SortAndTrimMaxVisibleThreats();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnerSavedData(FSpawnerSavedData InSpawnerSavedData);
    
    UFUNCTION(BlueprintCallable)
    void SaveCullDistanceSettings();
    
    UFUNCTION(BlueprintCallable)
    void SaveAllScenarios();
    
    UFUNCTION(BlueprintCallable)
    void ReportAllUnreachableSpawnsAndCoverToLog();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceAllDoors();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllUnreachableThreats();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllUnreachableStacks();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllUnreachableSpawns();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllUnreachableCover();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllStackups();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllOverlappingThreats();
    
    UFUNCTION(BlueprintCallable)
    void PushThreatsAwayFromWalls();
    
    UFUNCTION(BlueprintCallable)
    void PlacePatrolPointsOnAllThreats();
    
    UFUNCTION(BlueprintCallable)
    void PlacePatrolPointsOnAllDoors();
    
    UFUNCTION(BlueprintCallable)
    void NextBrokenDoor();
    
    UFUNCTION(BlueprintCallable)
    void MultiplyAllCullDistances();
    
    UFUNCTION(BlueprintCallable)
    void LoadCullDistanceSettings();
    
    UFUNCTION(BlueprintCallable)
    void LinkSubdoors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpawnerSavedData(FSpawnerSavedData& OutSpawnerSavedData);
    
    UFUNCTION(BlueprintCallable)
    void GenerateWorldThreatAwarenessActors();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateWorld();
    
    UFUNCTION(BlueprintCallable)
    void GenerateWebbedBreachPoints();
    
    UFUNCTION(BlueprintCallable)
    void GenerateSwatLookAtPointsForEachThreat();
    
    UFUNCTION(BlueprintCallable)
    void GenerateStackUpPoints();
    
    UFUNCTION(BlueprintCallable)
    void GenerateSpawnHidingSpots();
    
    UFUNCTION(BlueprintCallable)
    void GenerateInstancedStaticMesh();
    
    UFUNCTION(BlueprintCallable)
    void GenerateCullDistances();
    
    UFUNCTION(BlueprintCallable)
    void GenerateAllDoorThreatAwarenessActors();
    
    UFUNCTION(BlueprintCallable)
    void GenerateAllDoorClearPoints();
    
    UFUNCTION(BlueprintCallable)
    void FixCachedCullDistance();
    
    UFUNCTION(BlueprintCallable)
    void DetermineAutomaticTrapOrientation();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllThreats();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllPatrolPoints();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpOverlappingThreats();
    
    UFUNCTION(BlueprintCallable)
    void CapMaxCullDistanceByBoundsMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void CalculateAllExits();
    
    UFUNCTION(BlueprintCallable)
    void BlockAllDoorways();
    
};

