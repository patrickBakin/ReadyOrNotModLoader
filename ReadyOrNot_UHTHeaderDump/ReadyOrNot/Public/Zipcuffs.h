#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "Zipcuffs.generated.h"

class AActor;
class UFMODEvent;
class AReadyOrNotCharacter;
class UInteractionsData;
class APlayerCharacter;
class APlacedZipcuffs;
class UAnimMontage;

UCLASS(Blueprintable)
class READYORNOT_API AZipcuffs : public ABaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PendingArrestCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* TargetedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bArresting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrestMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> ArrestCollisionChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UseZipcuffs_1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UseZipcuffs_3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* ForcedInteractionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInteractionsData*> StandingArrestInteractionSuspects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInteractionsData*> StandingArrestInteractionCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInteractionsData*> PvPArrestInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* ArrestRagdoll_Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* ArrestRagdoll_Down;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* ArrestRagdoll_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* ArrestRagdoll_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlacedZipcuffs> SpawnedZipcuffsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZipcuffBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnCuffsTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator SpawnCuffsRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnCuffsRelativeTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* FMODZipcuffsArrest;
    
    AZipcuffs();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ArrestStart(AReadyOrNotCharacter* TargetedChar);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ArrestComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ArrestCancelled();
    
    UFUNCTION(BlueprintCallable)
    void OnRagdollArrestInteractionStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRagdollArrestComplete_Slave(AActor* Slave);
    
    UFUNCTION(BlueprintCallable)
    void OnRagdollArrestComplete_Driver(AActor* Driver);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnRagdollArrestStart(AReadyOrNotCharacter* ArrestTarget);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ArrestComplete();
    
};

