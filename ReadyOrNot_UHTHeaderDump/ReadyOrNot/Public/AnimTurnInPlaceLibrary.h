#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimTurnInPlaceAnimSet.h"
#include "AnimTurnInPlaceState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AnimTurnInPlaceLibrary.generated.h"

UCLASS(Blueprintable)
class UAnimTurnInPlaceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimTurnInPlaceLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateTurnInPlace(float DeltaTime, bool bAllowTurnInPlace, bool bHoldYawOffset, bool bIsTurnTransitionStateRelevant, bool bClampYawOffset, float YawOffsetLimit, const FRotator& MeshWorldRotation, const FAnimTurnInPlaceAnimSet& AnimSet, UPARAM(Ref) FAnimTurnInPlaceState& TurnInPlaceState, float TurnInPlaceSpeedMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static void PostProcessYawOffset(float DeltaSeconds, UPARAM(Ref) float& YawOffset, UPARAM(Ref) float& LastYawOffset, UPARAM(Ref) float& LastPostProcessedYawOffset, UPARAM(Ref) float& TurnAroundTimeToGo, float TurnAroundBlendTime);
    
};

