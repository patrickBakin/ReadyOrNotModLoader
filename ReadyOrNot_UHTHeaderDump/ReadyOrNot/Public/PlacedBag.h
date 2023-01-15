#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CanUse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PlacedBag.generated.h"

class USceneComponent;
class APlayerCharacter;
class USphereComponent;

UCLASS(Blueprintable)
class READYORNOT_API APlacedBag : public AActor, public ICanUse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* IconBolt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult PlacementHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideUseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideText;
    
    APlacedBag();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartUse(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlacedBagUsed(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<USceneComponent*> GetUseViewComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndUse(APlayerCharacter* User);
    
    
    // Fix for true pure virtual functions not being implemented
};

