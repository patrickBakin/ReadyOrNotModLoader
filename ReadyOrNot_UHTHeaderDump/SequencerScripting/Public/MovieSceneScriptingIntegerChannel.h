#pragma once
#include "CoreMinimal.h"
#include "MovieSceneScriptingChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "ESequenceTimeUnit.h"
#include "MovieSceneScriptingIntegerChannel.generated.h"

class UMovieSceneScriptingKey;
class UMovieSceneScriptingIntegerKey;

UCLASS(Blueprintable)
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel {
    GENERATED_BODY()
public:
    UMovieSceneScriptingIntegerChannel();
    UFUNCTION(BlueprintCallable)
    void SetDefault(int32 InDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveKey(UMovieSceneScriptingKey* Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDefault() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieSceneScriptingKey*> GetKeys() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefault() const;
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneScriptingIntegerKey* AddKey(const FFrameNumber& InTime, int32 NewValue, float SubFrame, ESequenceTimeUnit TimeUnit);
    
};

