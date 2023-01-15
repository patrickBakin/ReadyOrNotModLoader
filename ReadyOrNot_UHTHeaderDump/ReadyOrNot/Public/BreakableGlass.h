#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "BreakableGlass.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ABreakableGlass : public AActor {
    GENERATED_BODY()
public:
    ABreakableGlass();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_DestructibleHit(FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ConvertHitAndExecute(int32 FirstPositionBox, int32 TextureX, int32 TextureY, FVector_NetQuantize HitPosition, FVector_NetQuantize Direction, float Damage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FirstHitPositionObject(int32 FirstPositionBox, int32 TextureY, int32 TextureX, FVector HitPosition, FVector ObjectiveDirection, float DamageRadius, bool bFirstHitCanBreakIt, float CharacterVelocityToBreak);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestructibleHit(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void ConvertHitAndExecute(FHitResult Hit, float Damage);
    
};

