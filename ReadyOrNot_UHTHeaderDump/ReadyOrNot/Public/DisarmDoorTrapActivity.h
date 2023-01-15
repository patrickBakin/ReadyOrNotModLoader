#pragma once
#include "CoreMinimal.h"
#include "DoorInteractionActivity.h"
#include "DisarmDoorTrapActivity.generated.h"

class AReadyOrNotCharacter;
class ATrapActor;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDisarmDoorTrapActivity : public UDoorInteractionActivity {
    GENERATED_BODY()
public:
    UDisarmDoorTrapActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTrapTriggered(ATrapActor* Trap, AReadyOrNotCharacter* TriggeredBy);
    
};

