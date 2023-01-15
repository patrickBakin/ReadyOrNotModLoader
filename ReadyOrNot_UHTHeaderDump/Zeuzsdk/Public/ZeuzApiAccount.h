#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzAccountProjectDeleteIn.h"
#include "ZeuzAccountQuotaInfo.h"
#include "ZeuzAccountTeamCreateIn.h"
#include "ZeuzAccountTeamDeleteIn.h"
#include "ZeuzTeam.h"
#include "ZeuzDeveloper.h"
#include "ZeuzEnv.h"
#include "ZeuzServiceCfg.h"
#include "ZeuzProj.h"
#include "ZeuzAccountCreateIn.h"
#include "ZeuzAccountDeveloperCreateIn.h"
#include "ZeuzAccountDeveloperCreatePwHashIn.h"
#include "ZeuzAccountDeveloperPasswordResetExecuteRequestIn.h"
#include "ZeuzAccountDeveloperPasswordResetIn.h"
#include "ZeuzAccountDeveloperSetPwHashIn.h"
#include "ZeuzAccountDevQuickSetupOut.h"
#include "ZeuzAccountDevQuickSetupIn.h"
#include "ZeuzAccountEnvCreateIn.h"
#include "ZeuzAccountEnvDeleteIn.h"
#include "ZeuzAccountProjectCreateIn.h"
#include "ZeuzContext.h"
#include "ZeuzAccount.h"
#include "ZeuzApiAccount.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiAccount : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountTeamupdateBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountTeamupdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountTeamupdateBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountTeamgetBPS, FZeuzTeam, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountTeamgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountTeamgetBP, FZeuzTeam, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountTeamdeleteBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountTeamdeleteBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountTeamdeleteBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountTeamcreateBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountTeamcreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountTeamcreateBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountQuotasetBPS, const FZeuzAccountQuotaInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountQuotasetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountQuotasetBP, const FZeuzAccountQuotaInfo&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountQuotagetBPS, const FZeuzAccountQuotaInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountQuotagetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountQuotagetBP, const FZeuzAccountQuotaInfo&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountProjectupdateBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectupdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectupdateBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectsgetBPS, const TArray<FZeuzProj>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectsgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountProjectsgetBP, const TArray<FZeuzProj>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectgetBPS, FZeuzProj, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountProjectgetBP, FZeuzProj, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountProjectdeleteBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectdeleteBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectdeleteBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectcreateBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountProjectcreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountProjectcreateBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountEnvupdateBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvupdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvupdateBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvsgetBPS, const TArray<FZeuzEnv>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvsgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountEnvsgetBP, const TArray<FZeuzEnv>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountEnvserviceupdateBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvserviceupdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvserviceupdateBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountEnvservicedeleteBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvservicedeleteBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvservicedeleteBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvgetBPS, FZeuzEnv, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountEnvgetBP, FZeuzEnv, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountEnvdeleteBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvdeleteBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvdeleteBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvcreateBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountEnvcreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountEnvcreateBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevquicksetupBPS, const FZeuzAccountDevQuickSetupOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevquicksetupBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountDevquicksetupBP, const FZeuzAccountDevQuickSetupOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountDeveloperupdateBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperupdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperupdateBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopersgetBPS, const TArray<FZeuzDeveloper>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopersgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountDevelopersgetBP, const TArray<FZeuzDeveloper>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopersetpwhashBPS, FZeuzDeveloper, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopersetpwhashBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountDevelopersetpwhashBP, FZeuzDeveloper, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountDeveloperrevokeBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperrevokeBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperrevokeBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountDeveloperpasswordresetrequestBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperpasswordresetrequestBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperpasswordresetrequestBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountDeveloperpasswordresetBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperpasswordresetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperpasswordresetBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperispasswordresethashexpiredBPS, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperispasswordresethashexpiredBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountDeveloperispasswordresethashexpiredBP, bool, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperinviteBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDeveloperinviteBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountDeveloperinviteBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopergetBPS, FZeuzDeveloper, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopergetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountDevelopergetBP, FZeuzDeveloper, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopercreatepwhashBPS, FZeuzDeveloper, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopercreatepwhashBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountDevelopercreatepwhashBP, FZeuzDeveloper, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopercreateBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountDevelopercreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountDevelopercreateBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE(FDelegateAccountAccountupdateBPS);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountAccountupdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountAccountupdateBP, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountAccountgetBPS, FZeuzAccount, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountAccountgetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountAccountgetBP, FZeuzAccount, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountAccountcreateBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAccountAccountcreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAccountAccountcreateBP, const FString&, Result, const FString&, Error);
    
    UZeuzApiAccount();
    UFUNCTION(BlueprintCallable)
    static void AccountTeamupdateBP(FZeuzTeam In, const UZeuzApiAccount::FDelegateAccountTeamupdateBP& Callback, const UZeuzApiAccount::FDelegateAccountTeamupdateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountTeamupdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountTeamgetBP(const FString& In, const UZeuzApiAccount::FDelegateAccountTeamgetBP& Callback, const UZeuzApiAccount::FDelegateAccountTeamgetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountTeamgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountTeamdeleteBP(const FZeuzAccountTeamDeleteIn& In, const UZeuzApiAccount::FDelegateAccountTeamdeleteBP& Callback, const UZeuzApiAccount::FDelegateAccountTeamdeleteBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountTeamdeleteBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountTeamcreateBP(const FZeuzAccountTeamCreateIn& In, const UZeuzApiAccount::FDelegateAccountTeamcreateBP& Callback, const UZeuzApiAccount::FDelegateAccountTeamcreateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountTeamcreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountQuotasetBP(const FZeuzAccountQuotaInfo& In, const UZeuzApiAccount::FDelegateAccountQuotasetBP& Callback, const UZeuzApiAccount::FDelegateAccountQuotasetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountQuotasetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountQuotagetBP(const FString& In, const UZeuzApiAccount::FDelegateAccountQuotagetBP& Callback, const UZeuzApiAccount::FDelegateAccountQuotagetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountQuotagetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountProjectupdateBP(FZeuzProj In, const UZeuzApiAccount::FDelegateAccountProjectupdateBP& Callback, const UZeuzApiAccount::FDelegateAccountProjectupdateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountProjectupdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountProjectsgetBP(const TArray<FString>& In, const UZeuzApiAccount::FDelegateAccountProjectsgetBP& Callback, const UZeuzApiAccount::FDelegateAccountProjectsgetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountProjectsgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountProjectgetBP(const FString& In, const UZeuzApiAccount::FDelegateAccountProjectgetBP& Callback, const UZeuzApiAccount::FDelegateAccountProjectgetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountProjectgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountProjectdeleteBP(const FZeuzAccountProjectDeleteIn& In, const UZeuzApiAccount::FDelegateAccountProjectdeleteBP& Callback, const UZeuzApiAccount::FDelegateAccountProjectdeleteBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountProjectdeleteBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountProjectcreateBP(const FZeuzAccountProjectCreateIn& In, const UZeuzApiAccount::FDelegateAccountProjectcreateBP& Callback, const UZeuzApiAccount::FDelegateAccountProjectcreateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountProjectcreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountEnvupdateBP(FZeuzEnv In, const UZeuzApiAccount::FDelegateAccountEnvupdateBP& Callback, const UZeuzApiAccount::FDelegateAccountEnvupdateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountEnvupdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountEnvsgetBP(const TArray<FString>& In, const UZeuzApiAccount::FDelegateAccountEnvsgetBP& Callback, const UZeuzApiAccount::FDelegateAccountEnvsgetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountEnvsgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountEnvserviceupdateBP(FZeuzServiceCfg In, const UZeuzApiAccount::FDelegateAccountEnvserviceupdateBP& Callback, const UZeuzApiAccount::FDelegateAccountEnvserviceupdateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountEnvserviceupdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountEnvservicedeleteBP(const FString& In, const UZeuzApiAccount::FDelegateAccountEnvservicedeleteBP& Callback, const UZeuzApiAccount::FDelegateAccountEnvservicedeleteBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountEnvservicedeleteBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountEnvgetBP(const FString& In, const UZeuzApiAccount::FDelegateAccountEnvgetBP& Callback, const UZeuzApiAccount::FDelegateAccountEnvgetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountEnvgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountEnvdeleteBP(const FZeuzAccountEnvDeleteIn& In, const UZeuzApiAccount::FDelegateAccountEnvdeleteBP& Callback, const UZeuzApiAccount::FDelegateAccountEnvdeleteBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountEnvdeleteBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountEnvcreateBP(const FZeuzAccountEnvCreateIn& In, const UZeuzApiAccount::FDelegateAccountEnvcreateBP& Callback, const UZeuzApiAccount::FDelegateAccountEnvcreateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountEnvcreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDevquicksetupBP(const FZeuzAccountDevQuickSetupIn& In, const UZeuzApiAccount::FDelegateAccountDevquicksetupBP& Callback, const UZeuzApiAccount::FDelegateAccountDevquicksetupBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDevquicksetupBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDeveloperupdateBP(FZeuzDeveloper In, const UZeuzApiAccount::FDelegateAccountDeveloperupdateBP& Callback, const UZeuzApiAccount::FDelegateAccountDeveloperupdateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDeveloperupdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDevelopersgetBP(const FString& In, const UZeuzApiAccount::FDelegateAccountDevelopersgetBP& Callback, const UZeuzApiAccount::FDelegateAccountDevelopersgetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDevelopersgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDevelopersetpwhashBP(const FZeuzAccountDeveloperSetPwHashIn& In, const UZeuzApiAccount::FDelegateAccountDevelopersetpwhashBP& Callback, const UZeuzApiAccount::FDelegateAccountDevelopersetpwhashBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDevelopersetpwhashBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDeveloperrevokeBP(const FString& In, const UZeuzApiAccount::FDelegateAccountDeveloperrevokeBP& Callback, const UZeuzApiAccount::FDelegateAccountDeveloperrevokeBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDeveloperrevokeBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDeveloperpasswordresetrequestBP(const FZeuzAccountDeveloperPasswordResetIn& In, const UZeuzApiAccount::FDelegateAccountDeveloperpasswordresetrequestBP& Callback, const UZeuzApiAccount::FDelegateAccountDeveloperpasswordresetrequestBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDeveloperpasswordresetrequestBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDeveloperpasswordresetBP(const FZeuzAccountDeveloperPasswordResetExecuteRequestIn& In, const UZeuzApiAccount::FDelegateAccountDeveloperpasswordresetBP& Callback, const UZeuzApiAccount::FDelegateAccountDeveloperpasswordresetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDeveloperpasswordresetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDeveloperispasswordresethashexpiredBP(const FString& In, const UZeuzApiAccount::FDelegateAccountDeveloperispasswordresethashexpiredBP& Callback, const UZeuzApiAccount::FDelegateAccountDeveloperispasswordresethashexpiredBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDeveloperispasswordresethashexpiredBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDeveloperinviteBP(const FZeuzAccountDeveloperCreateIn& In, const UZeuzApiAccount::FDelegateAccountDeveloperinviteBP& Callback, const UZeuzApiAccount::FDelegateAccountDeveloperinviteBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDeveloperinviteBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDevelopergetBP(const FString& In, const UZeuzApiAccount::FDelegateAccountDevelopergetBP& Callback, const UZeuzApiAccount::FDelegateAccountDevelopergetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDevelopergetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDevelopercreatepwhashBP(const FZeuzAccountDeveloperCreatePwHashIn& In, const UZeuzApiAccount::FDelegateAccountDevelopercreatepwhashBP& Callback, const UZeuzApiAccount::FDelegateAccountDevelopercreatepwhashBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDevelopercreatepwhashBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountDevelopercreateBP(const FZeuzAccountDeveloperCreateIn& In, const UZeuzApiAccount::FDelegateAccountDevelopercreateBP& Callback, const UZeuzApiAccount::FDelegateAccountDevelopercreateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountDevelopercreateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountAccountupdateBP(FZeuzAccount In, const UZeuzApiAccount::FDelegateAccountAccountupdateBP& Callback, const UZeuzApiAccount::FDelegateAccountAccountupdateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountAccountupdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountAccountgetBP(const FString& In, const UZeuzApiAccount::FDelegateAccountAccountgetBP& Callback, const UZeuzApiAccount::FDelegateAccountAccountgetBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountAccountgetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AccountAccountcreateBP(const FZeuzAccountCreateIn& In, const UZeuzApiAccount::FDelegateAccountAccountcreateBP& Callback, const UZeuzApiAccount::FDelegateAccountAccountcreateBPS& OnSuccess, const UZeuzApiAccount::FDelegateAccountAccountcreateBPF& OnFailure, const FZeuzContext& Ctx);
    
};

