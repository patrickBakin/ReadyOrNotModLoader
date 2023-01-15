#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "GlassActor.generated.h"

class UDestructibleComponent;
class AController;
class UMaterialInterface;
class UMaterialInstance;

UCLASS(Blueprintable)
class READYORNOT_API AGlassActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnApplyDamageToWindow, float, DamageAmount, FVector, HitLocation, FVector, ImpulseDir, float, ImpulseStrength);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> RandomGlassMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstance*> RandomShatteredGlassMaterial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnApplyDamageToWindow OnApplyDamageToWindow;
    
    AGlassActor();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyDamageToWindow(float DamageAmount, FVector HitLocation, FVector ImpulseDir, float ImpulseStrength);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetRandomShatteredGlassMaterial();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInterface* GetRandomGlassMaterial();
    
};

