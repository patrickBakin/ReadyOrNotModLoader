#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameMode_PVP.h"
#include "IncriminationGM.generated.h"

class AActor;
class AIncriminationClue;
class ASpawnGenerator;

UCLASS(Blueprintable, NonTransient)
class READYORNOT_API AIncriminationGM : public AReadyOrNotGameMode_PVP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxCluesToFind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnGenerator* ChosenSpawnGroup_BlueTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnGenerator* ChosenSpawnGroup_RedTeam;
    
public:
    AIncriminationGM();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEvidencePickedUp(AActor* PickupActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEvidenceDropped(AActor* DropActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClueFound(AIncriminationClue* ClueActor, AActor* ClueFounder);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVisitedAllEvidenceSpawns() const;
    
};

