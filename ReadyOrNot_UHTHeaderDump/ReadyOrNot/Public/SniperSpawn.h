#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SniperSpawn.generated.h"

class USceneComponent;
class UArrowComponent;
class ASniperCharacter;

UCLASS(Blueprintable)
class READYORNOT_API ASniperSpawn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMovementLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartInADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASniperCharacter> SniperClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASniperCharacter> SpotterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASniperCharacter> MarksmanClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SpawnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSniperSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASniperCharacter* SpawnedSniper;
    
    ASniperSpawn();
    UFUNCTION(BlueprintCallable)
    void SpawnSpotterHere(int32 Designation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSniperHere(int32 Designation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnPersonnelOfClass(TSubclassOf<ASniperCharacter> CharacterClass, int32 Designation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnMarksmanHere(int32 Designation);
    
};

