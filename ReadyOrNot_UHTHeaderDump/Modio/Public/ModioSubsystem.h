#pragma once
#include "CoreMinimal.h"
#include "ModioReportParams.h"
#include "ModioOptionalModProgressInfo.h"
#include "ModioModCreationHandle.h"
#include "ModioModCollectionEntry.h"
#include "ModioInitializeOptions.h"
#include "ModioFilterParams.h"
#include "ModioEditModParams.h"
#include "ModioCreateModParams.h"
#include "ModioCreateModFileParams.h"
#include "ModioEmailAddress.h"
#include "ModioEmailAuthCode.h"
#include "ModioAuthenticationParams.h"
#include "ModioValidationError.h"
#include "ModioOptionalUser.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "ModioErrorCode.h"
#include "ModioModID.h"
#include "EModioRating.h"
#include "EModioLanguage.h"
#include "EModioAuthenticationProvider.h"
#include "EModioLogLevel.h"
#include "EModioGallerySize.h"
#include "EModioAvatarSize.h"
#include "EModioLogoSize.h"
#include "OnGetModTagOptionsDelegateDelegate.h"
#include "OnGetMediaDelegateDelegate.h"
#include "OnGetModInfoDelegateDelegate.h"
#include "OnListAllModsDelegateDelegate.h"
#include "OnModManagementDelegateDelegate.h"
#include "OnErrorOnlyDelegateDelegate.h"
#include "OnSubmitNewModDelegateDelegate.h"
#include "OnGetModDependenciesDelegateDelegate.h"
#include "OnGetTermsOfUseDelegateDelegate.h"
#include "ModioSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UModioSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UModioSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetLogLevel(EModioLogLevel UnrealLogLevel);
    
    UFUNCTION(BlueprintCallable)
    void RunPendingHandlers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QueryUserSubscriptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QuerySystemInstallations();
    
    UFUNCTION(BlueprintCallable)
    FModioErrorCode PrioritizeTransferForMod(FModioModID ModToPrioritize);
    
    UFUNCTION(BlueprintCallable)
    void K2_VerifyUserAuthenticationAsync(FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FOnErrorOnlyDelegate OnUnsubscribeComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FOnErrorOnlyDelegate OnSubscribeComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitNewModFileForMod(FModioModID Mod, FModioCreateModFileParams Params);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitNewModAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, FOnSubmitNewModDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitModChangesAsync(FModioModID Mod, FModioEditModParams Params, FOnGetModInfoDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ShutdownAsync(FOnErrorOnlyDelegate OnShutdownComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ReportContentAsync(FModioReportParams Report, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModioOptionalUser K2_QueryUserProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
    
    UFUNCTION(BlueprintCallable)
    void K2_ListAllModsAsync(const FModioFilterParams& Filter, FOnListAllModsDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, FOnErrorOnlyDelegate OnInitComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FOnGetMediaDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, FOnGetTermsOfUseDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModTagOptionsAsync(FOnGetModTagOptionsDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FOnGetMediaDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, FOnGetMediaDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FOnGetMediaDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModInfoAsync(FModioModID ModId, FOnGetModInfoDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModDependenciesAsync(FModioModID ModId, FOnGetModDependenciesDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    FModioModCreationHandle K2_GetModCreationHandle();
    
    UFUNCTION(BlueprintCallable)
    void K2_ForceUninstallModAsync(FModioModID ModToRemove, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_FetchExternalUpdatesAsync(FOnErrorOnlyDelegate OnFetchDone);
    
    UFUNCTION(BlueprintCallable)
    FModioErrorCode K2_EnableModManagement(FOnModManagementDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearUserDataAsync(FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ArchiveModAsync(FModioModID Mod, FOnErrorOnlyDelegate Callback);
    
    UFUNCTION(BlueprintCallable)
    bool IsModManagementBusy();
    
    UFUNCTION(BlueprintCallable)
    TArray<FModioValidationError> GetLastValidationError();
    
    UFUNCTION(BlueprintCallable)
    void DisableModManagement();
    
};

