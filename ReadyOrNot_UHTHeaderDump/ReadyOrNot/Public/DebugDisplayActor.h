#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DebugDisplayActor.generated.h"

class USceneComponent;
class UDebugDisplayWidget;
class UWidgetComponent;

UCLASS(Blueprintable)
class READYORNOT_API ADebugDisplayActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBillboarding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    ADebugDisplayActor();
    UFUNCTION(BlueprintCallable)
    void SetWidgetClass(TSubclassOf<UDebugDisplayWidget> NewWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void SetTitle(const FString& TextTitle);
    
    UFUNCTION(BlueprintCallable)
    void SetText(int32 TextLine, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    int32 AddText(const FString& Text);
    
};

