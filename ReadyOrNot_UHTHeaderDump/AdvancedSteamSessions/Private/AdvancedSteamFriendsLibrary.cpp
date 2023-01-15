#include "AdvancedSteamFriendsLibrary.h"

class UTexture2D;

bool UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(const FBPUniqueNetId UniqueNetId, bool bRequireNameOnly) {
    return false;
}

bool UAdvancedSteamFriendsLibrary::OpenSteamUserOverlay(const FBPUniqueNetId UniqueNetId, ESteamUserOverlayType DialogType) {
    return false;
}

bool UAdvancedSteamFriendsLibrary::IsSteamInBigPictureMode() {
    return false;
}

bool UAdvancedSteamFriendsLibrary::IsOverlayEnabled() {
    return false;
}

bool UAdvancedSteamFriendsLibrary::InitTextFiltering() {
    return false;
}

FString UAdvancedSteamFriendsLibrary::GetSteamPersonaName(const FBPUniqueNetId UniqueNetId) {
    return TEXT("");
}

void UAdvancedSteamFriendsLibrary::GetSteamGroups(TArray<FBPSteamGroupInfo>& SteamGroups) {
}

void UAdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(const FBPUniqueNetId UniqueNetId, EBlueprintResultSwitch& Result, int32& AppId) {
}

UTexture2D* UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(const FBPUniqueNetId UniqueNetId, EBlueprintAsyncResultSwitch& Result, SteamAvatarSize AvatarSize) {
    return NULL;
}

FBPUniqueNetId UAdvancedSteamFriendsLibrary::GetLocalSteamIDFromSteam() {
    return FBPUniqueNetId{};
}

int32 UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(const FBPUniqueNetId UniqueNetId) {
    return 0;
}

bool UAdvancedSteamFriendsLibrary::FilterText(const FString& TextToFilter, EBPTextFilteringContext Context, const FBPUniqueNetId TextSourceID, FString& FilteredText) {
    return false;
}

FBPUniqueNetId UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(const FString& SteamID64) {
    return FBPUniqueNetId{};
}

UAdvancedSteamFriendsLibrary::UAdvancedSteamFriendsLibrary() {
}

