#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzAdminTestpoolIn.h"
#include "ZeuzDeveloper.h"
#include "ZeuzAdminAccountIn.h"
#include "ZeuzEnv.h"
#include "ZeuzAdminEnvIn.h"
#include "ZeuzAdminItemsOut.h"
#include "ZeuzAdminItemsIn.h"
#include "ZeuzLogsearchOut.h"
#include "ZeuzAdminLogsIn.h"
#include "ZeuzProj.h"
#include "ZeuzAdminStatsOut.h"
#include "ZeuzAdminStatsIn.h"
#include "ZeuzContext.h"
#include "ZeuzAccount.h"
#include "ZeuzAdminAccountsIn.h"
#include "ZeuzAdminCountResoucesIn.h"
#include "ZeuzAdminCountResoucesPerAccountOut.h"
#include "ZeuzApiAdmin.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiAdmin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminStatsBPS, const FZeuzAdminStatsOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminStatsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminStatsBP, const FZeuzAdminStatsOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminProjectsBPS, const TArray<FZeuzProj>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminProjectsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminProjectsBP, const TArray<FZeuzProj>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminLogsBPS, FZeuzLogsearchOut, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminLogsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminLogsBP, FZeuzLogsearchOut, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminItemsBPS, const FZeuzAdminItemsOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminItemsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminItemsBP, const FZeuzAdminItemsOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminGetquotaBPS, int32, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminGetquotaBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminGetquotaBP, int32, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminEnvironmentsBPS, const TArray<FZeuzEnv>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminEnvironmentsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminEnvironmentsBP, const TArray<FZeuzEnv>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminDevelopersBPS, const TArray<FZeuzDeveloper>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminDevelopersBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminDevelopersBP, const TArray<FZeuzDeveloper>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminCountresourcesperaccBPS, const TArray<FZeuzAdminCountResoucesPerAccountOut>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminCountresourcesperaccBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminCountresourcesperaccBP, const TArray<FZeuzAdminCountResoucesPerAccountOut>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminCountresourcesBPS, int32, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminCountresourcesBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminCountresourcesBP, int32, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminAccountsBPS, const TArray<FZeuzAccount>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAdminAccountsBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAdminAccountsBP, const TArray<FZeuzAccount>&, Result, const FString&, Error);
    
    UZeuzApiAdmin();
    UFUNCTION(BlueprintCallable)
    static void AdminStatsBP(const FZeuzAdminStatsIn& In, const UZeuzApiAdmin::FDelegateAdminStatsBP& Callback, const UZeuzApiAdmin::FDelegateAdminStatsBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminStatsBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminProjectsBP(const FZeuzAdminAccountIn& In, const UZeuzApiAdmin::FDelegateAdminProjectsBP& Callback, const UZeuzApiAdmin::FDelegateAdminProjectsBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminProjectsBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminLogsBP(const FZeuzAdminLogsIn& In, const UZeuzApiAdmin::FDelegateAdminLogsBP& Callback, const UZeuzApiAdmin::FDelegateAdminLogsBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminLogsBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminItemsBP(const FZeuzAdminItemsIn& In, const UZeuzApiAdmin::FDelegateAdminItemsBP& Callback, const UZeuzApiAdmin::FDelegateAdminItemsBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminItemsBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminGetquotaBP(const FZeuzAdminTestpoolIn& In, const UZeuzApiAdmin::FDelegateAdminGetquotaBP& Callback, const UZeuzApiAdmin::FDelegateAdminGetquotaBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminGetquotaBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminEnvironmentsBP(const FZeuzAdminEnvIn& In, const UZeuzApiAdmin::FDelegateAdminEnvironmentsBP& Callback, const UZeuzApiAdmin::FDelegateAdminEnvironmentsBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminEnvironmentsBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminDevelopersBP(const FZeuzAdminAccountIn& In, const UZeuzApiAdmin::FDelegateAdminDevelopersBP& Callback, const UZeuzApiAdmin::FDelegateAdminDevelopersBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminDevelopersBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminCountresourcesperaccBP(const FZeuzAdminTestpoolIn& In, const UZeuzApiAdmin::FDelegateAdminCountresourcesperaccBP& Callback, const UZeuzApiAdmin::FDelegateAdminCountresourcesperaccBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminCountresourcesperaccBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminCountresourcesBP(const FZeuzAdminCountResoucesIn& In, const UZeuzApiAdmin::FDelegateAdminCountresourcesBP& Callback, const UZeuzApiAdmin::FDelegateAdminCountresourcesBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminCountresourcesBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AdminAccountsBP(const FZeuzAdminAccountsIn& In, const UZeuzApiAdmin::FDelegateAdminAccountsBP& Callback, const UZeuzApiAdmin::FDelegateAdminAccountsBPS& OnSuccess, const UZeuzApiAdmin::FDelegateAdminAccountsBPF& OnFailure, const FZeuzContext& Ctx);
    
};

