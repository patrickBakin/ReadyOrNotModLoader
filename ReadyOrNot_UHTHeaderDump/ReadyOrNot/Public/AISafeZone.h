#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerBox -FallbackName=TriggerBox
#include "AISafeZone.generated.h"

class AActor;

UCLASS(Blueprintable)
class READYORNOT_API AAISafeZone : public ATriggerBox {
    GENERATED_BODY()
public:
    AAISafeZone();
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

