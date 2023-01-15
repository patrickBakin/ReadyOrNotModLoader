#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "MovieSceneTrackExtensions.generated.h"

class UMovieSceneTrack;
class UMovieSceneSection;

UCLASS(Blueprintable)
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneTrackExtensions();
    UFUNCTION(BlueprintCallable)
    static void SetSortingOrder(UMovieSceneTrack* Track, int32 SortingOrder);
    
    UFUNCTION(BlueprintCallable)
    static void SetSectionToKey(UMovieSceneTrack* Track, UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayName(UMovieSceneTrack* Track, const FText& InName);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorTint(UMovieSceneTrack* Track, const FColor& ColorTint);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveSection(UMovieSceneTrack* Track, UMovieSceneSection* Section);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSortingOrder(UMovieSceneTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneSection* GetSectionToKey(UMovieSceneTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneSection*> GetSections(UMovieSceneTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static FText GetDisplayName(UMovieSceneTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static FColor GetColorTint(UMovieSceneTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneSection* AddSection(UMovieSceneTrack* Track);
    
};

