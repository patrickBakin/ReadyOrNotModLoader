#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ETeamType.h"
#include "ControllableByTablet.generated.h"

class USceneComponent;
class AReadyOrNotGameState;
class APlayerCharacter;
class USceneCaptureComponent2D;

UINTERFACE(Blueprintable)
class READYORNOT_API UControllableByTablet : public UInterface {
    GENERATED_BODY()
};

class READYORNOT_API IControllableByTablet : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideActorsForTabletView(USceneCaptureComponent2D* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETeamType GetTabletViewTeamColor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetTabletViewSocket();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetTabletViewComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetTabletNameText();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanTabletViewMe(APlayerCharacter* TabletOwner, AReadyOrNotGameState* GameState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanControlWithTablet(APlayerCharacter* TabletOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssumeTabletControl(APlayerCharacter* TabletOwner);
    
};

