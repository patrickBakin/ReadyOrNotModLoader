#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIActionData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERonNavigationQueryResult.h"
#include "AIAction.generated.h"

class AAIController;
class ACyberneticController;
class ACyberneticCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class READYORNOT_API UAIAction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACyberneticController* OwningController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastMoveRequestPathID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastMoveRequestMoveID;
    
public:
    UAIAction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsAbort() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_Blueprint(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPerformAction() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestMove(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSucceededToConsider_Blueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPathFound_Blueprint(int32 PathId, ERonNavigationQueryResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnPathFound(int32 PathId, ERonNavigationQueryResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveComplete_Blueprint(AAIController* Controller, int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveComplete(AAIController* Controller, int32 RequestID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedToConsider_Blueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreate_Blueprint(ACyberneticController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitAction_Blueprint(ACyberneticController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACyberneticCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActionRunCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAIActionData GetActionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndAction_Blueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginAction_Blueprint();
    
public:
    UFUNCTION(BlueprintCallable)
    void AbortAction();
    
};

