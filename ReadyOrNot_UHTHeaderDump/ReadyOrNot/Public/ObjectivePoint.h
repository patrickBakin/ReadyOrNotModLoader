#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ObjectivePoint.generated.h"

class UMapActorComponent;
class UObjectiveMarkerComponent;

UCLASS(Blueprintable)
class READYORNOT_API AObjectivePoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TiedToActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* ObjectiveMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UMapActorComponent* MapActorComponent;
    
public:
    AObjectivePoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleObjectiveMarkerVisibility();
    
    UFUNCTION(BlueprintCallable)
    void ShowObjectiveMarker();
    
    UFUNCTION(BlueprintCallable)
    void InitSettings(FSlateBrush Icon, FText Text, float ShowMarkerAtDistance);
    
    UFUNCTION(BlueprintCallable)
    void HideObjectiveMarker();
    
};

