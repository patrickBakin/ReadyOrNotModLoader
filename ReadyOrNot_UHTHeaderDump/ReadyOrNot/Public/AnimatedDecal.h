#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "AnimatedDecal.generated.h"

class UMaterialInterface;
class UDecalComponent;

UCLASS(Blueprintable)
class READYORNOT_API AAnimatedDecal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTimescale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AnimationCurve;
    
    AAnimatedDecal();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimatedDecalMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRuntimeFloatCurveValue(const FRuntimeFloatCurve& Curve, float Time);
    
};

