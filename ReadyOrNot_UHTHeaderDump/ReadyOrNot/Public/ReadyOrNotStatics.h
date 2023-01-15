#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ReadyOrNotStatics.generated.h"

class AReadyOrNotGameState;
class AReadyOrNotGameMode;
class AConversationManager;
class AReadyOrNotLevelScript;
class UReadyOrNotGameInstance;
class AReadyOrNotSignificanceManager;
class AReadyOrNotPlayerController;

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReadyOrNotStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AReadyOrNotSignificanceManager* GetReadyOrNotSignificanceManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AReadyOrNotPlayerController* GetReadyOrNotPlayerController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AReadyOrNotLevelScript* GetReadyOrNotLevelScript();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AReadyOrNotGameState* GetReadyOrNotGameState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AReadyOrNotGameMode* GetReadyOrNotGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UReadyOrNotGameInstance* GetReadyOrNotGameInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AConversationManager* GetConversationManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesMapExist(const FString& Map);
    
};

