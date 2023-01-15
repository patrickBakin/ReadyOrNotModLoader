#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MovieSceneSectionExtensions.generated.h"

class UMovieSceneSection;
class UMovieSceneScriptingChannel;
class UMovieSceneSubSection;
class UMovieSceneSequence;

UCLASS(Blueprintable)
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneSectionExtensions();
    UFUNCTION(BlueprintCallable)
    static void SetStartFrameSeconds(UMovieSceneSection* Section, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartFrameBounded(UMovieSceneSection* Section, bool bIsBounded);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartFrame(UMovieSceneSection* Section, int32 StartFrame);
    
    UFUNCTION(BlueprintCallable)
    static void SetRangeSeconds(UMovieSceneSection* Section, float StartTime, float EndTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetRange(UMovieSceneSection* Section, int32 StartFrame, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable)
    static void SetEndFrameSeconds(UMovieSceneSection* Section, float EndTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetEndFrameBounded(UMovieSceneSection* Section, bool bIsBounded);
    
    UFUNCTION(BlueprintCallable)
    static void SetEndFrame(UMovieSceneSection* Section, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable)
    static bool HasStartFrame(UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static bool HasEndFrame(UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static float GetStartFrameSeconds(UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStartFrame(UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetParentSequenceFrame(UMovieSceneSubSection* Section, int32 InFrame, UMovieSceneSequence* ParentSequence);
    
    UFUNCTION(BlueprintCallable)
    static float GetEndFrameSeconds(UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEndFrame(UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneScriptingChannel*> GetChannels(UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneScriptingChannel*> FindChannelsByType(UMovieSceneSection* Section, TSubclassOf<UMovieSceneScriptingChannel> ChannelType);
    
};

