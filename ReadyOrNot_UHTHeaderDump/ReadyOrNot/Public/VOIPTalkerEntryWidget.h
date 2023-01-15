#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "ETeamType.h"
#include "VOIPTalkerEntryWidget.generated.h"

class AReadyOrNotPlayerState;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UVOIPTalkerEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETeamType, FSlateColor> VoiceTypeColorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VoiceImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReadyOrNotPlayerState* PlayerState;
    
public:
    UVOIPTalkerEntryWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVoiceTypeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateColor GetVoiceTypeColor() const;
    
};

