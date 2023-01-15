#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SplineTrigger.generated.h"

class USplineComponent;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API ASplineTrigger : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSplineEnclosureExited, APlayerCharacter*, PlayerCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSplineEnclosureEntered, APlayerCharacter*, PlayerCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplineEnclosureEntered Delegate_OnSplineEnclosureEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplineEnclosureExited Delegate_OnSplineEnclosureExited;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawDebugElements: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AverageSplinePointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsOutsideSplineEnclosure: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ASplineTrigger();
    UFUNCTION(BlueprintCallable)
    void ToggleDrawDebug();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSplineEnclosureExited(APlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSplineEnclosureEntered(APlayerCharacter* PlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutsideSplineEnclosure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideSplineEnclosure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorOutsideSplineEnclosure(AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInsideSplineEnclosure(AActor* InActor) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableTrigger();
    
    UFUNCTION(BlueprintCallable)
    void DisableTrigger();
    
};

