#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzVariant.h"
#include "ZeuzMetricsQueryIn.h"
#include "ZeuzApiMetrics.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiMetrics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadnetworksentBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadnetworksentBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsPayloadnetworksentBP, const FZeuzVariant&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadnetworkreceivedBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadnetworkreceivedBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsPayloadnetworkreceivedBP, const FZeuzVariant&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadmemoryusageBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadmemoryusageBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsPayloadmemoryusageBP, const FZeuzVariant&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadcpuusageBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadcpuusageBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsPayloadcpuusageBP, const FZeuzVariant&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadcountBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsPayloadcountBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsPayloadcountBP, const FZeuzVariant&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsMachinenetworksentBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsMachinenetworksentBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsMachinenetworksentBP, const FZeuzVariant&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsMachinenetworkreceivedBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsMachinenetworkreceivedBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsMachinenetworkreceivedBP, const FZeuzVariant&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsMachinememoryusageBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsMachinememoryusageBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsMachinememoryusageBP, const FZeuzVariant&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsMachinecpuusageBPS, const FZeuzVariant&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMetricsMachinecpuusageBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateMetricsMachinecpuusageBP, const FZeuzVariant&, Result, const FString&, Error);
    
    UZeuzApiMetrics();
    UFUNCTION(BlueprintCallable)
    static void MetricsPayloadnetworksentBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsPayloadnetworksentBP& Callback, const UZeuzApiMetrics::FDelegateMetricsPayloadnetworksentBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsPayloadnetworksentBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MetricsPayloadnetworkreceivedBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsPayloadnetworkreceivedBP& Callback, const UZeuzApiMetrics::FDelegateMetricsPayloadnetworkreceivedBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsPayloadnetworkreceivedBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MetricsPayloadmemoryusageBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsPayloadmemoryusageBP& Callback, const UZeuzApiMetrics::FDelegateMetricsPayloadmemoryusageBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsPayloadmemoryusageBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MetricsPayloadcpuusageBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsPayloadcpuusageBP& Callback, const UZeuzApiMetrics::FDelegateMetricsPayloadcpuusageBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsPayloadcpuusageBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MetricsPayloadcountBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsPayloadcountBP& Callback, const UZeuzApiMetrics::FDelegateMetricsPayloadcountBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsPayloadcountBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MetricsMachinenetworksentBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsMachinenetworksentBP& Callback, const UZeuzApiMetrics::FDelegateMetricsMachinenetworksentBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsMachinenetworksentBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MetricsMachinenetworkreceivedBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsMachinenetworkreceivedBP& Callback, const UZeuzApiMetrics::FDelegateMetricsMachinenetworkreceivedBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsMachinenetworkreceivedBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MetricsMachinememoryusageBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsMachinememoryusageBP& Callback, const UZeuzApiMetrics::FDelegateMetricsMachinememoryusageBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsMachinememoryusageBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void MetricsMachinecpuusageBP(const FZeuzMetricsQueryIn& In, const UZeuzApiMetrics::FDelegateMetricsMachinecpuusageBP& Callback, const UZeuzApiMetrics::FDelegateMetricsMachinecpuusageBPS& OnSuccess, const UZeuzApiMetrics::FDelegateMetricsMachinecpuusageBPF& OnFailure, const FZeuzContext& Ctx);
    
};

