#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "ReadyOrNotAvoidanceManager.generated.h"

class ACyberneticCharacter;

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotAvoidanceManager : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACyberneticCharacter*> SpawnedAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveToTag_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveToTag_02;
    
public:
    AReadyOrNotAvoidanceManager();
private:
    UFUNCTION(BlueprintCallable)
    void Test_RedMoveTagTwo();
    
    UFUNCTION(BlueprintCallable)
    void Test_RedMoveTagOne();
    
    UFUNCTION(BlueprintCallable)
    void Test_BlueMoveTagTwo();
    
    UFUNCTION(BlueprintCallable)
    void Test_BlueMoveTagOne();
    
};

