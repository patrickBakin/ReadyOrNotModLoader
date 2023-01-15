#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ETacticalAuthorityVoice.h"
#include "TacticalAuthorityCommandWidget.generated.h"

class AActor;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UTacticalAuthorityCommandWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETacticalAuthorityVoice SelectedVoiceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReportItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CommandActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CommandMoveToMesh;
    
public:
    UTacticalAuthorityCommandWidget();
    UFUNCTION(BlueprintCallable)
    void SetReportItem(AActor* NewReportItem);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandActor(AActor* NewCommandActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecondaryUseReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecondaryUsePressed();
    
    UFUNCTION(BlueprintCallable)
    void MapDeltaToTacticalAuthorityVoice(float DeltaX, float DeltaY);
    
};

