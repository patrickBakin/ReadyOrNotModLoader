#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerActionPromptSlot.h"
#include "AnimatedIcon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InteractableComponent.generated.h"

class AActor;
class UUserWidget;
class APlayerController;
class UAnimatedIconWidget_Imprint;
class UAnimatedIconWidget;
class APlayerCharacter;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UInteractableComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimatedIconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowIconWhenActionsLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionPromptSlot ActionSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionPromptSlot ActionSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionPromptSlot ActionSlot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionPromptSlot ActionSlot4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinShowPromptAtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowPromptAtDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredLookAtPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractCircleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMustBeLookingAt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDistanceFadeIcon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideUponInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideUponPlayerMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bImprintIconOnHUDUponInteraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> DisallowedPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreInteractionBlockingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimatedIcon AnimatedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* UseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientInteract;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> PlayersFocusing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CachedWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatedIconWidget* IconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ImprintIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimatedIconWidget_Imprint* IconWidget_Imprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAnimatedIcon> AnimatedIconMap;
    
public:
    UInteractableComponent();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateTickRate();
    
    UFUNCTION(BlueprintCallable)
    void UpdateLOSForDistanceFade();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInteractionIconState(bool bValid);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionIconSize(float InInteractCircleSize, float InInteractIconSize);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimatedIconName(const FName& NewIconName);
    
    UFUNCTION(BlueprintCallable)
    void ResetToOriginalLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteract(APlayerCharacter* InteractInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabledForController(APlayerController* InController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabledFor(APlayerCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingLookedAt(APlayerController* InPlayerController, float MaxRange, float LookatThreshold, bool bUseActorLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputActionNameMatchesAnyValidSlot(FName InInputActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InputActionNameMatchesAnySlot(FName InInputActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetUseActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerCharacter*> GetPlayersFocusing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOriginalLocation_Relative() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOriginalLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOriginalIconName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceFromPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInteractionFor(APlayerCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void EnableInteractable();
    
    UFUNCTION(BlueprintCallable)
    void DisableInteractionFor(APlayerCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void DisableInteractable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract(bool bLog) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyActionSlotValid() const;
    
};

