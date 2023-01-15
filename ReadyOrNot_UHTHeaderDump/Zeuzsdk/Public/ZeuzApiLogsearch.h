#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzLogsearchAccountIn.h"
#include "ZeuzLogsearchLogsStatus.h"
#include "ZeuzLogsearchAccountOut.h"
#include "ZeuzApiLogsearch.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiLogsearch : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLogsearchStartexportBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLogsearchStartexportBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLogsearchStartexportBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLogsearchDownloadexportBPS, const FString&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLogsearchDownloadexportBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLogsearchDownloadexportBP, const FString&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLogsearchCheckexportBPS, const FZeuzLogsearchLogsStatus&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLogsearchCheckexportBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLogsearchCheckexportBP, const FZeuzLogsearchLogsStatus&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLogsearchAccountBPS, const FZeuzLogsearchAccountOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateLogsearchAccountBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateLogsearchAccountBP, const FZeuzLogsearchAccountOut&, Result, const FString&, Error);
    
    UZeuzApiLogsearch();
    UFUNCTION(BlueprintCallable)
    static void LogsearchStartexportBP(const FZeuzLogsearchAccountIn& In, const UZeuzApiLogsearch::FDelegateLogsearchStartexportBP& Callback, const UZeuzApiLogsearch::FDelegateLogsearchStartexportBPS& OnSuccess, const UZeuzApiLogsearch::FDelegateLogsearchStartexportBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LogsearchDownloadexportBP(const FString& In, const UZeuzApiLogsearch::FDelegateLogsearchDownloadexportBP& Callback, const UZeuzApiLogsearch::FDelegateLogsearchDownloadexportBPS& OnSuccess, const UZeuzApiLogsearch::FDelegateLogsearchDownloadexportBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LogsearchCheckexportBP(const FString& In, const UZeuzApiLogsearch::FDelegateLogsearchCheckexportBP& Callback, const UZeuzApiLogsearch::FDelegateLogsearchCheckexportBPS& OnSuccess, const UZeuzApiLogsearch::FDelegateLogsearchCheckexportBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void LogsearchAccountBP(const FZeuzLogsearchAccountIn& In, const UZeuzApiLogsearch::FDelegateLogsearchAccountBP& Callback, const UZeuzApiLogsearch::FDelegateLogsearchAccountBPS& OnSuccess, const UZeuzApiLogsearch::FDelegateLogsearchAccountBPF& OnFailure, const FZeuzContext& Ctx);
    
};

