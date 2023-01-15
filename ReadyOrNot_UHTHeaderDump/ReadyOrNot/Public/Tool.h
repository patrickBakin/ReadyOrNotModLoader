#pragma once
#include "CoreMinimal.h"
#include "BaseItem.h"
#include "Tool.generated.h"

class AActor;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API ATool : public ABaseItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxOperatingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentOperatingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bOperating: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    ATool();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopUsingTool(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void StartUsingTool(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ToolComplete();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopUsingTool(AActor* Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartUsingTool(AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOperating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxOperatingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentOperatingTime() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopToolAnimation();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_FinishedToolUse(AActor* Target, APlayerCharacter* PC);
    
};

