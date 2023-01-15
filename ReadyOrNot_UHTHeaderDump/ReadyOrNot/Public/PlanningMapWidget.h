#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "FloorMapPointData.h"
#include "EFreeDrawColor.h"
#include "PlanningMapWidget.generated.h"

class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UPlanningMapWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloorMapPointData> DrawPointData;
    
    UPlanningMapWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPersonnelRemoved(int32 PersonnelNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPersonnelAdded(int32 PersonnelNum, int32 PersonnelZone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnForceMapRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorldContext();
    
    UFUNCTION(BlueprintCallable)
    void ClearPointData(bool bClearAll, int32 FloorNum, bool bClearAllFloors);
    
    UFUNCTION(BlueprintCallable)
    void AddPointData(FVector2D PointData, int32 FloorNum, EFreeDrawColor Color, bool bNewPoint, float Thickness);
    
};

