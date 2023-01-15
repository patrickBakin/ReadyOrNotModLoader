#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "PlanningMarker.h"
#include "PlanningLine.h"
#include "MissionPlanWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UMissionPlanWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveLineColor;
    
    UMissionPlanWidget();
    UFUNCTION(BlueprintCallable)
    void RemoveMarker(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLine(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerRemoved(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkerAdded(int32 ID, const FPlanningMarker& Marker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLineRemoved(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLineAdded(int32 ID, const FPlanningLine& Line);
    
    UFUNCTION(BlueprintCallable)
    void AddMarker(const FPlanningMarker& Marker);
    
    UFUNCTION(BlueprintCallable)
    void AddLine(const FPlanningLine& Line);
    
};

