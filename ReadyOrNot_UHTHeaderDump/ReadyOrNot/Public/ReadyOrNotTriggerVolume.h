#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerBox -FallbackName=TriggerBox
#include "ReadyOrNotTriggerVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotTriggerVolume : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> OverlappingClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TestActors;
    
public:
    AReadyOrNotTriggerVolume();
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorSpawned(AActor* Actor);
    
};

