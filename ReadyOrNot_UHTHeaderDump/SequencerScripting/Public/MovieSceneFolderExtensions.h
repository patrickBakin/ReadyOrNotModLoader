#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SequencerBindingProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "MovieSceneFolderExtensions.generated.h"

class UMovieSceneTrack;
class UMovieSceneFolder;

UCLASS(Blueprintable)
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneFolderExtensions();
    UFUNCTION(BlueprintCallable)
    static bool SetFolderName(UMovieSceneFolder* folder, FName InFolderName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFolderColor(UMovieSceneFolder* folder, FColor InFolderColor);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveChildObjectBinding(UMovieSceneFolder* folder, const FSequencerBindingProxy InObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveChildMasterTrack(UMovieSceneFolder* folder, UMovieSceneTrack* InMasterTrack);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFolderName(UMovieSceneFolder* folder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetFolderColor(UMovieSceneFolder* folder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSequencerBindingProxy> GetChildObjectBindings(UMovieSceneFolder* folder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UMovieSceneTrack*> GetChildMasterTracks(UMovieSceneFolder* folder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UMovieSceneFolder*> GetChildFolders(UMovieSceneFolder* folder);
    
    UFUNCTION(BlueprintCallable)
    static bool AddChildObjectBinding(UMovieSceneFolder* folder, FSequencerBindingProxy InObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    static bool AddChildMasterTrack(UMovieSceneFolder* folder, UMovieSceneTrack* InMasterTrack);
    
    UFUNCTION(BlueprintCallable)
    static bool AddChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToAdd);
    
};

