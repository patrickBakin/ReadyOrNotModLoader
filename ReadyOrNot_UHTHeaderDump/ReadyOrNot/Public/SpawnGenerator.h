#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ETeamType.h"
#include "SpawnGenerator.generated.h"

class USceneComponent;
class UBillboardComponent;
class APlayerStart;

UCLASS(Blueprintable)
class READYORNOT_API ASpawnGenerator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType SpawnTeam;
    
    UPROPERTY(EditAnywhere)
    uint16 Rows;
    
    UPROPERTY(EditAnywhere)
    uint16 Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RowSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColumnSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowNodes: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerStart*> PlayerStarts;
    
public:
    ASpawnGenerator();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerStartTags();
    
    UFUNCTION(BlueprintCallable)
    void SelectAll();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSpawns();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETeamType GetSpawnTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerStart*> GetAllPlayerStarts() const;
    
};

