#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CanUseMultitoolOn.h"
#include "CanIssueCommandOn.h"
#include "ReceiveAISenseUpdates.h"
#include "ScoringInterface.h"
#include "UseabilityInterface.h"
#include "EActorOutlineType.h"
#include "ETrapType.h"
#include "ETrapState.h"
#include "TrapActor.generated.h"

class USceneComponent;
class UFMODAudioComponent;
class USplineComponent;
class UCableComponent;
class AReadyOrNotCharacter;
class UBoxComponent;
class UStaticMeshComponent;
class UInteractableComponent;
class UScoringComponent;
class UTrapSpawnComponent;
class ATrapActor;
class UMaterialInterface;
class UStaticMesh;
class UAIPerceptionStimuliSourceComponent;

UCLASS(Blueprintable)
class READYORNOT_API ATrapActor : public AActor, public ICanUseMultitoolOn, public ICanIssueCommandOn, public IUseabilityInterface, public IScoringInterface, public IReceiveAISenseUpdates {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrapTriggeredDelegate, ATrapActor*, Trap, AReadyOrNotCharacter*, TriggeredBy);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TrapMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioComponent* TrapActivateAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScoringComponent* ScoringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CableMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* CutCableComponent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* CutCableComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TripWireTriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* PerceptionStimuliComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TrapRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TrapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapType TrapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ETrapState TrapStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseMultitoolWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeTrapOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CableMaterial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrapTriggeredDelegate TrapTriggered;
    
    ATrapActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TrapInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TrapDeInit();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnTrapTriggered(AReadyOrNotCharacter* TriggeredBy);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnTrapDisarmed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrapTriggered(AReadyOrNotCharacter* TriggeredBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrapDisarmed(AReadyOrNotCharacter* DisarmedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrapAttached(UTrapSpawnComponent* SpawningComponent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnTrapTriggered(AReadyOrNotCharacter* TriggeredBy);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnTrapDisarmed();
    
    UFUNCTION(BlueprintCallable)
    void EnableOutline(EActorOutlineType OutlineType);
    
    UFUNCTION(BlueprintCallable)
    void DisableOutline();
    
    
    // Fix for true pure virtual functions not being implemented
};

