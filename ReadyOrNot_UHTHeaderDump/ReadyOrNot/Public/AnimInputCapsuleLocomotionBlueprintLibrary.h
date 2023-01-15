#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimInput_CapsuleLocomotion.h"
#include "AnimInputCapsuleLocomotionBlueprintLibrary.generated.h"

class APawn;

UCLASS(Blueprintable)
class UAnimInputCapsuleLocomotionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimInputCapsuleLocomotionBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateCapsuleLocomotionAnimInput(const APawn* Pawn, UPARAM(Ref) FAnimInput_CapsuleLocomotion& CapsuleLocomotionAnimInput);
    
};

