#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PostProcessEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "PlayerViewActor.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class UFMODEvent;
class AReadyOrNotCharacter;
class APlayerCharacter;
class UMaterialInstance;
class UTextureRenderTarget2D;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class READYORNOT_API APlayerViewActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCaptureScene: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CameraCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessEffect SwitchViewEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SwitchViewEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathViewTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* DeathViewEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* CloseViewEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CameraRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* OwningPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotCharacter* ViewCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MI_PostProcess_Greyscale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MI_PostProcess_Bump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MI_PostProcess_Glitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeathEffectsApplied: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSwitchViewEffectsApplied: 1;
    
public:
    APlayerViewActor();
    UFUNCTION(BlueprintCallable)
    void UpdateViewTarget(const FVector& NewLocation, const FRotator& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void TryNextView(bool bRequestClose, const bool bIncludeDeadViews);
    
    UFUNCTION(BlueprintCallable)
    void SetViewPlayer(AReadyOrNotCharacter* NewViewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningPlayer(APlayerCharacter* NewOwnerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwitchingView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideComponent(UPrimitiveComponent* ComponentToHide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideActor(AActor* ActorToHide, const bool bIncludeChildActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearHiddenComponents() const;
    
};

