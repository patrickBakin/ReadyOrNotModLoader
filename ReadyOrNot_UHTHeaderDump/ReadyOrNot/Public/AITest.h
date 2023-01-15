#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AITest.generated.h"

class UBillboardComponent;
class APlayerCharacter;

UCLASS(Blueprintable)
class READYORNOT_API AAITest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* TestCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GiveToNearestXAI;
    
    AAITest();
    UFUNCTION(BlueprintCallable)
    void Investigate();
    
    UFUNCTION(BlueprintCallable)
    void DestroyTestCharacter();
    
};

