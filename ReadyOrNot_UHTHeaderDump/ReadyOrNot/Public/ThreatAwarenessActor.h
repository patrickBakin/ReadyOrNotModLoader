#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ExitData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EThreatLevel.h"
#include "ThreatAwarenessActor.generated.h"

class USceneComponent;
class ADoor;
class AThreatAwarenessActor;

UCLASS(Blueprintable)
class READYORNOT_API AThreatAwarenessActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultScene;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThreatLevel ThreatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* DoorThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrontDoorThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExitData> Exits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADoor*> UniqueExits;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> PathableThreatAwarenessActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> SwatLookAtPoints;
    
    AThreatAwarenessActor();
    UFUNCTION(BlueprintCallable)
    void ThisCalculateExits();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAnyVisibleExits();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFrontDoorThreat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorThreat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpecificExitDoor(ADoor* Door) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUniqueExtis(TArray<ADoor*>& OutDoors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EThreatLevel GetThreatLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRandomExitDoor(ADoor*& Door) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADoor* GetAttachedDoor() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateLookAtPoints();
    
};

