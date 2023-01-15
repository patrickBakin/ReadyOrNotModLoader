#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FMODStudio -ObjectName=FMODAudioComponent -FallbackName=FMODAudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MODParam.h"
#include "FMODAudioPropagationComponent.generated.h"

class USceneComponent;
class UFMODEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UFMODAudioPropagationComponent : public UFMODAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AudioPlayLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float volumeToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float silentDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float tickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayPropagation;
    
public:
    UFMODAudioPropagationComponent();
    UFUNCTION(BlueprintCallable)
    bool UpdateAudioPropagation();
    
    UFUNCTION(BlueprintCallable)
    void PlayEventAttached(UFMODEvent* EventToPlay, USceneComponent* CompToAttach, FName AttachPoint, TArray<FMODParam> Params);
    
    UFUNCTION(BlueprintCallable)
    void PlayEvent(UFMODEvent* EventToPlay, FVector Origin, TArray<FMODParam> Params);
    
    UFUNCTION(BlueprintCallable)
    void CheckOcclusion();
    
};

