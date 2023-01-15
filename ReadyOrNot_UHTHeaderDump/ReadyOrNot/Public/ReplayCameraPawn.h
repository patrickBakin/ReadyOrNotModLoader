#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplinePoint -FallbackName=SplinePoint
#include "ReplayCameraPawn.generated.h"

class AActor;
class AReplaySplineActor;
class UCameraComponent;

UCLASS(Blueprintable)
class READYORNOT_API AReplayCameraPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* PawnCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings DefaultPostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReplaySplineActor* ReplaySplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalSplineTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFollowingSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaSplineTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCameraRotation;
    
    AReplayCameraPawn();
    UFUNCTION(BlueprintCallable)
    void StopFollowingSpline();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSplinePoint(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSplinePoint> GetSplinePoints();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetBonesFromAttachableAction(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAttachableActors();
    
    UFUNCTION(BlueprintCallable)
    void ClearSplinePoints();
    
    UFUNCTION(BlueprintCallable)
    void BeginFollowingSpline();
    
    UFUNCTION(BlueprintCallable)
    void AddSplinePoint(FVector Location, FRotator Rotation);
    
};

