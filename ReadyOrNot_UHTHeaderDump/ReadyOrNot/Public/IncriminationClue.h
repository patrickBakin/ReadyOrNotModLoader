#pragma once
#include "CoreMinimal.h"
#include "PickupActor.h"
#include "EClueState.h"
#include "IncriminationClue.generated.h"

class AActor;
class AIncriminationClueSpawnPoint;
class AIncriminationClue;
class UMapActorComponent;

UCLASS(Blueprintable)
class READYORNOT_API AIncriminationClue : public APickupActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnClueFound, AIncriminationClue*, ClueActor, AActor*, ClueFounder);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClueFound Delegate_OnClueFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapActorComponent* MapActorComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 ClueNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ShowObjectiveMarkerIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AIncriminationClue* NextClue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText ClueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText ClueFoundMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AIncriminationClueSpawnPoint* SpawnPointOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnClueFound, meta=(AllowPrivateAccess=true))
    uint8 bClueFound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bClueTimerExpired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnClueStateChanged, meta=(AllowPrivateAccess=true))
    EClueState ClueState;
    
public:
    AIncriminationClue();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RevealNextClue();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnClueStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnClueFound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnClueFound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClueFound() const;
    
    UFUNCTION(BlueprintCallable)
    void Init(AIncriminationClueSpawnPoint* OwningSpawn, uint8 InClueNumber, const FText& InClueName, const FText& InClueFoundMessage, float InShowObjectiveMarkerIn);
    
};

