#pragma once
#include "CoreMinimal.h"
#include "ReadyOrNotAnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EBaseAnimType_FP.h"
#include "EBaseBlendspaces_FP.h"
#include "RoNAnimInstance_PlayerFP.generated.h"

class USkeletalMeshComponent;
class UReadyOrNotWeaponAnimData;
class UAnimSequenceBase;
class UBlendSpaceBase;

UCLASS(Blueprintable, NonTransient)
class URoNAnimInstance_PlayerFP : public UReadyOrNotAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotWeaponAnimData* LastWeaponAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadyOrNotWeaponAnimData* EditorWeaponAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanAngleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanAngleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MeshControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshPostureLeanOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshWeaponOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MeshWeaponRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MeshWeaponFreeAimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshWeaponLeanOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MeshWeaponLeanRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPMeshReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LazySpringStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ADS_Movement_Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionSlotAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSlotAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollMoveInput;
    
    URoNAnimInstance_PlayerFP();
    UFUNCTION(BlueprintCallable)
    void OnReloadComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnHolsterComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnC2Detonation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlendSpaceBase* GetPlayerBlendspace_FP(TEnumAsByte<EBaseBlendspaces_FP::Type> BlendspaceName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequenceBase* GetPlayerAnimation_FP(TEnumAsByte<EBaseAnimType_FP::Type> AnimName) const;
    
};

