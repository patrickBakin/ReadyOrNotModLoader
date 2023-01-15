#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForIncapacitation.generated.h"

class AActor;
class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForIncapacitation : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForIncapacitation : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterIncapacitated(AReadyOrNotCharacter* Victim, AReadyOrNotCharacter* Killer, AActor* Inflictor);
    
};

