#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UseabilityInterface.h"
#include "AmmoRefillBox.generated.h"

class AReadyOrNotCharacter;
class UInteractableComponent;

UCLASS(Blueprintable)
class READYORNOT_API AAmmoRefillBox : public AActor, public IUseabilityInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* RefillCharacter;
    
    AAmmoRefillBox();
    
    // Fix for true pure virtual functions not being implemented
};

