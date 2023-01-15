#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DoorwayWithoutDoor.generated.h"

class UDoorwayComponent;
class UDoorPointComponent;

UCLASS(Blueprintable)
class READYORNOT_API ADoorwayWithoutDoor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDoorwayComponent* Doorway;
    
public:
    ADoorwayWithoutDoor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInFrontOfDoorway(FVector Vector) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UDoorPointComponent*> GetFrontStackupPoints();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFrontPIEMidLocation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFrontPIEEndLocation();
    
    UFUNCTION(BlueprintCallable)
    UDoorPointComponent* GetFrontMidpoint();
    
    UFUNCTION(BlueprintCallable)
    UDoorPointComponent* GetFrontGrenadeThrowPoint();
    
    UFUNCTION(BlueprintCallable)
    UDoorPointComponent* GetFrontGrenadeLaunchPoint();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFrontDoorInteractionPoint();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDoorPointComponent*> GetFrontClearPoints();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDoorPointComponent*> GetBackStackupPoints();
    
    UFUNCTION(BlueprintCallable)
    FVector GetBackPIEMidLocation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetBackPIEEndLocation();
    
    UFUNCTION(BlueprintCallable)
    UDoorPointComponent* GetBackMidpoint();
    
    UFUNCTION(BlueprintCallable)
    UDoorPointComponent* GetBackGrenadeThrowPoint();
    
    UFUNCTION(BlueprintCallable)
    UDoorPointComponent* GetBackGrenadeLaunchPoint();
    
    UFUNCTION(BlueprintCallable)
    FVector GetBackDoorInteractionPoint();
    
    UFUNCTION(BlueprintCallable)
    TArray<UDoorPointComponent*> GetBackClearPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanIssueMoveAndClear(FHitResult TraceHit);
    
};

