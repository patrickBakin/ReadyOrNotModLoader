#pragma once
#include "CoreMinimal.h"
#include "BuildingFloor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerBox -FallbackName=TriggerBox
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BuildingTrigger.generated.h"

class AActor;

UCLASS(Blueprintable)
class READYORNOT_API ABuildingTrigger : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfFloors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAuto: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUniformFloorSpacing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpacingBetweenFloors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SpacingPerFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BuildingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> FloorNumberToFloorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingFloor> GeneratedFloors;
    
public:
    ABuildingTrigger();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBuildingExit(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBuildingEnter(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorOnFloor(AActor* Actor, int32 FloorNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFloorNumberFromActorLocation(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFloorLocation(int32 FloorNumber) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateFloors();
    
};

