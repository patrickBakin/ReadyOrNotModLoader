#pragma once
#include "CoreMinimal.h"
#include "DoorInteractionActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DoorBreachActivity.generated.h"

class AReadyOrNotCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDoorBreachActivity : public UDoorInteractionActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginalLocation;
    
    UDoorBreachActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBreacherKilled(AReadyOrNotCharacter* InstigatorCharacter, AReadyOrNotCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void FinishDoorBreach(bool bForce);
    
};

