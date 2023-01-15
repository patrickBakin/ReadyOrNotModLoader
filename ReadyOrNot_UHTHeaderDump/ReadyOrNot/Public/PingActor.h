#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "PingActor.generated.h"

class UMapActorComponent;
class UObjectiveMarkerComponent;

UCLASS(Blueprintable)
class READYORNOT_API APingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* PingedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetIconBrush, meta=(AllowPrivateAccess=true))
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetPingText, meta=(AllowPrivateAccess=true))
    FText PingText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UObjectiveMarkerComponent* ObjectiveMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UMapActorComponent* MapActorComponent;
    
public:
    APingActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ToggleObjectiveMarkerVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowObjectiveMarker() const;
    
    UFUNCTION(BlueprintCallable)
    void Setup(AActor* InActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SetPingText();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetIconBrush();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideObjectiveMarker() const;
    
};

