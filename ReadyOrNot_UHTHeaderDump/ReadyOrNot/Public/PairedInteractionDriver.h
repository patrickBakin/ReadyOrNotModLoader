#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "PairedInteractionDriver.generated.h"

class AActor;
class ABaseItem;
class UInteractionsData;

UCLASS(Blueprintable)
class READYORNOT_API APairedInteractionDriver : public AInfo {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPairedInteractionStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPairedInteractionFinished, AActor*, InDriver, AActor*, InSlave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorInteractionFinished, AActor*, InActor);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractionsData* InteractionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Driver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Slave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABaseItem* OptionalItem;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPairedInteractionStarted Event_OnPairedInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorInteractionFinished Event_OnDriverInteractionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorInteractionFinished Event_OnSlaveInteractionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPairedInteractionFinished Event_OnPairedInteractionFinished;
    
    APairedInteractionDriver();
    UFUNCTION(BlueprintCallable)
    void OnSlaveInteractionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnEquippedItemHolstered(ABaseItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDriverInteractionFinished();
    
};

