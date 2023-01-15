#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzProfileItemConfigGetOut.h"
#include "ZeuzProfileUsersListOut.h"
#include "ZeuzProfileItemAddIn.h"
#include "ZeuzProfileItemBarterIn.h"
#include "ZeuzProfileItemUserName.h"
#include "ZeuzProfileItemRemIn.h"
#include "ZeuzProfileItemRemByNameIn.h"
#include "ZeuzProfileItemTransferIn.h"
#include "ZeuzProfileUserCreateIn.h"
#include "ZeuzProfileUserLookupIn.h"
#include "ZeuzProfileUserPwHashIn.h"
#include "ZeuzProfileUsersListIn.h"
#include "ZeuzContext.h"
#include "ZeuzInvItem.h"
#include "ZeuzUserProfile.h"
#include "ZeuzUser.h"
#include "ZeuzApiProfile.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiProfile : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUserslookupBPS, const TArray<FString>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUserslookupBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileUserslookupBP, const TArray<FString>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUserslistBPS, const FZeuzProfileUsersListOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUserslistBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileUserslistBP, const FZeuzProfileUsersListOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsersgetBPS, const TArray<FZeuzUser>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsersgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileUsersgetBP, const TArray<FZeuzUser>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileUsersetpwhashBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsersetpwhashBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsersetpwhashBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileUsersetBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsersetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsersetBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUserlookupBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUserlookupBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileUserlookupBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsergetpwhashBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsergetpwhashBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileUsergetpwhashBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsergetBPS, FZeuzUser, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsergetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileUsergetBP, FZeuzUser, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileUserdeleteBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUserdeleteBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUserdeleteBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsercreateBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileUsercreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileUsercreateBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileProfilesgetBPS, const TArray<FZeuzUserProfile>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileProfilesgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileProfilesgetBP, const TArray<FZeuzUserProfile>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileProfilesetBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileProfilesetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileProfilesetBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileProfilegetBPS, FZeuzUserProfile, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileProfilegetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileProfilegetBP, FZeuzUserProfile, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileProfiledeleteBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileProfiledeleteBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileProfiledeleteBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileItemtransferBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemtransferBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemtransferBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileItemsetBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemsetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemsetBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemrembynameBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemrembynameBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileItemrembynameBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileItemremBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemremBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemremBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemlistBPS, const TArray<FZeuzInvItem>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemlistBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileItemlistBP, const TArray<FZeuzInvItem>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemgetbynameBPS, FZeuzInvItem, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemgetbynameBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileItemgetbynameBP, FZeuzInvItem, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemgetBPS, FZeuzInvItem, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileItemgetBP, FZeuzInvItem, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemcreateBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemcreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileItemcreateBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemconfiggetBPS, const FZeuzProfileItemConfigGetOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemconfiggetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileItemconfiggetBP, const FZeuzProfileItemConfigGetOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItembuyBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItembuyBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileItembuyBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateProfileItembarterBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItembarterBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItembarterBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemaddBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateProfileItemaddBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateProfileItemaddBP, const FString&, Result, const FString&, Error);
    
    UZeuzApiProfile();
    UFUNCTION(BlueprintCallable)
    static void ProfileUserslookupBP(const TArray<FZeuzProfileUserLookupIn>& In, const UZeuzApiProfile::FDelegateProfileUserslookupBP& Callback, const UZeuzApiProfile::FDelegateProfileUserslookupBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUserslookupBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUserslistBP(const FZeuzProfileUsersListIn& In, const UZeuzApiProfile::FDelegateProfileUserslistBP& Callback, const UZeuzApiProfile::FDelegateProfileUserslistBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUserslistBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUsersgetBP(const TArray<FString>& In, const UZeuzApiProfile::FDelegateProfileUsersgetBP& Callback, const UZeuzApiProfile::FDelegateProfileUsersgetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUsersgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUsersetpwhashBP(const FZeuzProfileUserPwHashIn& In, const UZeuzApiProfile::FDelegateProfileUsersetpwhashBP& Callback, const UZeuzApiProfile::FDelegateProfileUsersetpwhashBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUsersetpwhashBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUsersetBP(FZeuzUser In, const UZeuzApiProfile::FDelegateProfileUsersetBP& Callback, const UZeuzApiProfile::FDelegateProfileUsersetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUsersetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUserlookupBP(const FZeuzProfileUserLookupIn& In, const UZeuzApiProfile::FDelegateProfileUserlookupBP& Callback, const UZeuzApiProfile::FDelegateProfileUserlookupBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUserlookupBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUsergetpwhashBP(const FString& In, const UZeuzApiProfile::FDelegateProfileUsergetpwhashBP& Callback, const UZeuzApiProfile::FDelegateProfileUsergetpwhashBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUsergetpwhashBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUsergetBP(const FString& In, const UZeuzApiProfile::FDelegateProfileUsergetBP& Callback, const UZeuzApiProfile::FDelegateProfileUsergetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUsergetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUserdeleteBP(const FString& In, const UZeuzApiProfile::FDelegateProfileUserdeleteBP& Callback, const UZeuzApiProfile::FDelegateProfileUserdeleteBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUserdeleteBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileUsercreateBP(const FZeuzProfileUserCreateIn& In, const UZeuzApiProfile::FDelegateProfileUsercreateBP& Callback, const UZeuzApiProfile::FDelegateProfileUsercreateBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileUsercreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileProfilesgetBP(const TArray<FString>& In, const UZeuzApiProfile::FDelegateProfileProfilesgetBP& Callback, const UZeuzApiProfile::FDelegateProfileProfilesgetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileProfilesgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileProfilesetBP(FZeuzUserProfile In, const UZeuzApiProfile::FDelegateProfileProfilesetBP& Callback, const UZeuzApiProfile::FDelegateProfileProfilesetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileProfilesetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileProfilegetBP(const FString& In, const UZeuzApiProfile::FDelegateProfileProfilegetBP& Callback, const UZeuzApiProfile::FDelegateProfileProfilegetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileProfilegetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileProfiledeleteBP(const FString& In, const UZeuzApiProfile::FDelegateProfileProfiledeleteBP& Callback, const UZeuzApiProfile::FDelegateProfileProfiledeleteBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileProfiledeleteBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemtransferBP(const FZeuzProfileItemTransferIn& In, const UZeuzApiProfile::FDelegateProfileItemtransferBP& Callback, const UZeuzApiProfile::FDelegateProfileItemtransferBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemtransferBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemsetBP(FZeuzInvItem In, const UZeuzApiProfile::FDelegateProfileItemsetBP& Callback, const UZeuzApiProfile::FDelegateProfileItemsetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemsetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemrembynameBP(const FZeuzProfileItemRemByNameIn& In, const UZeuzApiProfile::FDelegateProfileItemrembynameBP& Callback, const UZeuzApiProfile::FDelegateProfileItemrembynameBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemrembynameBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemremBP(const FZeuzProfileItemRemIn& In, const UZeuzApiProfile::FDelegateProfileItemremBP& Callback, const UZeuzApiProfile::FDelegateProfileItemremBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemremBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemlistBP(const FString& In, const UZeuzApiProfile::FDelegateProfileItemlistBP& Callback, const UZeuzApiProfile::FDelegateProfileItemlistBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemlistBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemgetbynameBP(const FZeuzProfileItemUserName& In, const UZeuzApiProfile::FDelegateProfileItemgetbynameBP& Callback, const UZeuzApiProfile::FDelegateProfileItemgetbynameBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemgetbynameBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemgetBP(const FString& In, const UZeuzApiProfile::FDelegateProfileItemgetBP& Callback, const UZeuzApiProfile::FDelegateProfileItemgetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemcreateBP(FZeuzInvItem In, const UZeuzApiProfile::FDelegateProfileItemcreateBP& Callback, const UZeuzApiProfile::FDelegateProfileItemcreateBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemcreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemconfiggetBP(const UZeuzApiProfile::FDelegateProfileItemconfiggetBP& Callback, const UZeuzApiProfile::FDelegateProfileItemconfiggetBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemconfiggetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItembuyBP(const FZeuzProfileItemAddIn& In, const UZeuzApiProfile::FDelegateProfileItembuyBP& Callback, const UZeuzApiProfile::FDelegateProfileItembuyBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItembuyBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItembarterBP(const FZeuzProfileItemBarterIn& In, const UZeuzApiProfile::FDelegateProfileItembarterBP& Callback, const UZeuzApiProfile::FDelegateProfileItembarterBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItembarterBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void ProfileItemaddBP(const FZeuzProfileItemAddIn& In, const UZeuzApiProfile::FDelegateProfileItemaddBP& Callback, const UZeuzApiProfile::FDelegateProfileItemaddBPS& OnSuccess, const UZeuzApiProfile::FDelegateProfileItemaddBPF& OnFailure, const FZeuzContext& Ctx);
    
};

