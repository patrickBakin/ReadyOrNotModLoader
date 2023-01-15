#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ListenForDeath.generated.h"

class AActor;
class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForDeath : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForDeath : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterDied(AReadyOrNotCharacter* Victim, AReadyOrNotCharacter* Killer, AActor* Inflictor);
    
};

