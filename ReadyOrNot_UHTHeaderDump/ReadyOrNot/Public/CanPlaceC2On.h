#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CanPlaceC2On.generated.h"

class AC2Explosive;
class APlayerCharacter;
class APlacedC2Explosive;

UINTERFACE(Blueprintable)
class READYORNOT_API UCanPlaceC2On : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API ICanPlaceC2On : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnC2Removed(APlacedC2Explosive* C2);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnC2Detonated(APlacedC2Explosive* C2);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetPlacementRotation(FHitResult TraceHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPlacementLocation(FHitResult TraceHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlaceC2OnNow(APlayerCharacter* C2Owner, AC2Explosive* C2, FHitResult Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void C2StopPlacement(AC2Explosive* C2);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void C2StartPlacement(AC2Explosive* C2);
    
};

