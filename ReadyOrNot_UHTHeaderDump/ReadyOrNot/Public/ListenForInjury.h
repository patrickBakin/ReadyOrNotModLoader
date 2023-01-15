#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "ListenForInjury.generated.h"

class AActor;
class AController;
class AReadyOrNotCharacter;

UINTERFACE(Blueprintable)
class READYORNOT_API UListenForInjury : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IListenForInjury : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterInjured(AReadyOrNotCharacter* Victim, float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
};

