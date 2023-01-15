#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EBioType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
#include "MissionAudio.h"
#include "CriminalRecord.h"
#include "CharacterBio.h"
#include "BriefingWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class READYORNOT_API UBriefingWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UBriefingWidget();
private:
    UFUNCTION(BlueprintCallable)
    void PlayMissionAudio(const FString& AudioName);
    
    UFUNCTION(BlueprintCallable)
    void MoveCameraToMouseCursor(FPointerEvent PointerEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWhiteboardTimelineAsString(FString& OutString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWhiteboardObjectiveText(FString& OutString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLevelNickname(FString& OutNickname);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBriefing(FMissionAudio& OutBriefing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBios(EBioType BioType, TArray<FCharacterBio>& OutBios);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBioDetails(FCharacterBio Bio, TArray<FCriminalRecord>& RapSheet, UTexture2D*& ProfileImage, FString& OutDescription, FString& OutBioText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DoesLevelHaveMissionAudio(const FString& AudioName, bool& bHasMissionAudio);
    
};

