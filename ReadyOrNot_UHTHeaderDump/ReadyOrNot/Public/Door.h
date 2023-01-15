#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CanUseMultitoolOn.h"
#include "CanPlaceC2On.h"
#include "CanIssueCommandOn.h"
#include "CanBreachWithShotgun.h"
#include "DoorwayWithoutDoor.h"
#include "GatherDebugInterface.h"
#include "PingInterface.h"
#include "ReceiveAISenseUpdates.h"
#include "UseabilityInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PingData.h"
#include "DoorData.h"
#include "TrapData.h"
#include "MODParam.h"
#include "EDoorDamageType.h"
#include "EActorOutlineType.h"
#include "ETrapSetup.h"
#include "EStackupGenType.h"
#include "EDoorInteraction.h"
#include "EStackupGenArea.h"
#include "Door.generated.h"

class UObject;
class USceneComponent;
class AActor;
class UFMODEvent;
class AController;
class AReadyOrNotCharacter;
class ADoorJam;
class ADoor;
class UStaticMeshComponent;
class UDestructibleDoorChunkComponent;
class UFMODAudioPropagationComponent;
class AFlankingAvoidanceVolume;
class UInteractableComponent;
class UMirrorPortalComponent;
class APlacedC2Explosive;
class AStackUpActor;
class ATrapActorAttachedToDoor;
class AThreatAwarenessActor;
class UTeamBreachAndClearActivity;
class UMaterialInterface;
class UCurveFloat;
class ANavLinkProxy;

UCLASS(Blueprintable)
class READYORNOT_API ADoor : public ADoorwayWithoutDoor, public ICanIssueCommandOn, public ICanPlaceC2On, public ICanBreachWithShotgun, public ICanUseMultitoolOn, public IUseabilityInterface, public IPingInterface, public IGatherDebugInterface, public IReceiveAISenseUpdates {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDoorKick, ADoor*, Door, AReadyOrNotCharacter*, InstigatorCharacter, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDoorExplode, ADoor*, Door, AReadyOrNotCharacter*, InstigatorCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorClosed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorBroken);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Errors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DoorBlockerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DoorBlockerActorInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawNoStackupExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomlyOpenAtGameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreForFlee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTeamBreachAndClearActivity* CurrentTeamBreachActivity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorOpened OnDoorOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorOpened OnSubDoorOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorClosed OnDoorClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorBroken OnDoorBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorExplode OnDoorExploded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorKick OnDoorKicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> FrontThreatAwarenessPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> BackThreatAwarenessPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStackUpActor*> FrontLeftStackUpPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStackUpActor*> FrontRightStackUpPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStackUpActor*> BackLeftStackUpPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStackUpActor*> BackRightStackUpPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> RedTeamFrontClearPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> BlueTeamFrontClearPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> RedTeamBackClearPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AThreatAwarenessActor*> BlueTeamBackClearPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bDoorJammed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DestroyedChunkIdxChanged, meta=(AllowPrivateAccess=true))
    TArray<int32> DestroyedChunkIdxs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStackupGenType StackupGenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStackupGenArea StackupGenArea;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectronicLockChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldInvertTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OperatingStates;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DoorStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DoorHandleFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DoorHandleBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirrorPortalComponent* FrontMirrorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirrorPortalComponent* BackMirrorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleDoorChunkComponent* DoorChunk8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LightBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* DoorOpenInteractableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* DoorSublinkOpenInteractableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* DoorSublinkPushInteractableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* DoorPushInteractableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* DoorKickInteractableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* DoorSublinkKickInteractableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* LockpickInteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* C2InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* WedgeInteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* OptiwandInteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* BSGInteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* BSGInteractableComponent_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* DoorRamInteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFMODAudioPropagationComponent* FMODAudioPropagationComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavLinkProxy* NavLinkProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LockpickArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DoorArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* C2Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BSGArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MirrorgunArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WedgeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BatteringRamArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFlankingAvoidanceVolume* NavModifierVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasEverBeenOpenedBySwat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TypeOfDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TypeOfTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrapSetup TrapSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoSpawnTrap: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DoorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOneWay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanOpenFromOppositeSide: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanPlayerInteract: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanMirrorGun: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDoorDamageType, float> DoorKillDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDoorDamageType, float> DoorStunDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOpenClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingOpenCloseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncrementAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultitoolUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeDamageToBreakDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveAndClearRequiredAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicalPushAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanIssueOrdersOnFrontSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanIssueOrdersOnBackSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPingData PingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* DriveSubDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* MatchOpenCloseDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMainSubDoor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKickAlwaysFails: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorKickSuccessChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSuccessfulKicksToBreakDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* C2ExplosionDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableStackUpOnFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableStackUpOnBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideLockChance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockedChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorPushCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorOpenCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorCloseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorKickSuccessCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorKickFailCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorLockedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorRamCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorExplodeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorBreachCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorHandleOpenCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorHandlePushCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DoorHandleLockedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlacedC2Explosive* PlacedC2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UDestructibleDoorChunkComponent*> ChunkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPendingSubDoorKick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* LastDoorUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EDoorDamageType LastDoorDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATrapActorAttachedToDoor* AttachedTrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ADoorJam* AttachedWedge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsElectronicDoor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float OpenCloseAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DoorHandlePitchAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bC2Placed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bSWATKnowsLockState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bSuspectKnowsLockState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bSWATKnowsTrapState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bSuspectKnowsTrapState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Blocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bDoorBroken: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bTrapInFront: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientResetDoor, meta=(AllowPrivateAccess=true))
    uint8 bClientReset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorHandlesBroken, meta=(AllowPrivateAccess=true))
    uint8 bDoorHandlesBroken: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSWATHasKeycard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuspectsHaveKeycard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlarmTriggered: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorDataUpdated, meta=(AllowPrivateAccess=true))
    FDoorData DoorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrapDataUpdated, meta=(AllowPrivateAccess=true))
    FTrapData TrapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AReadyOrNotCharacter*> CharactersOverlappingDoor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorOcclusionMultiplier;
    
    ADoor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateDoorTickRate();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnlockDoor(bool bUnlockSubDoor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TryPlayAISuspectResponseToDoorBroken();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleLightBlocker();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Tick_DoorRam();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorPush();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorOpenClose();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorLocked();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorKick_Success();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorKick_Fail();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorHandleLocked();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorHandle_Push();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorHandle_Open();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorExplode();
    
    UFUNCTION(BlueprintCallable)
    void Tick_DoorBreach();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TeamKnowsDoorTrapState(bool bSuspectTeam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TeamKnowsDoorLockState(bool bSuspectTeam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SubDoor_CanOpenDoors(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SubDoor_CanCloseDoors(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    void SpawnDoorBlocker();
    
    UFUNCTION(BlueprintCallable)
    void SkippedBreachAction();
    
    UFUNCTION(BlueprintCallable)
    void SetupTrap();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSWATHasAllKeycards(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool bNewLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorTrapKnowledge(bool bSuspectTeam, bool bKnowledge);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorLockKnowledge(bool bSuspectTeam, bool bKnowledge);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAllElectronicLocks(UObject* WorldContextObject, bool NewBlocked);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetTrapKnowledgeState(bool bSuspectTeam, bool bNewKnowledgeState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetLockKnowledgeState(bool bSuspectTeam, bool bNewKnowledgeState);
    
    UFUNCTION(BlueprintCallable)
    void Restore();
    
    UFUNCTION(BlueprintCallable)
    void ResetDoorTrapKnowledge();
    
    UFUNCTION(BlueprintCallable)
    void ResetDoorLockKnowledge();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWedges();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDoorBlocker();
    
    UFUNCTION(BlueprintCallable)
    float RamDoor(AReadyOrNotCharacter* DoorRamCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PushDoor_SpecificAngle(AReadyOrNotCharacter* DoorPusherCharacter, float CustomTargetAngle, bool bAnimateDoorHandle);
    
    UFUNCTION(BlueprintCallable)
    float PushDoor(AReadyOrNotCharacter* DoorPusherCharacter, float InIncrementAngle, bool bAnimateDoorHandle, bool bPlaySound);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayDoorSound(EDoorInteraction DoorInteraction, AReadyOrNotCharacter* DoorInteractionInstigator, const TArray<FMODParam>& Params);
    
    UFUNCTION(BlueprintCallable)
    void PlayDoorKickSound(AReadyOrNotCharacter* Kicker, float Result);
    
    UFUNCTION(BlueprintCallable)
    void PlayDoorDamageSound(EDoorDamageType DoorDamage, const TArray<FMODParam>& Params);
    
public:
    UFUNCTION(BlueprintCallable)
    float PeekDoor(AReadyOrNotCharacter* DoorPeekerCharacter, float InIncrementAngle, bool bAnimateDoorHandle);
    
    UFUNCTION(BlueprintCallable)
    void OpenSubDoor(AReadyOrNotCharacter* DoorOpenCharacter, bool bInstant, bool bAnimateDoorHandle);
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor_SpecificAngle(AReadyOrNotCharacter* DoorOpenCharacter, float CustomTargetAngle, bool bInstant, bool bAnimateDoorHandle);
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor_Debug();
    
    UFUNCTION(BlueprintCallable)
    float OpenDoor(AReadyOrNotCharacter* DoorOpenCharacter, bool bInstant, bool bAnimateDoorHandle, const bool bNoCloseThreshold);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TrapDataUpdated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorHandlesBroken();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorDataUpdated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DestroyedChunkIdxChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientResetDoor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NonMainSubDoor_CanShowOpenDoorPrompt() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetLocked(bool bShouldLocked);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayElectronicDoorSound(UFMODEvent* Event);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayDoorSound(EDoorInteraction DoorDamage, AReadyOrNotCharacter* DoorInteractionInstigator, const TArray<FMODParam>& Params);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayDoorDamageSound(EDoorDamageType DoorDamage, const TArray<FMODParam>& Params);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ExplodeDoor(AReadyOrNotCharacter* DoorBreacherCharacter, AActor* ExplosionCauser, bool bKeepHinges);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_CheckSupports();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MainSubDoor_CanShowOpenDoorPrompt() const;
    
    UFUNCTION(BlueprintCallable)
    void LockDoor(bool bLockSubDoor);
    
    UFUNCTION(BlueprintCallable)
    void KickSubDoor(AReadyOrNotCharacter* DoorKickCharacter);
    
    UFUNCTION(BlueprintCallable)
    void KickDoor(AReadyOrNotCharacter* DoorKickCharacter, bool bKickSubDoor, const bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrapLive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTooFarForKick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSubDoorOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStackUpDisabled(FVector CommandLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointRightOfDoorway(FVector Vector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInFrontOfDoor(FVector Vector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingSubDoorKick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutlineEnabled(EActorOutlineType OutlineType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutlineDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpening() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenBy_Angle(float Angle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenBy(float Percentage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenBeyondIncrementThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenBeyondCloseThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenBeyond_Angle(float Angle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenBeyond(float Percentage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenAtOrBeyond_Angle(float Angle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenAtOrBeyond(float Percentage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen_Forward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen_Backward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNonMainSubdoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNonDoorInteractionPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMirrorBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMiddleChunkBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainSubdoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockChanceOverriden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationSameSideAsTrap(FVector InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJammed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoredForFlee();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHalfwayOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyOpen_Forward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyOpen_Backward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsElectronicDoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorwayOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorInteractionPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorChunkDestroyed(UDestructibleDoorChunkComponent* InChunkComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDestructible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsC2Placed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachedToRoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyInteractionPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyAIOpening() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyAIClosing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorSameSideAsTrap(AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorRightOfDoorway(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInFrontOfDoorway(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInFrontOfDoor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorBehindDoor_Relative(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrapAndSWATKnowsTrap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrapAndSuspectKnowsTrap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEverBeenOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWedgeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTypeOfDoorTrap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTypeOfDoorRow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSWATKnowsLockState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSuspectKnowsLockState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADoor* GetSubDoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartingOpenAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStackUpActor*> GetStackupsForArea(EStackupGenArea StackupArea) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPseudoVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlacedC2Explosive* GetPlacedC2() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpenThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpenAmountAsPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpenAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxOpenAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AReadyOrNotCharacter* GetLastDoorUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIncrementAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EDoorDamageType, float> GetDoorStunDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDoorMidLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EDoorDamageType, float> GetDoorKillDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBestDoorInteraction_FromStackUpArea(const EStackupGenArea& InStackUpArea, bool bDoorwayBased) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBestDoorInteraction_FromLocation(const FVector& InInteractionLocation, bool bDoorwayBased) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADoorJam* GetAttachedWedge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATrapActorAttachedToDoor* GetAttachedTrap() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateClearPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FlipStackUpArea(EStackupGenArea& OutStackUpArea, bool bHorizontalFlip, bool bVerticalFlip);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Finished_DoorRam();
    
    UFUNCTION(BlueprintCallable)
    void Finished_DoorKick_Success();
    
    UFUNCTION(BlueprintCallable)
    void Finished_DoorExplode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EStackupGenArea FindStackUpAreaFromLocation(const FVector& InInteractionLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void ExplodeDoor(AReadyOrNotCharacter* DoorBreacherCharacter, AActor* ExplosionCauser, bool bKeepHinges);
    
    UFUNCTION(BlueprintCallable)
    void EnableOutline(EActorOutlineType OutlineType);
    
    UFUNCTION(BlueprintCallable)
    void EnableNavLink();
    
    UFUNCTION(BlueprintCallable)
    void EnableAllInteractables();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSWATKnowTrapState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSuspectKnowTrapState() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableStackupsOnErroringSide();
    
    UFUNCTION(BlueprintCallable)
    void DisableOutline();
    
    UFUNCTION(BlueprintCallable)
    void DisableNavLink();
    
    UFUNCTION(BlueprintCallable)
    void DisableAllInteractables();
    
    UFUNCTION(BlueprintCallable)
    void DestroyNavLink();
    
    UFUNCTION(BlueprintCallable)
    void DestroyChunk_Index(int32 ChunkIndex, const FVector& Impulse, float ImpulseStrength);
    
    UFUNCTION(BlueprintCallable)
    void DestroyChunk(UDestructibleDoorChunkComponent* InChunk, const FVector& Impulse, float ImpulseStrength);
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllChunks(const FVector& Impulse, float ImpulseStrength, bool bKeepHinges);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseNumKicksToBreakDown(AReadyOrNotCharacter* DoorKickCharacter, bool& bShouldOpenDoor, bool& bCanBreakLock, float KickChanceOffset);
    
    UFUNCTION(BlueprintCallable)
    void CollapseDoor(AReadyOrNotCharacter* DoorBreacherCharacter, FVector BreachLocation);
    
    UFUNCTION(BlueprintCallable)
    void CloseSubDoor(AReadyOrNotCharacter* DoorCloseCharacter, bool bInstant, bool bAnimateDoorHandle);
    
    UFUNCTION(BlueprintCallable)
    void CloseDoor_Debug();
    
    UFUNCTION(BlueprintCallable)
    void CloseDoor(AReadyOrNotCharacter* DoorCloserCharacter, bool bInstant, bool bAnimateDoorHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnTrap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRamDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPushDoorWhileBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPushDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPullDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlaceC2Explosive(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPeekDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMirrorUnderDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLockpickDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanKickDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanIssueOrdersHere(const FHitResult& TraceResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipWedge(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipOptiwand(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipMultitool(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipC2Explosive(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipBreachingShotgun(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipBatteringRam(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDeployWedge(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCloseDoor(AReadyOrNotCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    void BreakDoorHandles();
    
    UFUNCTION(BlueprintCallable)
    void BreakDoor(bool bDestroyAllChunks, AReadyOrNotCharacter* DoorBreakerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void BreachDoorFromPoint(AReadyOrNotCharacter* DoorBreacherCharacter, FVector BreachPoint, float InIncrementAngle);
    
    UFUNCTION(BlueprintCallable)
    void BreachDoor(AReadyOrNotCharacter* DoorBreacherCharacter, float InIncrementAngle);
    
    UFUNCTION(BlueprintCallable)
    void AttachWedge(ADoorJam* NewWedge);
    
    UFUNCTION(BlueprintCallable)
    void AttachTrap(ATrapActorAttachedToDoor* NewTrap, bool bAttachToDoor);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRandomDamageToChunks(float MinDamage, float MaxDamage);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDoorDamage(EDoorDamageType InDoorDamage, AReadyOrNotCharacter* Victim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyTopDoorChunksBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyMiddleDoorChunksBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyHingesLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyChunksDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyBottomDoorChunksBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllTopDoorChunksBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllMiddleDoorChunksBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllMajorDoorChunksDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllBottomDoorChunksBroken() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

