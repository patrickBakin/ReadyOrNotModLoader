#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "ReadyOrNotMetaProfile.generated.h"

class UReadyOrNotMetaProfile;

UCLASS(Blueprintable)
class READYORNOT_API UReadyOrNotMetaProfile : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(EditAnywhere)
    uint32 UserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SingleplayerProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentProfile;
    
    UReadyOrNotMetaProfile();
    UFUNCTION(BlueprintCallable)
    void SaveProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProfileNameAllowed(const FString& ProfileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSingleplayerProfileExist(const FString& ProfileName);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSingleplayerProfile(const FString& Profile);
    
    UFUNCTION(BlueprintCallable)
    static UReadyOrNotMetaProfile* CreateDefaultSavegame(const FString& LoadSlotName);
    
};

