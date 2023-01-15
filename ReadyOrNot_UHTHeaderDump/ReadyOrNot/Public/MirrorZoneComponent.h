#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "MirrorZoneComponent.generated.h"

class AActor;
class UMirrorPortalComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class READYORNOT_API UMirrorZoneComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBeCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonPromptText;
    
    UMirrorZoneComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMirrorPortalComponent* GetFurthestMirrorPortalFrom(AActor* Actor);
    
};

