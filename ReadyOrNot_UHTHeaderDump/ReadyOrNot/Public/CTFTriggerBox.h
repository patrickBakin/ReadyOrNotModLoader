#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerBox -FallbackName=TriggerBox
#include "CTFTriggerBox.generated.h"

class AActor;
class UTextRenderComponent;

UCLASS(Blueprintable)
class READYORNOT_API ACTFTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
public:
    ACTFTriggerBox();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FulfillsRequirements();
    
};

