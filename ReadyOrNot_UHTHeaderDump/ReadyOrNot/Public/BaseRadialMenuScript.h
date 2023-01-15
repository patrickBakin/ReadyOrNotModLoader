#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseRadialMenuScript.generated.h"

class AActor;
class URadialWidgetBase;
class UWorld;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API UBaseRadialMenuScript : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> RadialMenuIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadialWidgetBase* RadialMenuOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    UBaseRadialMenuScript();
    UFUNCTION(BlueprintCallable)
    void Initialize(URadialWidgetBase* InRadialMenuOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteScript();
    
};

