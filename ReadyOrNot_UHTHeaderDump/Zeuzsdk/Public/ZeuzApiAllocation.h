#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ZeuzContext.h"
#include "ZeuzAllocationGetOut.h"
#include "ZeuzAllocationGetIn.h"
#include "ZeuzAllocationPayloadInfo.h"
#include "ZeuzAllocationRequestServiceIn.h"
#include "ZeuzAllocationUpdateIn.h"
#include "ZeuzAllocationCreateIn.h"
#include "ZeuzAllocationInfo.h"
#include "ZeuzApiAllocation.generated.h"

UCLASS(Blueprintable)
class ZEUZSDK_API UZeuzApiAllocation : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAllocationUpdateBPS, const FZeuzAllocationInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAllocationUpdateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAllocationUpdateBP, const FZeuzAllocationInfo&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAllocationRequestServicesBPS, const TArray<FZeuzAllocationPayloadInfo>&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAllocationRequestServicesBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAllocationRequestServicesBP, const TArray<FZeuzAllocationPayloadInfo>&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAllocationGetBPS, const FZeuzAllocationGetOut&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAllocationGetBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAllocationGetBP, const FZeuzAllocationGetOut&, Result, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAllocationCreateBPS, const FZeuzAllocationInfo&, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateAllocationCreateBPF, const FString&, Error);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateAllocationCreateBP, const FZeuzAllocationInfo&, Result, const FString&, Error);
    
    UZeuzApiAllocation();
    UFUNCTION(BlueprintCallable)
    static void AllocationUpdateBP(const FZeuzAllocationUpdateIn& In, const UZeuzApiAllocation::FDelegateAllocationUpdateBP& Callback, const UZeuzApiAllocation::FDelegateAllocationUpdateBPS& OnSuccess, const UZeuzApiAllocation::FDelegateAllocationUpdateBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AllocationRequestServicesBP(const FZeuzAllocationRequestServiceIn& In, const UZeuzApiAllocation::FDelegateAllocationRequestServicesBP& Callback, const UZeuzApiAllocation::FDelegateAllocationRequestServicesBPS& OnSuccess, const UZeuzApiAllocation::FDelegateAllocationRequestServicesBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AllocationGetBP(const FZeuzAllocationGetIn& In, const UZeuzApiAllocation::FDelegateAllocationGetBP& Callback, const UZeuzApiAllocation::FDelegateAllocationGetBPS& OnSuccess, const UZeuzApiAllocation::FDelegateAllocationGetBPF& OnFailure, const FZeuzContext& Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AllocationCreateBP(const FZeuzAllocationCreateIn& In, const UZeuzApiAllocation::FDelegateAllocationCreateBP& Callback, const UZeuzApiAllocation::FDelegateAllocationCreateBPS& OnSuccess, const UZeuzApiAllocation::FDelegateAllocationCreateBPF& OnFailure, const FZeuzContext& Ctx);
    
};

