#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UseabilityInterface.h"
#include "EActorOutlineType.h"
#include "PickupActor.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;
class UInteractableComponent;
class UObjectiveMarkerComponent;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API APickupActor : public AActor, public IUseabilityInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActorPickedUp_NoParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorPickedUp, AActor*, PickedActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorDropped, AActor*, DroppedActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorPickedUp OnActorPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorPickedUp_NoParam OnActorPickedUp_NoParam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorDropped OnActorDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* ObjectiveMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* PickupInstigator;
    
public:
    APickupActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleObjectiveMarker();
    
    UFUNCTION(BlueprintCallable)
    void ShowObjectiveMarker();
    
    UFUNCTION(BlueprintCallable)
    void HideObjectiveMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPickupInstigator() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableOutline(EActorOutlineType OutlineType);
    
    UFUNCTION(BlueprintCallable)
    void DisableOutline();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPickUpNow(APlayerCharacter* PickerUpper);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActorPickedUp(AActor* InPickupInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ActorDropped(AActor* InDroppedInstigator);
    
    
    // Fix for true pure virtual functions not being implemented
};

