#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=AdvancedSessions -ObjectName=BPUniqueNetId -FallbackName=BPUniqueNetId
//CROSS-MODULE INCLUDE V2: -ModuleName=AdvancedSessions -ObjectName=EBlueprintAsyncResultSwitch -FallbackName=EBlueprintAsyncResultSwitch
//CROSS-MODULE INCLUDE V2: -ModuleName=AdvancedSessions -ObjectName=EBlueprintResultSwitch -FallbackName=EBlueprintResultSwitch
#include "EBPTextFilteringContext.h"
#include "ESteamUserOverlayType.h"
#include "SteamAvatarSize.h"
#include "BPSteamGroupInfo.h"
#include "AdvancedSteamFriendsLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedSteamFriendsLibrary();
    UFUNCTION(BlueprintCallable)
    static bool RequestSteamFriendInfo(const FBPUniqueNetId UniqueNetId, bool bRequireNameOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenSteamUserOverlay(const FBPUniqueNetId UniqueNetId, ESteamUserOverlayType DialogType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSteamInBigPictureMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverlayEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool InitTextFiltering();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSteamPersonaName(const FBPUniqueNetId UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    static void GetSteamGroups(TArray<FBPSteamGroupInfo>& SteamGroups);
    
    UFUNCTION(BlueprintCallable)
    static void GetSteamFriendGamePlayed(const FBPUniqueNetId UniqueNetId, EBlueprintResultSwitch& Result, int32& AppId);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetSteamFriendAvatar(const FBPUniqueNetId UniqueNetId, EBlueprintAsyncResultSwitch& Result, SteamAvatarSize AvatarSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBPUniqueNetId GetLocalSteamIDFromSteam();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendSteamLevel(const FBPUniqueNetId UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    static bool FilterText(const FString& TextToFilter, EBPTextFilteringContext Context, const FBPUniqueNetId TextSourceID, FString& FilteredText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBPUniqueNetId CreateSteamIDFromString(const FString& SteamID64);
    
};

