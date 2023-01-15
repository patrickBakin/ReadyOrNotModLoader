#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CuttableCableActor.generated.h"

class USceneComponent;
class UCableComponent;

UCLASS(Blueprintable)
class READYORNOT_API ACuttableCableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCableCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableSnapLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCablePullInsteadOfCutting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* SubCable1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* SubCable2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* WholeCable;
    
    ACuttableCableActor();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PullCable();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CutCableAt(FVector CutOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCablePulled_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCablePulled_Multicast();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCableCut_Server(FVector SplitOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCableCut_Multicast(FVector SplitOrigin);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnCablePulled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnCableCutAt(FVector SplitOrigin);
    
    UFUNCTION(BlueprintCallable)
    void GetCablePoints(TArray<FVector>& OutPoints);
    
};

