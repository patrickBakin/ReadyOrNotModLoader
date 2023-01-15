#pragma once
#include "CoreMinimal.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DoorInteractionActivity.generated.h"

class ADoor;

UCLASS(Abstract, Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDoorInteractionActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* Door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CommandLocation;
    
    UDoorInteractionActivity();
protected:
    UFUNCTION(BlueprintCallable)
    bool ShouldGetInPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void PerformInteractStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void PerformGetInPositionStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnDoorBroken();
    
    UFUNCTION(BlueprintCallable)
    void ExitInteractStage();
    
    UFUNCTION(BlueprintCallable)
    void ExitGetInPositionStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterInteractStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterGetInPositionStage();
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract() const;
    
};

