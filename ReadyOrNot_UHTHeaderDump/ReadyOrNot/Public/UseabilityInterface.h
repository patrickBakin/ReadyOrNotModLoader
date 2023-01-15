#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
#include "UseabilityInterface.generated.h"

class AReadyOrNotCharacter;
class UInteractableComponent;

UINTERFACE(Blueprintable)
class READYORNOT_API UUseabilityInterface : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IUseabilityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocusLost(AReadyOrNotCharacter* InteractInstigator, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocusGain(AReadyOrNotCharacter* InteractInstigator, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MeleeInteract(AReadyOrNotCharacter* InteractInstigator, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Interact(AReadyOrNotCharacter* InteractInstigator, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInteractableComponent* GetInteractableComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Fire(AReadyOrNotCharacter* InteractInstigator, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndInteract(AReadyOrNotCharacter* InteractInstigator, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndFire(AReadyOrNotCharacter* InteractInstigator, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoubleTapInteract(AReadyOrNotCharacter* InteractInstigator, UInteractableComponent* InInteractableComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float DetermineInteractionDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TEnumAsByte<EInputEvent> DetermineInputEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float DetermineCurrentProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName DetermineAnimatedIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText DetermineActionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteractThroughHitActors(const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteract() const;
    
};

