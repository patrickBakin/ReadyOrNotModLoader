#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DynamicWorldActor.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API ADynamicWorldActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DynamicLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicateSpawn, meta=(AllowPrivateAccess=true))
    bool bReplicateSpawn;
    
    ADynamicWorldActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicSpawn(bool bShouldSpawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicateSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDynamicallySpawned();
    
    UFUNCTION(BlueprintCallable)
    void CheckDynamicSpawn();
    
};

