#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotGameState.h"
#include "ETeamType.h"
#include "EEvidenceActorState.h"
#include "IncriminationGS.generated.h"

class ABuildingTrigger_Incrimination;
class AEvidenceSpawnPoint;
class AEvidenceExtractionDevice_Incrim;
class AEvidenceExtractionDevice;
class AEvidenceActor;
class AIncriminationClueSpawnPoint;
class AIncriminationClue;
class APlayerCharacter;
class ASplineTrigger_Incrimination;

UCLASS(Blueprintable)
class READYORNOT_API AIncriminationGS : public AReadyOrNotGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvidenceSearchAreaChosen, ASplineTrigger_Incrimination*, EvidenceSearchArea);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEvidenceBuildingChosen, ABuildingTrigger_Incrimination*, EvidenceSearchArea);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEvidenceActorStateChanged, AEvidenceActor*, EvidenceActor, EEvidenceActorState, NewEvidenceState, bool, bExtracted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCluesChanged, TArray<AIncriminationClue*>, Clues);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveClueChanged, AIncriminationClue*, ActiveClue);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEvidenceActorStateChanged OnIntelStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEvidenceSearchAreaChosen OnIntelSearchAreaChosen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEvidenceBuildingChosen OnIntelBuildingChosen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveClueChanged OnActiveClueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveClueChanged OnPreviousActiveClueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCluesChanged OnCluesChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AEvidenceSpawnPoint* ChosenEvidenceSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AEvidenceActor* ChosenEvidenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AEvidenceExtractionDevice_Incrim* ChosenExtractionDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnCluesChanged, meta=(AllowPrivateAccess=true))
    TArray<AIncriminationClue*> Clues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AIncriminationClueSpawnPoint*> ClueSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnActiveClueChanged, meta=(AllowPrivateAccess=true))
    AIncriminationClue* ActiveClue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnPreviousActiveClueChanged, meta=(AllowPrivateAccess=true))
    AIncriminationClue* PreviousActiveClue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnIntelSearchAreaChosen, meta=(AllowPrivateAccess=true))
    ASplineTrigger_Incrimination* ChosenEvidenceSearchArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnIntelBuildingChosen, meta=(AllowPrivateAccess=true))
    ABuildingTrigger_Incrimination* ChosenEvidenceBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ASplineTrigger_Incrimination*> NonMainIntelSearchZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AEvidenceExtractionDevice* CurrentExtractionDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETeamType PickupTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnIntelStateChanged, meta=(AllowPrivateAccess=true))
    EEvidenceActorState IntelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnIntelStateChanged, meta=(AllowPrivateAccess=true))
    bool bIntelExtracted;
    
    AIncriminationGS();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnPreviousActiveClueChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnIntelStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnIntelSearchAreaChosen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnIntelBuildingChosen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnCluesChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnActiveClueChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIncriminationClue* GetClue(int32 ClueNumber, bool& bSuccess, bool bMustBeFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIncriminationClue*> GetAllCluesOfNumber(int32 ClueNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPlayerPossessAnyClue(APlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyLowerCluesFound(int32 ClueNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyHigherCluesFound(int32 ClueNumber);
    
};

