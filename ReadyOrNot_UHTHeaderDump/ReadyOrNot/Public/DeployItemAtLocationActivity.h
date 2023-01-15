#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseActivity.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DeployItemAtLocationActivity.generated.h"

class ABaseItem;

UCLASS(Blueprintable, EditInlineNew, NonTransient)
class READYORNOT_API UDeployItemAtLocationActivity : public UBaseActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseItem> DeployItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DeployLocation;
    
    UDeployItemAtLocationActivity();
protected:
    UFUNCTION(BlueprintCallable)
    void TickMoveToStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void TickDeployStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable)
    void ExitMoveToStage();
    
    UFUNCTION(BlueprintCallable)
    void ExitDeployStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterMoveToStage();
    
    UFUNCTION(BlueprintCallable)
    void EnterDeployStage();
    
    UFUNCTION(BlueprintCallable)
    bool CanDeploy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_TickDeployStage(float DeltaTime, float Uptime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ExitDeployStage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EnterDeployStage();
    
};

