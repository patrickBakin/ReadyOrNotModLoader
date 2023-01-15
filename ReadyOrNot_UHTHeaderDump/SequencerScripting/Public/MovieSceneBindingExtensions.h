#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SequencerBindingProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneBindingExtensions.generated.h"

class UObject;
class UMovieSceneTrack;

UCLASS(Blueprintable)
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneBindingExtensions();
    UFUNCTION(BlueprintCallable)
    static void SetParent(const FSequencerBindingProxy& InBinding, const FSequencerBindingProxy& InParentBinding);
    
    UFUNCTION(BlueprintCallable)
    static void SetName(const FSequencerBindingProxy& InBinding, const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayName(const FSequencerBindingProxy& InBinding, const FText& InDisplayName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTrack(const FSequencerBindingProxy& InBinding, UMovieSceneTrack* TrackToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void Remove(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static void MoveBindingContents(const FSequencerBindingProxy& SourceBindingId, const FSequencerBindingProxy& DestinationBindingId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> GetTracks(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetPossessedObjectClass(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static FSequencerBindingProxy GetParent(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetObjectTemplate(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static FString GetName(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static FGuid GetId(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static FText GetDisplayName(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FSequencerBindingProxy> GetChildPossessables(const FSequencerBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> FindTracksByType(const FSequencerBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> FindTracksByExactType(const FSequencerBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneTrack* AddTrack(const FSequencerBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType);
    
};

